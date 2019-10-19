//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BICoreDataCacheBaseOperation.h"

@class NSData, NSDate, NSObject, NSString;
@protocol BICoreDataCacheWriteOperationDelegate;

@interface BICoreDataCacheWriteOperation : BICoreDataCacheBaseOperation
{
    NSString *mDataKey;
    NSData *mWriteData;
    NSDate *mExpiresAt;
    NSObject<BICoreDataCacheWriteOperationDelegate> *mDelegate;
    unsigned long long mMaxCacheSizeBytes;
}

@property unsigned long long maxCacheSizeBytes; // @synthesize maxCacheSizeBytes=mMaxCacheSizeBytes;
@property(nonatomic) NSObject<BICoreDataCacheWriteOperationDelegate> *delegate; // @synthesize delegate=mDelegate;
@property(retain, nonatomic) NSDate *expiresAt; // @synthesize expiresAt=mExpiresAt;
@property(retain, nonatomic) NSData *writeData; // @synthesize writeData=mWriteData;
@property(retain, nonatomic) NSString *dataKey; // @synthesize dataKey=mDataKey;
- (void)main;
- (void)dealloc;
- (id)_writeData:(id)arg1;
- (_Bool)_storeData:(id)arg1 expiresAt:(id)arg2 forKey:(id)arg3;

@end

