//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7BingDic28ResultPageBaseViewController.h"

@class NSArray, NSDictionary, NSString, UIButton, UIImageView, UIView, _TtC7BingDic14ResultMenuView, _TtC7BingDic15ReadScenesModel, _TtC7BingDic16ReadHistoryModel, _TtC7BingDic17ReadTestListModel;

@interface _TtC7BingDic18ReadTestController : _TtC7BingDic28ResultPageBaseViewController
{
    // Error parsing type: , name: descriptionView
    // Error parsing type: , name: unfoldMenuButton
    // Error parsing type: , name: guideImageView
    // Error parsing type: , name: menuBg.storage
    // Error parsing type: , name: menuListArray
    // Error parsing type: , name: resultMenuView
    // Error parsing type: , name: listModels
    // Error parsing type: , name: heightArray
    // Error parsing type: , name: readTestCellLayouts
    // Error parsing type: , name: dataModel
    // Error parsing type: , name: resultScores
    // Error parsing type: , name: originalUrlDic
    // Error parsing type: , name: resultList
    // Error parsing type: , name: phonScoreDic
    // Error parsing type: , name: phonTimesDic
    // Error parsing type: , name: savePrefixStr
    // Error parsing type: , name: index
    // Error parsing type: , name: isPlayer
    // Error parsing type: , name: historyModel
    // Error parsing type: , name: resultModel
    // Error parsing type: , name: sectionHeaderIdentifier
    // Error parsing type: , name: ReadTestListCellId
    // Error parsing type: , name: readTestResultSegueId
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (double)headerY;
- (void)responseWithRequest:(id)arg1;
- (void)createMenuViewWithSection:(long long)arg1;
- (void)updateMenuWithModel:(id)arg1 section:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)expandHeaderWithExpanded:(_Bool)arg1 section:(long long)arg2;
- (void)phonEvaluation;
- (void)recordFinnshedNotificationWithNotification:(id)arg1;
- (void)backAction;
- (void)finnshTestClick:(id)arg1;
- (void)useAgreementClick:(id)arg1;
- (void)privacyPolicyClick:(id)arg1;
- (void)unfoldMenuClick:(id)arg1;
- (void)menuAnimationFromValue:(double)arg1 toValue:(double)arg2;
- (void)loadMenuAnimation;
- (void)replaceGuideImage;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)didReceiveMemoryWarning;
- (double)calculateCellHeightWithText:(id)arg1 attributes:(id)arg2;
- (void)loadData;
- (void)createGuideView;
- (void)initBackButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, readonly) NSString *readTestResultSegueId; // @synthesize readTestResultSegueId;
@property(nonatomic, readonly) NSString *ReadTestListCellId; // @synthesize ReadTestListCellId;
@property(nonatomic, readonly) NSString *sectionHeaderIdentifier; // @synthesize sectionHeaderIdentifier;
@property(nonatomic, retain) _TtC7BingDic17ReadTestListModel *resultModel; // @synthesize resultModel;
@property(nonatomic, retain) _TtC7BingDic16ReadHistoryModel *historyModel; // @synthesize historyModel;
@property(nonatomic) long long index; // @synthesize index;
@property(nonatomic, copy) NSString *savePrefixStr; // @synthesize savePrefixStr;
@property(nonatomic, copy) NSDictionary *phonTimesDic; // @synthesize phonTimesDic;
@property(nonatomic, copy) NSDictionary *phonScoreDic; // @synthesize phonScoreDic;
@property(nonatomic, copy) NSArray *resultList; // @synthesize resultList;
@property(nonatomic, copy) NSDictionary *originalUrlDic; // @synthesize originalUrlDic;
@property(nonatomic, copy) NSDictionary *resultScores; // @synthesize resultScores;
@property(nonatomic, retain) _TtC7BingDic15ReadScenesModel *dataModel; // @synthesize dataModel;
@property(nonatomic, copy) NSArray *heightArray; // @synthesize heightArray;
@property(nonatomic, copy) NSArray *listModels; // @synthesize listModels;
@property(nonatomic, retain) _TtC7BingDic14ResultMenuView *resultMenuView; // @synthesize resultMenuView;
@property(nonatomic, copy) NSArray *menuListArray; // @synthesize menuListArray;
@property(nonatomic) __weak UIImageView *guideImageView; // @synthesize guideImageView;
@property(nonatomic) __weak UIButton *unfoldMenuButton; // @synthesize unfoldMenuButton;
@property(nonatomic) __weak UIView *descriptionView; // @synthesize descriptionView;

@end
