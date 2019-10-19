//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UMSocialPlatformItemViewConfig, UMSocialShareCancelControlConfig, UMSocialShareContainerConfig, UMSocialSharePageControlConfig, UMSocialSharePageGroupViewConfig, UMSocialSharePageScrollViewConfig, UMSocialShareTitleViewConfig;

@interface UMSocialShareUIConfig : NSObject
{
    UMSocialSharePageGroupViewConfig *_sharePageGroupViewConfig;
    UMSocialShareContainerConfig *_shareContainerConfig;
    UMSocialShareTitleViewConfig *_shareTitleViewConfig;
    UMSocialSharePageScrollViewConfig *_sharePageScrollViewConfig;
    UMSocialPlatformItemViewConfig *_sharePlatformItemViewConfig;
    UMSocialSharePageControlConfig *_sharePageControlConfig;
    UMSocialShareCancelControlConfig *_shareCancelControlConfig;
}

+ (id)shareInstance;
@property(retain, nonatomic) UMSocialShareCancelControlConfig *shareCancelControlConfig; // @synthesize shareCancelControlConfig=_shareCancelControlConfig;
@property(retain, nonatomic) UMSocialSharePageControlConfig *sharePageControlConfig; // @synthesize sharePageControlConfig=_sharePageControlConfig;
@property(retain, nonatomic) UMSocialPlatformItemViewConfig *sharePlatformItemViewConfig; // @synthesize sharePlatformItemViewConfig=_sharePlatformItemViewConfig;
@property(retain, nonatomic) UMSocialSharePageScrollViewConfig *sharePageScrollViewConfig; // @synthesize sharePageScrollViewConfig=_sharePageScrollViewConfig;
@property(retain, nonatomic) UMSocialShareTitleViewConfig *shareTitleViewConfig; // @synthesize shareTitleViewConfig=_shareTitleViewConfig;
@property(retain, nonatomic) UMSocialShareContainerConfig *shareContainerConfig; // @synthesize shareContainerConfig=_shareContainerConfig;
@property(retain, nonatomic) UMSocialSharePageGroupViewConfig *sharePageGroupViewConfig; // @synthesize sharePageGroupViewConfig=_sharePageGroupViewConfig;
- (void).cxx_destruct;
- (void)configShareUI;
- (id)init;

@end
