//
//  FLEXNetworkRecorder.m
//  Flipboard
//
//  Created by Ryan Olson on 2/4/15.
//  Copyright (c) 2015 Flipboard. All rights reserved.
//

#import "FLEXNetworkRecorder.h"
#import "FLEXNetworkCurlLogger.h"
#import "FLEXNetworkTransaction.h"
#import "FLEXUtility.h"
#import "FLEXResources.h"
#import "WJToolUTil.h"

NSString *const kFLEXNetworkRecorderNewTransactionNotification = @"kFLEXNetworkRecorderNewTransactionNotification";
NSString *const kFLEXNetworkRecorderTransactionUpdatedNotification = @"kFLEXNetworkRecorderTransactionUpdatedNotification";
NSString *const kFLEXNetworkRecorderUserInfoTransactionKey = @"transaction";
NSString *const kFLEXNetworkRecorderTransactionsClearedNotification = @"kFLEXNetworkRecorderTransactionsClearedNotification";

NSString *const kFLEXNetworkRecorderResponseCacheLimitDefaultsKey = @"com.flex.responseCacheLimit";

@interface FLEXNetworkRecorder ()

@property (nonatomic, strong) NSCache *responseCache;
@property (nonatomic, strong) NSMutableArray<FLEXNetworkTransaction *> *orderedTransactions;
@property (nonatomic, strong) NSMutableDictionary<NSString *, FLEXNetworkTransaction *> *networkTransactionsForRequestIdentifiers;
@property (nonatomic, strong) dispatch_queue_t queue;

@end

@implementation FLEXNetworkRecorder

- (instancetype)init
{
    self = [super init];
    if (self) {
        self.responseCache = [[NSCache alloc] init];
        NSUInteger responseCacheLimit = [[[NSUserDefaults standardUserDefaults] objectForKey:kFLEXNetworkRecorderResponseCacheLimitDefaultsKey] unsignedIntegerValue];
        if (responseCacheLimit) {
            [self.responseCache setTotalCostLimit:responseCacheLimit];
        } else {
            // Default to 25 MB max. The cache will purge earlier if there is memory pressure.
            [self.responseCache setTotalCostLimit:25 * 1024 * 1024];
        }
        self.orderedTransactions = [NSMutableArray array];
        self.networkTransactionsForRequestIdentifiers = [NSMutableDictionary dictionary];

        // Serial queue used because we use mutable objects that are not thread safe
        self.queue = dispatch_queue_create("com.flex.FLEXNetworkRecorder", DISPATCH_QUEUE_SERIAL);
    }
    return self;
}

+ (instancetype)defaultRecorder
{
    static FLEXNetworkRecorder *defaultRecorder = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        defaultRecorder = [[[self class] alloc] init];
    });
    return defaultRecorder;
}

#pragma mark - Public Data Access

- (NSUInteger)responseCacheByteLimit
{
    return [self.responseCache totalCostLimit];
}

- (void)setResponseCacheByteLimit:(NSUInteger)responseCacheByteLimit
{
    [self.responseCache setTotalCostLimit:responseCacheByteLimit];
    [[NSUserDefaults standardUserDefaults] setObject:@(responseCacheByteLimit) forKey:kFLEXNetworkRecorderResponseCacheLimitDefaultsKey];
}

- (NSArray<FLEXNetworkTransaction *> *)networkTransactions
{
    __block NSArray<FLEXNetworkTransaction *> *transactions = nil;
    dispatch_sync(self.queue, ^{
        transactions = [self.orderedTransactions copy];
    });
    return transactions;
}

- (NSData *)cachedResponseBodyForTransaction:(FLEXNetworkTransaction *)transaction
{
    return [self.responseCache objectForKey:transaction.requestID];
}

- (void)clearRecordedActivity
{
    dispatch_async(self.queue, ^{
        [self.responseCache removeAllObjects];
        [self.orderedTransactions removeAllObjects];
        [self.networkTransactionsForRequestIdentifiers removeAllObjects];
        dispatch_async(dispatch_get_main_queue(), ^{
            [[NSNotificationCenter defaultCenter] postNotificationName:kFLEXNetworkRecorderTransactionsClearedNotification object:self];
        });
    });
}

#pragma mark - Network Events

