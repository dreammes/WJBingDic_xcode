//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIActivityIndicatorView, UILabel;

@interface ImageButton : UIButton
{
    UILabel *titleLabel_;
    UIActivityIndicatorView *loadingView;
}

@property(retain, nonatomic) UILabel *titleLabel_; // @synthesize titleLabel_;
- (id)titleForState:(unsigned long long)arg1;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)audioDownloadCompletion;
- (void)displayLoadingIndicator;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
