//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSString;

@interface SharingAccount : NSObject <NSCoding>
{
    NSString *userId;
    NSString *accessToken;
    NSString *refreshToken;
    NSDate *expireDate;
    NSString *name;
    NSString *imageUrl;
}

@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) NSDate *expireDate; // @synthesize expireDate;
@property(retain, nonatomic) NSString *refreshToken; // @synthesize refreshToken;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken;
@property(retain, nonatomic) NSString *userId; // @synthesize userId;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

