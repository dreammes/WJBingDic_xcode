//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSArray, NSObject, NSString, UIColor, UIFont, UIView, UIViewController;

@interface _TtC7BingDic7DropBox : UIButton
{
    // Error parsing type: , name: _maskView
    // Error parsing type: , name: _backView
    // Error parsing type: , name: kCellId
    // Error parsing type: , name: tableWidth
    // Error parsing type: , name: tableHeight
    // Error parsing type: , name: triangleWidth
    // Error parsing type: , name: hPadding
    // Error parsing type: , name: topBarHeight
    // Error parsing type: , name: cornerRadius
    // Error parsing type: , name: textFont
    // Error parsing type: , name: headerFont
    // Error parsing type: , name: maskViewColor
    // Error parsing type: , name: headerBackColor
    // Error parsing type: , name: selectTextColor
    // Error parsing type: , name: commonTextColor
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: historyList
    // Error parsing type: , name: currentValue
    // Error parsing type: , name: isFullScreen
    // Error parsing type: , name: isSourceLanguage
    // Error parsing type: , name: viewController
    // Error parsing type: , name: parentView
    // Error parsing type: , name: selectValueChangeAction
}

- (CDUnknownBlockType).cxx_destruct;
- (id)similarLanguageWithCode:(id)arg1 name:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)withdrawList;
- (id)getBackView;
- (void)showDropBox;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, copy) CDUnknownBlockType selectValueChangeAction; // @synthesize selectValueChangeAction;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController;
@property(nonatomic) _Bool isSourceLanguage; // @synthesize isSourceLanguage;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen;
@property(nonatomic, retain) NSObject *currentValue; // @synthesize currentValue;
@property(nonatomic, copy) NSArray *historyList; // @synthesize historyList;
@property(nonatomic, copy) NSArray *dataSource; // @synthesize dataSource;
@property(nonatomic, readonly) UIColor *commonTextColor; // @synthesize commonTextColor;
@property(nonatomic, readonly) UIColor *selectTextColor; // @synthesize selectTextColor;
@property(nonatomic, readonly) UIColor *headerBackColor; // @synthesize headerBackColor;
@property(nonatomic, readonly) UIColor *maskViewColor; // @synthesize maskViewColor;
@property(nonatomic, readonly) UIFont *headerFont; // @synthesize headerFont;
@property(nonatomic, readonly) UIFont *textFont; // @synthesize textFont;
@property(nonatomic, readonly) double cornerRadius; // @synthesize cornerRadius;
@property(nonatomic, readonly) double topBarHeight; // @synthesize topBarHeight;
@property(nonatomic, readonly) double hPadding; // @synthesize hPadding;
@property(nonatomic, readonly) double triangleWidth; // @synthesize triangleWidth;
@property(nonatomic, readonly) double tableHeight; // @synthesize tableHeight;
@property(nonatomic, readonly) double tableWidth; // @synthesize tableWidth;
@property(nonatomic, readonly) NSString *kCellId; // @synthesize kCellId;
@property(nonatomic) __weak UIView *_backView; // @synthesize _backView;
@property(nonatomic) __weak UIView *_maskView; // @synthesize _maskView;

@end
