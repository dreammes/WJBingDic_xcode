//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "XIConversationImagePreviewCollectionViewCellDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, UICollectionView, XIConversationImageMessageCellConfigurations, XIConversationImageMessageModel;
@protocol XIConversationImagePreviewViewControllerDelegate;

@interface XIConversationImagePreviewViewController : UIViewController <XIConversationImagePreviewCollectionViewCellDelegate>
{
    _Bool _isFirstIn;
    double _cornerRadius;
    NSMutableArray *_messages;
    XIConversationImageMessageModel *_currentMessage;
    NSIndexPath *_currentIndex;
    id <XIConversationImagePreviewViewControllerDelegate> _delegate;
    XIConversationImageMessageCellConfigurations *_senderImageConfig;
    XIConversationImageMessageCellConfigurations *_receiverImageConfig;
    UICollectionView *_collectionView;
    struct CGRect _startRect;
}

@property(nonatomic) _Bool isFirstIn; // @synthesize isFirstIn=_isFirstIn;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) XIConversationImageMessageCellConfigurations *receiverImageConfig; // @synthesize receiverImageConfig=_receiverImageConfig;
@property(retain, nonatomic) XIConversationImageMessageCellConfigurations *senderImageConfig; // @synthesize senderImageConfig=_senderImageConfig;
@property(nonatomic) __weak id <XIConversationImagePreviewViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSIndexPath *currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) XIConversationImageMessageModel *currentMessage; // @synthesize currentMessage=_currentMessage;
@property(retain, nonatomic) NSMutableArray *messages; // @synthesize messages=_messages;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) struct CGRect startRect; // @synthesize startRect=_startRect;
- (void).cxx_destruct;
- (void)conversationImagePreviewCollectionViewCell:(id)arg1 shouldDownloadImage:(id)arg2;
- (void)conversationImagePreviewCollectionViewCell:(id)arg1 longPressedWithImage:(id)arg2;
- (void)conversationImagePreviewCollectionViewCellDidTappedScrollView:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)imageDownloadSuccessed:(id)arg1;
- (void)showNoPhotosPermissionAlert;
- (void)hasNoPhotosPermission;
- (void)saveImageWithImage:(id)arg1;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)setupSubViews;
- (void)dealloc;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
