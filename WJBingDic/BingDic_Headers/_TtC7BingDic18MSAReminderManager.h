//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC7BingDic18MSAReminderManager : NSObject
{
}

+ (double)getReminderNextTime;
+ (void)setReminderNextTimeWithNextTime:(double)arg1;
+ (double)getReminderEndTime;
+ (void)setReminderEndTimeWithEndTime:(double)arg1;
+ (double)getReminderSwitchTime;
+ (void)setReminderSwitchTimeWithSwitchTime:(double)arg1;
+ (double)getReminderBeginTime;
+ (void)setReminderBeginTimeWithBeginTime:(double)arg1;
+ (_Bool)getIsReappearanceReminder;
+ (void)setInIsReappearanceReminderWithIsReappearance:(_Bool)arg1;
+ (_Bool)getIsShowReminder;
+ (void)setInIsShowReminderWithIsShowReminder:(_Bool)arg1;
+ (id)reminderNextTime;
+ (id)reminderEndTime;
+ (id)reminderSwitchTime;
+ (id)reminderBeginTime;
+ (id)isReappearance;
+ (id)isShowReminder;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;

@end
