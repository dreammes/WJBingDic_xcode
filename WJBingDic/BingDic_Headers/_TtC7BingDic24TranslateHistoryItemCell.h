//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView, _TtC7BingDic20TranslateHistoryItem;

@interface _TtC7BingDic24TranslateHistoryItemCell : UITableViewCell
{
    // Error parsing type: , name: lblOrigin
    // Error parsing type: , name: lblTranslation
    // Error parsing type: , name: vTopBorder
    // Error parsing type: , name: item
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
@property(nonatomic, retain) _TtC7BingDic20TranslateHistoryItem *item; // @synthesize item;
@property(nonatomic) __weak UIView *vTopBorder; // @synthesize vTopBorder;
@property(nonatomic) __weak UILabel *lblTranslation; // @synthesize lblTranslation;
@property(nonatomic) __weak UILabel *lblOrigin; // @synthesize lblOrigin;

@end
