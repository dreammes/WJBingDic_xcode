//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString;

@interface UMPInstallation : NSObject
{
    _Bool _badgeClear;
    _Bool _autoAlert;
    NSString *_appKey;
    NSString *_channel;
    NSString *_uniqueId;
    NSString *_deviceToken;
    NSMutableArray *_tags;
    NSMutableDictionary *_alias;
    unsigned long long _registerRemoteNotificationTypes;
    long long _badge;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)currentInstallation;
@property(nonatomic) _Bool autoAlert; // @synthesize autoAlert=_autoAlert;
@property(nonatomic) _Bool badgeClear; // @synthesize badgeClear=_badgeClear;
@property(nonatomic) long long badge; // @synthesize badge=_badge;
@property(nonatomic) unsigned long long registerRemoteNotificationTypes; // @synthesize registerRemoteNotificationTypes=_registerRemoteNotificationTypes;
@property(retain, nonatomic) NSMutableDictionary *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) NSMutableArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(retain, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void).cxx_destruct;
- (id)headerDictionaryWithLocation:(id)arg1;
- (id)headerDictionaryWithTs:(id)arg1 location:(id)arg2;
- (void)setDeviceTokenData:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
