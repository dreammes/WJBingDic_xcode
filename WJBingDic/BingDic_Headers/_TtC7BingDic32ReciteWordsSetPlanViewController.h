//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, UIBarButtonItem, UIButton, UIColor, UILabel, UIPickerView, UIView, _TtC7BingDic19ReciteWordsCategory;

@interface _TtC7BingDic32ReciteWordsSetPlanViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>
{
    // Error parsing type: , name: lblPlanCount
    // Error parsing type: , name: lblPlanDays
    // Error parsing type: , name: pickerView
    // Error parsing type: , name: nextView
    // Error parsing type: , name: btnBack
    // Error parsing type: , name: btnNext
    // Error parsing type: , name: lblTargetTimeTitle
    // Error parsing type: , name: lblTargetTime
    // Error parsing type: , name: countMultifier
    // Error parsing type: , name: daysMultifier
    // Error parsing type: , name: color
    // Error parsing type: , name: category
    // Error parsing type: , name: isAddMode
    // Error parsing type: , name: daysArray
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)calculateTargetDate;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)btnConfirmClick:(id)arg1;
- (void)btnBackClick:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
@property(nonatomic, copy) NSArray *daysArray; // @synthesize daysArray;
@property(nonatomic) _Bool isAddMode; // @synthesize isAddMode;
@property(nonatomic, retain) _TtC7BingDic19ReciteWordsCategory *category; // @synthesize category;
@property(nonatomic, readonly) UIColor *color; // @synthesize color;
@property(nonatomic, readonly) long long daysMultifier; // @synthesize daysMultifier;
@property(nonatomic, readonly) long long countMultifier; // @synthesize countMultifier;
@property(nonatomic) __weak UILabel *lblTargetTime; // @synthesize lblTargetTime;
@property(nonatomic) __weak UILabel *lblTargetTimeTitle; // @synthesize lblTargetTimeTitle;
@property(nonatomic) __weak UIButton *btnNext; // @synthesize btnNext;
@property(nonatomic) __weak UIBarButtonItem *btnBack; // @synthesize btnBack;
@property(nonatomic) __weak UIView *nextView; // @synthesize nextView;
@property(nonatomic) __weak UIPickerView *pickerView; // @synthesize pickerView;
@property(nonatomic) __weak UILabel *lblPlanDays; // @synthesize lblPlanDays;
@property(nonatomic) __weak UILabel *lblPlanCount; // @synthesize lblPlanCount;

@end

