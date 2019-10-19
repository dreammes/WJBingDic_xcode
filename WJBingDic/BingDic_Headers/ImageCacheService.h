//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DataNetworkCacheDelegate-Protocol.h"

@class DataNetworkCacheService, NSMutableDictionary;

@interface ImageCacheService : NSObject <DataNetworkCacheDelegate>
{
    NSMutableDictionary *delegates;
    DataNetworkCacheService *cacheService;
}

- (void)scalingOperation:(id)arg1 doneWithImage:(id)arg2;
- (void)dataReceived:(id)arg1 isFresh:(_Bool)arg2;
- (void)callDelegatesWithResult:(id)arg1;
- (void)callFailedDelegatesWithCacheKey:(id)arg1;
- (void)removeTarget:(id)arg1;
- (void)requestImage:(id)arg1 target:(id)arg2;
- (void)dealloc;
- (id)initWithCacheService:(id)arg1;

@end

