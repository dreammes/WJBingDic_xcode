//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7BingDic25QuickSearchViewController.h"

@class NSArray, UIButton, UILabel, _TtC7BingDic12ProgressView, _TtC7BingDic14CustomTextView, _TtC7BingDic7Article;

@interface _TtC7BingDic25RadioPlayerViewController : _TtC7BingDic25QuickSearchViewController
{
    // Error parsing type: , name: txtContent
    // Error parsing type: , name: lblTitle
    // Error parsing type: , name: lblDetail
    // Error parsing type: , name: progressView
    // Error parsing type: , name: btnDownload
    // Error parsing type: , name: btnRepeatPlay
    // Error parsing type: , name: btnPlay
    // Error parsing type: , name: btnPlayLast
    // Error parsing type: , name: btnPlayNext
    // Error parsing type: , name: isManualPause
    // Error parsing type: , name: firstSetArticle
    // Error parsing type: , name: player
    // Error parsing type: , name: timeObserver
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: currentArticle
    // Error parsing type: , name: beginPlayed
}

+ (void)playWithArticle:(id)arg1 dataSource:(id)arg2 on:(id)arg3;
+ (id)sharedInstance;
+ (id)kRadioPlayerCurrentArticlePlayItemChanged;
+ (id)kRadioPlayerCurrentArticlePlayFailed;
+ (id)kRadioPlayerCurrentArticleDidSet;
+ (id)kRadioPlayerCurrentArticlePlayStateChanged;
+ (id)kRadioPlayerCurrentArticleIdentifier;
- (CDUnknownBlockType).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setMediaItemProperty;
- (void)beginPlay;
- (void)playerPauseWithIsManual:(_Bool)arg1;
- (void)playerPlay;
- (void)panProgressItemWithPercentage:(double)arg1 targetTime:(long long)arg2;
- (void)btnPlayNextClick:(id)arg1;
- (void)btnPlayLastClick:(id)arg1;
- (void)btnRepeatPlayClick:(id)arg1;
- (void)btnPlayClick:(id)arg1;
- (void)btnDownloadClick:(id)arg1;
- (void)downloadFinishNotificationWithNotification:(id)arg1;
- (void)playerRouteChangeNotificationWithNotification:(id)arg1;
- (void)playerInterruptionNotificationWithNotification:(id)arg1;
- (void)appDidEnterPlayGround;
- (void)appDidEnterBackground;
- (void)radioPlayDidEnd;
- (void)addNotifications;
@property(nonatomic, readonly) _Bool canResignFirstResponder;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic) _Bool beginPlayed; // @synthesize beginPlayed;
@property(nonatomic, readonly) _Bool playing;
@property(nonatomic, retain) _TtC7BingDic7Article *currentArticle; // @synthesize currentArticle;
@property(nonatomic, copy) NSArray *dataSource; // @synthesize dataSource;
@property(nonatomic) _Bool isManualPause; // @synthesize isManualPause;
@property(nonatomic) __weak UIButton *btnPlayNext; // @synthesize btnPlayNext;
@property(nonatomic) __weak UIButton *btnPlayLast; // @synthesize btnPlayLast;
@property(nonatomic) __weak UIButton *btnPlay; // @synthesize btnPlay;
@property(nonatomic) __weak UIButton *btnRepeatPlay; // @synthesize btnRepeatPlay;
@property(nonatomic) __weak UIButton *btnDownload; // @synthesize btnDownload;
@property(nonatomic) __weak _TtC7BingDic12ProgressView *progressView; // @synthesize progressView;
@property(nonatomic) __weak UILabel *lblDetail; // @synthesize lblDetail;
@property(nonatomic) __weak UILabel *lblTitle; // @synthesize lblTitle;
@property(nonatomic) __weak _TtC7BingDic14CustomTextView *txtContent; // @synthesize txtContent;

@end

