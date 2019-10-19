//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIColor;

@interface UMSocialGradientView : UIView
{
    UIColor *_gradientStartColor;
    UIColor *_gradientEndColor;
    unsigned long long _gradientType;
    CAGradientLayer *_headerLayer;
}

@property(retain, nonatomic) CAGradientLayer *headerLayer; // @synthesize headerLayer=_headerLayer;
@property(nonatomic) unsigned long long gradientType; // @synthesize gradientType=_gradientType;
@property(retain, nonatomic) UIColor *gradientEndColor; // @synthesize gradientEndColor=_gradientEndColor;
@property(retain, nonatomic) UIColor *gradientStartColor; // @synthesize gradientStartColor=_gradientStartColor;
- (void).cxx_destruct;
- (void)reloadLayout;
- (void)insertTransparentGradient;
- (id)creatGradientLayer;
- (id)initWithFrame:(struct CGRect)arg1 withGradientStartColor:(id)arg2 withGradientEndColor:(id)arg3 withGradientType:(unsigned long long)arg4;

@end

