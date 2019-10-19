//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSHTTPURLResponse, NSString;

@protocol IXIHttpRequestManagerProtocol <NSObject>
@property(copy, nonatomic) CDUnknownBlockType OnResponseError;
@property(copy, nonatomic) CDUnknownBlockType OnResponseData;
@property(nonatomic) unsigned long long startTime;
@property(nonatomic) _Bool isFinished;
@property(nonatomic) unsigned long long responseState;
@property(copy, nonatomic) CDUnknownBlockType response;
@property(retain, nonatomic) NSHTTPURLResponse *httpResponse;
@property(retain, nonatomic) NSDictionary *params;
@property(copy, nonatomic) NSString *url;
@property(retain, nonatomic) NSDictionary *customHeader;
@property(nonatomic) unsigned long long contentType;
@property(nonatomic) unsigned long long requestMethod;
@property(nonatomic) unsigned long long cachePolicy;
- (NSString *)contentTypeString;
- (NSString *)requestMethodString;
- (void)beginRequestWithBody:(NSData *)arg1;
- (void)beginRequest;
@end
