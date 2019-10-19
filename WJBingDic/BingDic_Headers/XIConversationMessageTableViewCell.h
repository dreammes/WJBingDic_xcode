//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIActivityIndicatorView, UIButton, UIImageView, XIConversationBubbleView, XIConversationMessageModel;
@protocol XIConversationMessageTableViewCellDelegate;

@interface XIConversationMessageTableViewCell : UITableViewCell
{
    _Bool _delegateLoadCustomAvatar;
    id <XIConversationMessageTableViewCellDelegate> _delegate;
    UIImageView *_avatarImageView;
    XIConversationBubbleView *_bubbleImageView;
    UIActivityIndicatorView *_loadingView;
    UIButton *_errorButton;
    XIConversationMessageModel *_model;
}

@property(nonatomic, getter=isDelegateLoadCustomAvatar) _Bool delegateLoadCustomAvatar; // @synthesize delegateLoadCustomAvatar=_delegateLoadCustomAvatar;
@property(retain, nonatomic) XIConversationMessageModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *errorButton; // @synthesize errorButton=_errorButton;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) XIConversationBubbleView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak id <XIConversationMessageTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)errorButtonClicked:(id)arg1;
- (void)avatarImageViewClicked:(id)arg1;
- (void)hiddenErrorView;
- (void)showErrorView;
- (void)hiddenLoadingView;
- (void)showLoadingView;
- (void)reloadCellWithModel:(id)arg1 config:(id)arg2;
- (void)setupSubViewWithModel:(id)arg1 config:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithModel:(id)arg1 config:(id)arg2;

@end

