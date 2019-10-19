//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UMSocialShareMenuViewInternalDelegate-Protocol.h"

@class NSString, UMSocialSharePageGroupView;

@interface UMSocialUIManager : NSObject <UMSocialShareMenuViewInternalDelegate>
{
    _Bool _isDestroySharePageGroupViewWhenHide;
    UMSocialSharePageGroupView *_sharePageGroup;
}

+ (void)setShareMenuViewDelegate:(id)arg1;
+ (void)removeAllCustomPlatformWithoutFilted;
+ (void)removeCustomPlatformWithoutFilted:(long long)arg1;
+ (void)addCustomPlatformWithoutFilted:(long long)arg1 withPlatformIcon:(id)arg2 withPlatformName:(id)arg3;
+ (void)setPreDefinePlatforms:(id)arg1;
+ (void)showShareMenuViewInWindowWithPlatformSelectionBlock:(CDUnknownBlockType)arg1;
+ (id)defaultManager;
@property(retain, nonatomic) UMSocialSharePageGroupView *sharePageGroup; // @synthesize sharePageGroup=_sharePageGroup;
- (void).cxx_destruct;
- (void)UMSocialShareMenuViewInternalDidDisappear;
- (void)creatSharePageGroupView;
- (void)showShareMenuViewInWindowWithPlatformSelectionBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
