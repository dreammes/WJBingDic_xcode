//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, _TtC7BingDic7Article;

@interface _TtC7BingDic20ArticleTableViewCell : UITableViewCell
{
    // Error parsing type: , name: lblTitle
    // Error parsing type: , name: lblDetail
    // Error parsing type: , name: selectView
    // Error parsing type: , name: numberLabel
    // Error parsing type: , name: stateButton
    // Error parsing type: , name: article
    // Error parsing type: , name: downloadAction
}

+ (id)kCellId;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)downloadFinishNotificationWithNotification:(id)arg1;
- (void)stateButtonClicked:(id)arg1;
- (void)awakeFromNib;
@property(nonatomic, copy) CDUnknownBlockType downloadAction; // @synthesize downloadAction;
@property(nonatomic, retain) _TtC7BingDic7Article *article; // @synthesize article;
@property(nonatomic) __weak UIButton *stateButton; // @synthesize stateButton;
@property(nonatomic) __weak UILabel *numberLabel; // @synthesize numberLabel;
@property(nonatomic) __weak UIImageView *selectView; // @synthesize selectView;
@property(nonatomic) __weak UILabel *lblDetail; // @synthesize lblDetail;
@property(nonatomic) __weak UILabel *lblTitle; // @synthesize lblTitle;

@end
