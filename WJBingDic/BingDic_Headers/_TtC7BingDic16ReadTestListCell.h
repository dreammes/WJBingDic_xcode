//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AVAudioPlayer, NSArray, NSDictionary, NSLayoutConstraint, NSMutableAttributedString, NSString, NSTimer, UIButton, UIImageView, UILabel, UIView, _TtC7BingDic13AudioRecorder, _TtC7BingDic13ReadTestModel, _TtC7BingDic14CustomTextView, _TtC7BingDic20ReadResultScoreModel, _TtC7BingDic24VoiceTranslateMetersView;

@interface _TtC7BingDic16ReadTestListCell : UITableViewCell
{
    // Error parsing type: , name: headerImageView
    // Error parsing type: , name: tipLabel
    // Error parsing type: , name: recordingButton
    // Error parsing type: , name: originalPlayerButton
    // Error parsing type: , name: minePlayerButton
    // Error parsing type: , name: pageNmberLabel
    // Error parsing type: , name: scoreView
    // Error parsing type: , name: scoreLabel
    // Error parsing type: , name: textView
    // Error parsing type: , name: textViewHeight
    // Error parsing type: , name: metersView
    // Error parsing type: , name: recordSecondView
    // Error parsing type: , name: meters
    // Error parsing type: , name: excellentScoreLine
    // Error parsing type: , name: passScoreLine
    // Error parsing type: , name: avAudioPlayer
    // Error parsing type: , name: rsText
    // Error parsing type: , name: rsAttributedText
    // Error parsing type: , name: rank
    // Error parsing type: , name: isRecord
    // Error parsing type: , name: mineVoiceDic
    // Error parsing type: , name: originalDic
    // Error parsing type: , name: recorder
    // Error parsing type: , name: startRecordSoundID
    // Error parsing type: , name: endRecordSoundID
    // Error parsing type: , name: recordTime
    // Error parsing type: , name: scoreTimer
    // Error parsing type: , name: scoreLoadingCount
    // Error parsing type: , name: resultScore
    // Error parsing type: , name: savePrefixStr
    // Error parsing type: , name: loadingVoice
    // Error parsing type: , name: isPlayer
    // Error parsing type: , name: readTestData
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)recordTimesWithCurrentRecordTime:(double)arg1;
- (void)recordMetersWithAveragePowerForChannel:(float)arg1 peakPowerForChannel:(float)arg2;
- (void)dismissSecondView;
- (void)showSecondViewWithRecordTime:(double)arg1;
- (void)resetUIState;
- (void)dismissTipView;
- (void)scoreTipView;
- (void)filePathCover;
- (void)scoreResponseWithRequest:(id)arg1;
- (void)dismissMetersView;
- (void)showMetersView;
- (void)tipLoadingTimerEvent;
- (void)recordTimeWithCurrentRecordTime:(double)arg1;
- (id)filePathWithId:(id)arg1;
- (id)cachePathWithId:(id)arg1;
- (void)endRecord;
- (void)startRecord;
- (_Bool)requestRecordPermission;
- (void)responseWithRequest:(id)arg1;
- (void)playerMineClick:(id)arg1;
- (void)playerOriginalClick:(id)arg1;
- (void)recordButtonTouchUpInsideEvent:(id)arg1;
- (void)recordButtonTouchUpOutsideEvent:(id)arg1;
- (void)recordButtonTouchDragOutsideEvent:(id)arg1;
- (void)recordButtonTouchDragInsideEvent:(id)arg1;
- (void)recordButtonTouchDownEvent:(id)arg1;
- (void)initAVAudioPlayerWithPlayerPath:(id)arg1;
- (void)headerImage;
- (void)awakeFromNib;
@property(nonatomic, retain) _TtC7BingDic13ReadTestModel *readTestData; // @synthesize readTestData;
@property(nonatomic, copy) NSString *savePrefixStr; // @synthesize savePrefixStr;
@property(nonatomic, retain) _TtC7BingDic20ReadResultScoreModel *resultScore; // @synthesize resultScore;
@property(nonatomic) long long scoreLoadingCount; // @synthesize scoreLoadingCount;
@property(nonatomic, retain) NSTimer *scoreTimer; // @synthesize scoreTimer;
@property(nonatomic) double recordTime; // @synthesize recordTime;
@property(nonatomic, readonly) _TtC7BingDic13AudioRecorder *recorder; // @synthesize recorder;
@property(nonatomic, copy) NSDictionary *originalDic; // @synthesize originalDic;
@property(nonatomic, copy) NSDictionary *mineVoiceDic; // @synthesize mineVoiceDic;
@property(nonatomic) _Bool isRecord; // @synthesize isRecord;
@property(nonatomic) long long rank; // @synthesize rank;
@property(nonatomic, retain) NSMutableAttributedString *rsAttributedText; // @synthesize rsAttributedText;
@property(nonatomic, copy) NSString *rsText; // @synthesize rsText;
@property(nonatomic, retain) AVAudioPlayer *avAudioPlayer; // @synthesize avAudioPlayer;
@property(nonatomic, readonly) long long passScoreLine; // @synthesize passScoreLine;
@property(nonatomic, readonly) long long excellentScoreLine; // @synthesize excellentScoreLine;
@property(nonatomic, copy) NSArray *meters; // @synthesize meters;
@property(nonatomic, retain) UIView *recordSecondView; // @synthesize recordSecondView;
@property(nonatomic) __weak _TtC7BingDic24VoiceTranslateMetersView *metersView; // @synthesize metersView;
@property(nonatomic) __weak NSLayoutConstraint *textViewHeight; // @synthesize textViewHeight;
@property(nonatomic) __weak _TtC7BingDic14CustomTextView *textView; // @synthesize textView;
@property(nonatomic) __weak UILabel *scoreLabel; // @synthesize scoreLabel;
@property(nonatomic) __weak UIView *scoreView; // @synthesize scoreView;
@property(nonatomic) __weak UILabel *pageNmberLabel; // @synthesize pageNmberLabel;
@property(nonatomic) __weak UIButton *minePlayerButton; // @synthesize minePlayerButton;
@property(nonatomic) __weak UIButton *originalPlayerButton; // @synthesize originalPlayerButton;
@property(nonatomic) __weak UIButton *recordingButton; // @synthesize recordingButton;
@property(nonatomic) __weak UILabel *tipLabel; // @synthesize tipLabel;
@property(nonatomic) __weak UIImageView *headerImageView; // @synthesize headerImageView;

@end
