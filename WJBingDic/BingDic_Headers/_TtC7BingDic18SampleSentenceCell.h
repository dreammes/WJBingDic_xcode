//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSAttributedString, NSLayoutConstraint, NSString, UIButton, _TtC7BingDic14CustomTextView;

@interface _TtC7BingDic18SampleSentenceCell : UITableViewCell
{
    // Error parsing type: , name: kClearHighlightSampleSentenceNotification
    // Error parsing type: , name: sharedContentFormat
    // Error parsing type: , name: highlightWords
    // Error parsing type: , name: enSentenceTextView
    // Error parsing type: , name: chSentenceTextView
    // Error parsing type: , name: shareBtn
    // Error parsing type: , name: shareBtnBottomMarginConstraint
    // Error parsing type: , name: addSentenceBtn
    // Error parsing type: , name: rawEnAttributedString
    // Error parsing type: , name: rawChAttributedString
    // Error parsing type: , name: signature
    // Error parsing type: , name: pageString
    // Error parsing type: , name: showCollectionView
    // Error parsing type: , name: content
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateHighlightWithIndex:(id)arg1;
- (void)shareBtnClick:(id)arg1;
- (void)clearHighlight;
- (void)addSentenceBtnClick:(id)arg1;
- (void)audioBtnTapped:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic, copy) CDUnknownBlockType showCollectionView; // @synthesize showCollectionView;
@property(nonatomic, copy) NSString *pageString; // @synthesize pageString;
@property(nonatomic, copy) NSString *signature; // @synthesize signature;
@property(nonatomic, retain) NSAttributedString *rawChAttributedString; // @synthesize rawChAttributedString;
@property(nonatomic, retain) NSAttributedString *rawEnAttributedString; // @synthesize rawEnAttributedString;
@property(nonatomic) __weak UIButton *addSentenceBtn; // @synthesize addSentenceBtn;
@property(nonatomic) __weak NSLayoutConstraint *shareBtnBottomMarginConstraint; // @synthesize shareBtnBottomMarginConstraint;
@property(nonatomic) __weak UIButton *shareBtn; // @synthesize shareBtn;
@property(nonatomic) __weak _TtC7BingDic14CustomTextView *chSentenceTextView; // @synthesize chSentenceTextView;
@property(nonatomic) __weak _TtC7BingDic14CustomTextView *enSentenceTextView; // @synthesize enSentenceTextView;

@end