- (void)recordRequestWillBeSentWithRequestID:(NSString *)requestID request:(NSURLRequest *)request redirectResponse:(NSURLResponse *)redirectResponse
{
    for (NSString *host in self.hostBlacklist) {
        if ([request.URL.host hasSuffix:host]) {
            return;
        }
    }
    
    NSDate *startDate = [NSDate date];

    if (redirectResponse) {
        [self recordResponseReceivedWithRequestID:requestID response:redirectResponse];
        [self recordLoadingFinishedWithRequestID:requestID responseBody:nil];
    }

    dispatch_async(self.queue, ^{
        FLEXNetworkTransaction *transaction = [[FLEXNetworkTransaction alloc] init];
        transaction.requestID = requestID;
        transaction.request = request;
        transaction.startTime = startDate;

        [self.orderedTransactions insertObject:transaction atIndex:0];
        [self.networkTransactionsForRequestIdentifiers setObject:transaction forKey:requestID];
        transaction.transactionState = FLEXNetworkTransactionStateAwaitingResponse;

        [self postNewTransactionNotificationWithTransaction:transaction];
    });
}

- (void)recordResponseReceivedWithRequestID:(NSString *)requestID response:(NSURLResponse *)response
{
    NSDate *responseDate = [NSDate date];

    dispatch_async(self.queue, ^{
        FLEXNetworkTransaction *transaction = self.networkTransactionsForRequestIdentifiers[requestID];
        if (!transaction) {
            return;
        }
        transaction.response = response;
        transaction.transactionState = FLEXNetworkTransactionStateReceivingData;
        transaction.latency = -[transaction.startTime timeIntervalSinceDate:responseDate];

        [self postUpdateNotificationForTransaction:transaction];
    });
}

- (void)recordDataReceivedWithRequestID:(NSString *)requestID dataLength:(int64_t)dataLength
{
    dispatch_async(self.queue, ^{
        FLEXNetworkTransaction *transaction = self.networkTransactionsForRequestIdentifiers[requestID];
        if (!transaction) {
            return;
        }
        transaction.receivedDataLength += dataLength;

        [self postUpdateNotificationForTransaction:transaction];
    });
}

