//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface DataNetworkCacheServiceManager : NSObject
{
    NSMutableDictionary *availableServices;
}

+ (id)sharedManager;
- (id)initializeDataServiceFor:(id)arg1 withQueryService:(id)arg2 withCacheSize:(int)arg3;
- (id)getDataServiceFor:(id)arg1;
- (void)dealloc;
- (id)init;

@end
