//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CMMotionManager, NSLayoutConstraint, UIButton, UIImageView, UILabel, UIView, _TtC7BingDic15CollectSentence;

@interface _TtC7BingDic31DailySentenceCollectionViewCell : UICollectionViewCell
{
    // Error parsing type: , name: shareContentFormat
    // Error parsing type: , name: imgBack
    // Error parsing type: , name: backView
    // Error parsing type: , name: lblTime
    // Error parsing type: , name: lblEnglish
    // Error parsing type: , name: lblChinese
    // Error parsing type: , name: btnCollect
    // Error parsing type: , name: backViewHeightConstraint
    // Error parsing type: , name: dailySentenceCollectionShouldShowAction
    // Error parsing type: , name: imageWidth
    // Error parsing type: , name: offsetYCell
    // Error parsing type: , name: sentence
    // Error parsing type: , name: motionManager
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)btnShareClick:(id)arg1;
- (void)btnCollectClick:(id)arg1;
- (void)btnPronClick:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic, retain) CMMotionManager *motionManager; // @synthesize motionManager;
@property(nonatomic, retain) _TtC7BingDic15CollectSentence *sentence; // @synthesize sentence;
@property(nonatomic, readonly) double offsetYCell; // @synthesize offsetYCell;
@property(nonatomic, readonly) double imageWidth; // @synthesize imageWidth;
@property(nonatomic, copy) CDUnknownBlockType dailySentenceCollectionShouldShowAction; // @synthesize dailySentenceCollectionShouldShowAction;
@property(nonatomic) __weak NSLayoutConstraint *backViewHeightConstraint; // @synthesize backViewHeightConstraint;
@property(nonatomic) __weak UIButton *btnCollect; // @synthesize btnCollect;
@property(nonatomic) __weak UILabel *lblChinese; // @synthesize lblChinese;
@property(nonatomic) __weak UILabel *lblEnglish; // @synthesize lblEnglish;
@property(nonatomic) __weak UILabel *lblTime; // @synthesize lblTime;
@property(nonatomic) __weak UIView *backView; // @synthesize backView;
@property(nonatomic) __weak UIImageView *imgBack; // @synthesize imgBack;

@end

