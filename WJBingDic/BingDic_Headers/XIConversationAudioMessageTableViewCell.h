//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XIConversationMessageTableViewCell.h"

#import "XIConversationAudioPlayerManagerDelegate-Protocol.h"

@class NSString, UIImageView, UILabel, UIView, XIConversationAudioMessageCellConfigurations, XIConversationAudioMessageModel;
@protocol XIConversationAudioMessageTableViewCellDelegate;

@interface XIConversationAudioMessageTableViewCell : XIConversationMessageTableViewCell <XIConversationAudioPlayerManagerDelegate>
{
    id <XIConversationAudioMessageTableViewCellDelegate> _audioDelegate;
    XIConversationAudioMessageCellConfigurations *_audioConfig;
    XIConversationAudioMessageModel *_audioModel;
    UIImageView *_animateImageView;
    UILabel *_durationLabel;
    UIView *_unreadView;
}

@property(retain, nonatomic) UIView *unreadView; // @synthesize unreadView=_unreadView;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UIImageView *animateImageView; // @synthesize animateImageView=_animateImageView;
@property(retain, nonatomic) XIConversationAudioMessageModel *audioModel; // @synthesize audioModel=_audioModel;
@property(retain, nonatomic) XIConversationAudioMessageCellConfigurations *audioConfig; // @synthesize audioConfig=_audioConfig;
@property(nonatomic) __weak id <XIConversationAudioMessageTableViewCellDelegate> audioDelegate; // @synthesize audioDelegate=_audioDelegate;
- (void).cxx_destruct;
- (void)conversationAudioPlayerManagerDidEndPlayWithModel:(id)arg1;
- (void)longPressed:(id)arg1;
- (void)bubbleViewClicked:(id)arg1;
- (void)reloadCellWithModel:(id)arg1;
- (void)setupSubViewWithModel:(id)arg1 config:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithModel:(id)arg1 config:(id)arg2;
- (void)setDelegateLoadCustomAvatar:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