- (void)recordLoadingFinishedWithRequestID:(NSString *)requestID responseBody:(NSData *)responseBody
{
    NSDate *finishedDate = [NSDate date];

    dispatch_async(self.queue, ^{
        FLEXNetworkTransaction *transaction = self.networkTransactionsForRequestIdentifiers[requestID];
        if (!transaction) {
            return;
        }
        
        // log 就不显示嘹
        if ([transaction.request.URL.absoluteString isEqualToString:@"https://mdap.alipay.com/loggw/logUpload.do"])
            return;
        
        transaction.transactionState = FLEXNetworkTransactionStateFinished;
        transaction.duration = -[transaction.startTime timeIntervalSinceDate:finishedDate];

        BOOL shouldCache = [responseBody length] > 0;
        if (!self.shouldCacheMediaResponses) {
            NSArray<NSString *> *ignoredMIMETypePrefixes = @[ @"audio", @"image", @"video" ];
            for (NSString *ignoredPrefix in ignoredMIMETypePrefixes) {
                shouldCache = shouldCache && ![transaction.response.MIMEType hasPrefix:ignoredPrefix];
            }
        }
        
        if (shouldCache) {
            [self.responseCache setObject:responseBody forKey:requestID cost:[responseBody length]];
        }

        NSString *mimeType = transaction.response.MIMEType;
        if ([mimeType hasPrefix:@"image/"] && [responseBody length] > 0) {
            // Thumbnail image previews on a separate background queue
            dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^{
                NSInteger maxPixelDimension = [[UIScreen mainScreen] scale] * 32.0;
                transaction.responseThumbnail = [FLEXUtility thumbnailedImageWithMaxPixelDimension:maxPixelDimension fromImageData:responseBody];
                [self postUpdateNotificationForTransaction:transaction];
            });
        } else if ([mimeType isEqual:@"application/json"]) {
            transaction.responseThumbnail = [FLEXResources jsonIcon];
        } else if ([mimeType isEqual:@"text/plain"]){
            transaction.responseThumbnail = [FLEXResources textPlainIcon];
        } else if ([mimeType isEqual:@"text/html"]) {
            transaction.responseThumbnail = [FLEXResources htmlIcon];
        } else if ([mimeType isEqual:@"application/x-plist"]) {
            transaction.responseThumbnail = [FLEXResources plistIcon];
        } else if ([mimeType isEqual:@"application/octet-stream"] || [mimeType isEqual:@"application/binary"]) {
            transaction.responseThumbnail = [FLEXResources binaryIcon];
        } else if ([mimeType rangeOfString:@"javascript"].length > 0) {
            transaction.responseThumbnail = [FLEXResources jsIcon];
        } else if ([mimeType rangeOfString:@"xml"].length > 0) {
            transaction.responseThumbnail = [FLEXResources xmlIcon];
        } else if ([mimeType hasPrefix:@"audio"]) {
            transaction.responseThumbnail = [FLEXResources audioIcon];
        } else if ([mimeType hasPrefix:@"video"]) {
            transaction.responseThumbnail = [FLEXResources videoIcon];
        } else if ([mimeType hasPrefix:@"text"]) {
            transaction.responseThumbnail = [FLEXResources textIcon];
        }
        
        NSMutableString* log = [[NSMutableString alloc] initWithString:@"👍FLEX -> \n"];
        // General
        [log appendString:@"\tGeneral {\n"];
        
        [log appendFormat:@"\t\t %@ -> %@\n", @"Request URL", transaction.request.URL.absoluteString];
        [log appendFormat:@"\t\t %@ -> %@\n", @"Request Method", transaction.request.HTTPMethod];
        if ([transaction.cachedRequestBody length] > 0) {
            [log appendFormat:@"\t\t %@ -> %@\n", @"Request Body Size", [NSByteCountFormatter stringFromByteCount:[transaction.cachedRequestBody length] countStyle:NSByteCountFormatterCountStyleBinary]];
            NSData *bodyData = transaction.cachedRequestBody;
            if ([bodyData length] > 0) {
                NSString *contentEncoding = [transaction.request valueForHTTPHeaderField:@"Content-Encoding"];
                if ([contentEncoding rangeOfString:@"deflate" options:NSCaseInsensitiveSearch].length > 0 || [contentEncoding rangeOfString:@"gzip" options:NSCaseInsensitiveSearch].length > 0) {
                    bodyData = [FLEXUtility inflatedDataFromCompressedData:bodyData];
                }
                [log appendFormat:@"\t\t %@ -> %@\n", @"Request Body", [WJToolUtil data2HexStr:bodyData]];
            }
        }
        NSString *statusCodeString = [FLEXUtility statusCodeStringFromURLResponse:transaction.response];
        if ([statusCodeString length] > 0) {
            [log appendFormat:@"\t\t %@ -> %@\n", @"Status Code", [FLEXUtility statusCodeStringFromURLResponse:transaction.response]];
        }
        if (transaction.error) {
            [log appendFormat:@"\t\t %@ -> %@\n", @"Error", transaction.error.localizedDescription];
        }
        NSData *responseData = [[FLEXNetworkRecorder defaultRecorder] cachedResponseBodyForTransaction:transaction];
        if ([responseData length] > 0) {
            // 调整显示长度
            NSUInteger respLen = [responseData length];
            responseData = [NSData dataWithBytes:[responseData bytes] length:respLen < 0x1000 ? respLen : 0x1000];
            [log appendFormat:@"\t\t %@ -> %@\n", @"Response Body", [WJToolUtil data2HexStr:responseData]];
        } else {
            BOOL emptyResponse = transaction.receivedDataLength == 0;
            [log appendFormat:@"\t\t %@ -> %@\n", @"Response Body", emptyResponse ? @"empty" : @"not in cache"];
        }
        [log appendFormat:@"\t\t %@ -> %@\n", @"Response Size", [NSByteCountFormatter stringFromByteCount:transaction.receivedDataLength countStyle:NSByteCountFormatterCountStyleBinary]];
        [log appendFormat:@"\t\t %@ -> %@\n", @"MIME Type", transaction.response.MIMEType];
        [log appendFormat:@"\t\t %@ -> %@\n", @"Mechanism", transaction.requestMechanism];
        NSDateFormatter *startTimeFormatter = [[NSDateFormatter alloc] init];
        startTimeFormatter.dateFormat = @"yyyy-MM-dd HH:mm:ss.SSS";
        [log appendFormat:@"\t\t %@ -> %@\n", [NSString stringWithFormat:@"Start Time (%@)", [[NSTimeZone localTimeZone] abbreviationForDate:transaction.startTime]], [startTimeFormatter stringFromDate:transaction.startTime]];
        startTimeFormatter.timeZone = [NSTimeZone timeZoneWithAbbreviation:@"UTC"];
        [log appendFormat:@"\t\t %@ -> %@\n", @"Start Time (UTC)", [startTimeFormatter stringFromDate:transaction.startTime]];
        [log appendFormat:@"\t\t %@ -> %@\n", @"Unix Start Time", [NSString stringWithFormat:@"%f", [transaction.startTime timeIntervalSince1970]]];
        [log appendFormat:@"\t\t %@ -> %@\n", @"Total Duration", [FLEXUtility stringFromRequestDuration:transaction.duration]];
        [log appendFormat:@"\t\t %@ -> %@\n", @"Latency", [FLEXUtility stringFromRequestDuration:transaction.latency]];
        [log appendString:@"\t}\n"];
        
        NSMutableDictionary<NSString *, NSDictionary<NSString *, NSString *> *> *details = [[NSMutableDictionary alloc] init];
        // Request Headers
        if (transaction.request.allHTTPHeaderFields == NULL) {
            [details setObject:[NSDictionary new] forKey:@"Request Headers"];
        } else {
            [details setObject:transaction.request.allHTTPHeaderFields forKey:@"Request Headers"];
        }
        // Query Parameters
        [details setObject:[FLEXUtility dictionaryFromQuery:transaction.request.URL.query] forKey:@"Query Parameters"];
        
        // req cookie
        NSHTTPCookieStorage * storage = [NSHTTPCookieStorage sharedHTTPCookieStorage];
        NSArray *cookies = [storage cookiesForURL:transaction.request.URL];
        if (cookies == NULL) {
            [details setObject:[NSDictionary new] forKey:@"Request Cookies"];
        } else {
            NSMutableDictionary<NSString *, NSString *> *cookieDict = [[NSMutableDictionary alloc] init];
            for (NSHTTPCookie * cookie in cookies)
            {
                [cookieDict setObject:cookie.value forKey:cookie.name];
            }
            [details setObject:cookieDict forKey:@"Request Cookies"];
        }
        
        // Request Body Parameters
        if ([transaction.cachedRequestBody length] > 0) {
            NSString *contentType = [transaction.request valueForHTTPHeaderField:@"Content-Type"];
            if ([contentType hasPrefix:@"application/x-www-form-urlencoded"]) {
                NSData *bodyData = transaction.cachedRequestBody;
                if ([bodyData length] > 0) {
                    NSString *contentEncoding = [transaction.request valueForHTTPHeaderField:@"Content-Encoding"];
                    if ([contentEncoding rangeOfString:@"deflate" options:NSCaseInsensitiveSearch].length > 0 || [contentEncoding rangeOfString:@"gzip" options:NSCaseInsensitiveSearch].length > 0) {
                        bodyData = [FLEXUtility inflatedDataFromCompressedData:bodyData];
                    }
                }
                NSString *bodyString = [[NSString alloc] initWithData:bodyData encoding:NSUTF8StringEncoding];
                [FLEXUtility dictionaryFromQuery:bodyString];
                [details setObject:[FLEXUtility dictionaryFromQuery:bodyString] forKey:@"Request Body Parameters"];
            }
        }
        // Response Headers
        if ([transaction.response isKindOfClass:[NSHTTPURLResponse class]]) {
            NSHTTPURLResponse *httpResponse = (NSHTTPURLResponse *)transaction.response;
            [details setObject:httpResponse.allHeaderFields forKey:@"Response Headers"];
        }
        
        // 添加日志输入选中的请求的数据
        WJLog(@"%@%@", log, [WJToolUtil ivarKeyValueDescription:details]);
        
        [self postUpdateNotificationForTransaction:transaction];
    });
}

