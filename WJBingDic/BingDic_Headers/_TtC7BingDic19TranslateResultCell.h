//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSLayoutConstraint, NSString, NSTimer, UIButton, UIFont, UILabel, UIView, _TtC7BingDic14CustomTextView;

@interface _TtC7BingDic19TranslateResultCell : UITableViewCell
{
    // Error parsing type: , name: shareContentFormat
    // Error parsing type: , name: lblTitle
    // Error parsing type: , name: lblTranslate
    // Error parsing type: , name: btnPron
    // Error parsing type: , name: btnCopy
    // Error parsing type: , name: btnShare
    // Error parsing type: , name: btnFullScreen
    // Error parsing type: , name: moreResultView
    // Error parsing type: , name: lblMoreResultTitle
    // Error parsing type: , name: txtMoreResult
    // Error parsing type: , name: moreResultHeightConstraint
    // Error parsing type: , name: commonFont
    // Error parsing type: , name: italicFont
    // Error parsing type: , name: lineHeight
    // Error parsing type: , name: moreResultViewOriginHeight
    // Error parsing type: , name: delegate
    // Error parsing type: , name: timer
    // Error parsing type: , name: fonts
    // Error parsing type: , name: currentFontIndex
    // Error parsing type: , name: isToChinese
    // Error parsing type: , name: tText
    // Error parsing type: , name: translatedText
    // Error parsing type: , name: originalText
    // Error parsing type: , name: result
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)btnShareClick:(id)arg1;
- (void)btnCopyClick:(id)arg1;
- (void)btnFullScreenClicked:(id)arg1;
- (void)btnPronClick:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic, copy) NSString *originalText; // @synthesize originalText;
@property(nonatomic, copy) NSString *translatedText; // @synthesize translatedText;
@property(nonatomic) _Bool isToChinese; // @synthesize isToChinese;
@property(nonatomic) long long currentFontIndex; // @synthesize currentFontIndex;
@property(nonatomic, copy) NSArray *fonts; // @synthesize fonts;
@property(nonatomic, retain) NSTimer *timer; // @synthesize timer;
@property(nonatomic, readonly) double moreResultViewOriginHeight; // @synthesize moreResultViewOriginHeight;
@property(nonatomic, readonly) double lineHeight; // @synthesize lineHeight;
@property(nonatomic, readonly) UIFont *italicFont; // @synthesize italicFont;
@property(nonatomic, readonly) UIFont *commonFont; // @synthesize commonFont;
@property(nonatomic) __weak NSLayoutConstraint *moreResultHeightConstraint; // @synthesize moreResultHeightConstraint;
@property(nonatomic) __weak _TtC7BingDic14CustomTextView *txtMoreResult; // @synthesize txtMoreResult;
@property(nonatomic) __weak UILabel *lblMoreResultTitle; // @synthesize lblMoreResultTitle;
@property(nonatomic) __weak UIView *moreResultView; // @synthesize moreResultView;
@property(nonatomic) __weak UIButton *btnFullScreen; // @synthesize btnFullScreen;
@property(nonatomic) __weak UIButton *btnShare; // @synthesize btnShare;
@property(nonatomic) __weak UIButton *btnCopy; // @synthesize btnCopy;
@property(nonatomic) __weak UIButton *btnPron; // @synthesize btnPron;
@property(nonatomic) __weak UILabel *lblTranslate; // @synthesize lblTranslate;
@property(nonatomic) __weak UILabel *lblTitle; // @synthesize lblTitle;

@end

