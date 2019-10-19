//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UICollectionView, UITextView;
@protocol XIConversationInputViewDelegate;

@interface XIConversationInputView : UIView
{
    _Bool _showContent;
    _Bool _sending;
    double _inputViewContentHeight;
    double _inputViewMaxHeight;
    UIView *_topLineView;
    UIButton *_recordingButton;
    UIButton *_speechButton;
    UITextView *_textView;
    UIButton *_moreButton;
    long long _inputType;
    id <XIConversationInputViewDelegate> _delegate;
    double _mainViewHeight;
    double _currentInputViewHeight;
    double _currentContentViewHeight;
    double _currentTextViewContentHeight;
    double _textViewHeightBeforeHidden;
    UICollectionView *_collectionView;
    struct CGSize _inputViewContentFunctionItemSize;
    struct CGRect _textViewBoundsRect;
    struct CGRect _textViewFrameRect;
    struct CGRect _speechButtonFrameRect;
    struct CGRect _moreButtonFrameRect;
}

+ (id)inputView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) struct CGRect moreButtonFrameRect; // @synthesize moreButtonFrameRect=_moreButtonFrameRect;
@property(nonatomic) struct CGRect speechButtonFrameRect; // @synthesize speechButtonFrameRect=_speechButtonFrameRect;
@property(nonatomic) double textViewHeightBeforeHidden; // @synthesize textViewHeightBeforeHidden=_textViewHeightBeforeHidden;
@property(nonatomic) double currentTextViewContentHeight; // @synthesize currentTextViewContentHeight=_currentTextViewContentHeight;
@property(nonatomic) struct CGRect textViewFrameRect; // @synthesize textViewFrameRect=_textViewFrameRect;
@property(nonatomic) struct CGRect textViewBoundsRect; // @synthesize textViewBoundsRect=_textViewBoundsRect;
@property(nonatomic) double currentContentViewHeight; // @synthesize currentContentViewHeight=_currentContentViewHeight;
@property(nonatomic) double currentInputViewHeight; // @synthesize currentInputViewHeight=_currentInputViewHeight;
@property(nonatomic) double mainViewHeight; // @synthesize mainViewHeight=_mainViewHeight;
@property(nonatomic, getter=isSending) _Bool sending; // @synthesize sending=_sending;
@property(nonatomic) __weak id <XIConversationInputViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isShowContent) _Bool showContent; // @synthesize showContent=_showContent;
@property(readonly, nonatomic) long long inputType; // @synthesize inputType=_inputType;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIButton *speechButton; // @synthesize speechButton=_speechButton;
@property(retain, nonatomic) UIButton *recordingButton; // @synthesize recordingButton=_recordingButton;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(nonatomic) double inputViewMaxHeight; // @synthesize inputViewMaxHeight=_inputViewMaxHeight;
@property(nonatomic) double inputViewContentHeight; // @synthesize inputViewContentHeight=_inputViewContentHeight;
@property(nonatomic) struct CGSize inputViewContentFunctionItemSize; // @synthesize inputViewContentFunctionItemSize=_inputViewContentFunctionItemSize;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setShowContent:(_Bool)arg1;
- (void)setInputType:(long long)arg1;
- (void)recordingButtonTouchUpOutsideEvent:(id)arg1;
- (void)recordingButtonTouchUpInsideEvent:(id)arg1;
- (void)recordingButtonTouchDragOutsideEvent:(id)arg1;
- (void)recordingButtonTouchDragInsideEvent:(id)arg1;
- (void)recordingButtonTouchDownEvent:(id)arg1;
- (void)moreFunctionsButtonClicked:(id)arg1;
- (void)emoticonButtonClicked:(id)arg1;
- (void)speechButtonClicked:(id)arg1;
- (void)keyboardWillChangeFrameNotification:(id)arg1;
- (void)removeNotifications;
- (void)addNotifications;
- (void)hiddenMoreFunctionsView:(_Bool)arg1;
- (void)showMoreFunctionsView;
- (void)hiddenEmoticonView;
- (void)showEmoticonView;
- (void)hiddenRecordingButton:(_Bool)arg1;
- (void)showRecordingButton;
- (void)addSubViews;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

