//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WXOMTAEnv, WXOMTAUser;

@interface WXOMTAHelper : NSObject
{
    WXOMTAEnv *env;
    WXOMTAUser *user;
    _Bool _MTAEnableFlag;
}

+ (_Bool)isJB;
+ (void)setCurrentIndex:(unsigned long long)arg1;
+ (unsigned long long)currentIndex;
+ (id)getInstance;
+ (_Bool)isWiFiAvailable;
+ (id)getCTTelephonyNetworkInfo;
+ (id)md5encrypt:(id)arg1;
+ (id)getMacAddress;
+ (int)GUnzip:(id)arg1 Out:(id *)arg2;
+ (int)GZip:(id)arg1 Out:(id *)arg2;
+ (void)ChiperRC4:(id)arg1;
@property _Bool MTAEnableFlag; // @synthesize MTAEnableFlag=_MTAEnableFlag;
- (void).cxx_destruct;
- (id)getNetworkType;
- (id)getJson:(id)arg1;
- (_Bool)checkMTAEnable;
- (id)fetchSSIDInfo;
- (id)init;
- (id)getUser;
- (id)getEnv;

@end