- (void)recordLoadingFailedWithRequestID:(NSString *)requestID error:(NSError *)error
{
    dispatch_async(self.queue, ^{
        FLEXNetworkTransaction *transaction = self.networkTransactionsForRequestIdentifiers[requestID];
        if (!transaction) {
            return;
        }
        transaction.transactionState = FLEXNetworkTransactionStateFailed;
        transaction.duration = -[transaction.startTime timeIntervalSinceNow];
        transaction.error = error;

        [self postUpdateNotificationForTransaction:transaction];
    });
}

- (void)recordMechanism:(NSString *)mechanism forRequestID:(NSString *)requestID
{
    dispatch_async(self.queue, ^{
        FLEXNetworkTransaction *transaction = self.networkTransactionsForRequestIdentifiers[requestID];
        if (!transaction) {
            return;
        }
        transaction.requestMechanism = mechanism;

        [self postUpdateNotificationForTransaction:transaction];
    });
}

#pragma mark Notification Posting

- (void)postNewTransactionNotificationWithTransaction:(FLEXNetworkTransaction *)transaction
{
    dispatch_async(dispatch_get_main_queue(), ^{
        NSDictionary<NSString *, id> *userInfo = @{ kFLEXNetworkRecorderUserInfoTransactionKey : transaction };
        [[NSNotificationCenter defaultCenter] postNotificationName:kFLEXNetworkRecorderNewTransactionNotification object:self userInfo:userInfo];
    });
}

- (void)postUpdateNotificationForTransaction:(FLEXNetworkTransaction *)transaction
{
    dispatch_async(dispatch_get_main_queue(), ^{
        NSDictionary<NSString *, id> *userInfo = @{ kFLEXNetworkRecorderUserInfoTransactionKey : transaction };
        [[NSNotificationCenter defaultCenter] postNotificationName:kFLEXNetworkRecorderTransactionUpdatedNotification object:self userInfo:userInfo];
    });
}

@end
