//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSLayoutConstraint, NSString, UIButton, UICollectionView, UILabel, _TtC7BingDic13AudioRecorder, _TtC7BingDic24VoiceTranslateMetersView;

@interface _TtC7BingDic22SODBottomContainerView : UIView
{
    // Error parsing type: , name: vCenterContainer
    // Error parsing type: , name: vDescContainer
    // Error parsing type: , name: consContainerTopBefore
    // Error parsing type: , name: consContainerTopAfter
    // Error parsing type: , name: vLightGreenContainer
    // Error parsing type: , name: lblHelp
    // Error parsing type: , name: lblTitleBefore
    // Error parsing type: , name: tipsCollectionView
    // Error parsing type: , name: consCollectionHeight
    // Error parsing type: , name: lblChContainer
    // Error parsing type: , name: lblCh
    // Error parsing type: , name: lblTitleAfter
    // Error parsing type: , name: lblResult
    // Error parsing type: , name: metersView
    // Error parsing type: , name: btnRecord
    // Error parsing type: , name: btnNext
    // Error parsing type: , name: kSceneOralDialogueTipsCellIdentifier
    // Error parsing type: , name: recorder
    // Error parsing type: , name: btnNextClickedHandler
    // Error parsing type: , name: startRecordSoundID
    // Error parsing type: , name: endRecordSoundID
    // Error parsing type: , name: recordTime
    // Error parsing type: , name: scoreLoadingCount
    // Error parsing type: , name: meters
    // Error parsing type: , name: isTimeOut
    // Error parsing type: , name: turn
    // Error parsing type: , name: chText
    // Error parsing type: , name: keyWordsArr
    // Error parsing type: , name: sizeDict
    // Error parsing type: , name: isBefore
    // Error parsing type: , name: layoutLabel.storage
}

- (CDUnknownBlockType).cxx_destruct;
- (void)setup;
- (void)awakeFromNib;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic, retain) UILabel *layoutLabel;
@property(nonatomic) _Bool isBefore; // @synthesize isBefore;
@property(nonatomic, copy) NSDictionary *sizeDict; // @synthesize sizeDict;
@property(nonatomic, copy) NSArray *keyWordsArr; // @synthesize keyWordsArr;
@property(nonatomic, copy) NSString *chText; // @synthesize chText;
@property(nonatomic) long long turn; // @synthesize turn;
@property(nonatomic) _Bool isTimeOut; // @synthesize isTimeOut;
@property(nonatomic, copy) NSArray *meters; // @synthesize meters;
@property(nonatomic) long long scoreLoadingCount; // @synthesize scoreLoadingCount;
@property(nonatomic) double recordTime; // @synthesize recordTime;
@property(nonatomic, copy) CDUnknownBlockType btnNextClickedHandler; // @synthesize btnNextClickedHandler;
@property(nonatomic, readonly) _TtC7BingDic13AudioRecorder *recorder; // @synthesize recorder;
@property(nonatomic, readonly) NSString *kSceneOralDialogueTipsCellIdentifier; // @synthesize kSceneOralDialogueTipsCellIdentifier;
@property(nonatomic) __weak UIButton *btnNext; // @synthesize btnNext;
@property(nonatomic) __weak UIButton *btnRecord; // @synthesize btnRecord;
@property(nonatomic) __weak _TtC7BingDic24VoiceTranslateMetersView *metersView; // @synthesize metersView;
@property(nonatomic) __weak UILabel *lblResult; // @synthesize lblResult;
@property(nonatomic) __weak UILabel *lblTitleAfter; // @synthesize lblTitleAfter;
@property(nonatomic) __weak UILabel *lblCh; // @synthesize lblCh;
@property(nonatomic) __weak UIView *lblChContainer; // @synthesize lblChContainer;
@property(nonatomic) __weak NSLayoutConstraint *consCollectionHeight; // @synthesize consCollectionHeight;
@property(nonatomic) __weak UICollectionView *tipsCollectionView; // @synthesize tipsCollectionView;
@property(nonatomic) __weak UILabel *lblTitleBefore; // @synthesize lblTitleBefore;
@property(nonatomic) __weak UILabel *lblHelp; // @synthesize lblHelp;
@property(nonatomic) __weak UIView *vLightGreenContainer; // @synthesize vLightGreenContainer;
@property(nonatomic, retain) NSLayoutConstraint *consContainerTopAfter; // @synthesize consContainerTopAfter;
@property(nonatomic, retain) NSLayoutConstraint *consContainerTopBefore; // @synthesize consContainerTopBefore;
@property(nonatomic, retain) UIView *vDescContainer; // @synthesize vDescContainer;
@property(nonatomic, retain) UIView *vCenterContainer; // @synthesize vCenterContainer;

@end
