//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIButton, UILabel, UISegmentedControl, UISwitch, _TtC7BingDic19ReciteWordsCategory;

@interface _TtC7BingDic32ReciteWordsSettingViewController : UIViewController
{
    // Error parsing type: , name: operationSoundLabel
    // Error parsing type: , name: pronunciationSwitchLabel
    // Error parsing type: , name: dailyReminderLabel
    // Error parsing type: , name: myCardListsLabel
    // Error parsing type: , name: myPlan
    // Error parsing type: , name: svSound
    // Error parsing type: , name: sgPron
    // Error parsing type: , name: btnRemind
    // Error parsing type: , name: kShowCategoryListSegueId
    // Error parsing type: , name: kShowPlanSegueId
    // Error parsing type: , name: kShowRemindSegueId
    // Error parsing type: , name: category
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)sgPronValueChanged:(id)arg1;
- (void)svSoundValueChanged:(id)arg1;
- (void)btnBackClick:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
@property(nonatomic, retain) _TtC7BingDic19ReciteWordsCategory *category; // @synthesize category;
@property(nonatomic, readonly) NSString *kShowRemindSegueId; // @synthesize kShowRemindSegueId;
@property(nonatomic, readonly) NSString *kShowPlanSegueId; // @synthesize kShowPlanSegueId;
@property(nonatomic, readonly) NSString *kShowCategoryListSegueId; // @synthesize kShowCategoryListSegueId;
@property(nonatomic) __weak UIButton *btnRemind; // @synthesize btnRemind;
@property(nonatomic) __weak UISegmentedControl *sgPron; // @synthesize sgPron;
@property(nonatomic) __weak UISwitch *svSound; // @synthesize svSound;
@property(nonatomic) __weak UILabel *myPlan; // @synthesize myPlan;
@property(nonatomic) __weak UILabel *myCardListsLabel; // @synthesize myCardListsLabel;
@property(nonatomic) __weak UILabel *dailyReminderLabel; // @synthesize dailyReminderLabel;
@property(nonatomic) __weak UILabel *pronunciationSwitchLabel; // @synthesize pronunciationSwitchLabel;
@property(nonatomic) __weak UILabel *operationSoundLabel; // @synthesize operationSoundLabel;

@end

