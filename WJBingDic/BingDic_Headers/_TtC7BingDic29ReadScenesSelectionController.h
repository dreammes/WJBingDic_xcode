//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7BingDic27PronounceReadBaseController.h"

@class NSArray, NSString, UIImageView, UITableView, _TtC7BingDic18ReadScenesListCell;

@interface _TtC7BingDic29ReadScenesSelectionController : _TtC7BingDic27PronounceReadBaseController
{
    // Error parsing type: , name: headerImageView
    // Error parsing type: , name: tableView
    // Error parsing type: , name: scenesType
    // Error parsing type: , name: typeName
    // Error parsing type: , name: readScenesList
    // Error parsing type: , name: dialogueSceneModels
    // Error parsing type: , name: cell
    // Error parsing type: , name: typeStr
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)useAgreementClick:(id)arg1;
- (void)privacyPolicyClick:(id)arg1;
- (id)filterEnglishWithText:(id)arg1;
- (id)filterChineseWithText:(id)arg1;
- (void)dialogueScenesResponseWithRequest:(id)arg1;
- (void)responseWithRequest:(id)arg1;
- (void)loadDataWithType:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
@property(nonatomic, copy) NSString *typeStr; // @synthesize typeStr;
@property(nonatomic, retain) _TtC7BingDic18ReadScenesListCell *cell; // @synthesize cell;
@property(nonatomic, copy) NSArray *readScenesList; // @synthesize readScenesList;
@property(nonatomic, copy) NSString *typeName; // @synthesize typeName;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView;
@property(nonatomic) __weak UIImageView *headerImageView; // @synthesize headerImageView;

@end
