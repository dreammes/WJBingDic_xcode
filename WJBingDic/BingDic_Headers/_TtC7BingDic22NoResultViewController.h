//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7BingDic28ResultPageBaseViewController.h"

@class UILabel, UIView, _TtC7BingDic19QuickDefinitionCell;

@interface _TtC7BingDic22NoResultViewController : _TtC7BingDic28ResultPageBaseViewController
{
    // Error parsing type: , name: suggestionCellIdentifier
    // Error parsing type: , name: sectinoHeaderIdentifier
    // Error parsing type: , name: suggestionCellHeight
    // Error parsing type: , name: noResultTipLbl
    // Error parsing type: , name: tableHeaderView
    // Error parsing type: , name: quickDefinitionModel
    // Error parsing type: , name: suggestions
    // Error parsing type: , name: isInPrimaryPage
    // Error parsing type: , name: quickDefinitionCell
    // Error parsing type: , name: quickDefinitionCellLayout
    // Error parsing type: , name: sectionCount
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) _TtC7BingDic19QuickDefinitionCell *quickDefinitionCell; // @synthesize quickDefinitionCell;
@property(nonatomic) _Bool isInPrimaryPage; // @synthesize isInPrimaryPage;
@property(nonatomic) __weak UIView *tableHeaderView; // @synthesize tableHeaderView;
@property(nonatomic) __weak UILabel *noResultTipLbl; // @synthesize noResultTipLbl;

@end

