//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UIButton, UIImageView;

@interface XIConversationGuideViewController : UIViewController
{
    UIButton *_determineButton;
    UIImageView *_contentImageView;
}

@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) UIButton *determineButton; // @synthesize determineButton=_determineButton;
- (void).cxx_destruct;
- (void)determineButtonClicked:(id)arg1;
- (void)setupSubViews;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

