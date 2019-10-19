//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSString, UIColor, UIFont, XILanguage;
@protocol IXILanguageFilter;

@interface XILanguageListController : UITableViewController
{
    id <IXILanguageFilter> _languageFilter;
    NSArray *_dataSource;
    NSArray *_historyList;
    XILanguage *_currentValue;
    CDUnknownBlockType _selectValueChangeAction;
    NSString *_recentLanguageDesc;
    NSString *_allLanguageDesc;
    NSString *_originalLanguageDesc;
    NSString *_targetLanguageDesc;
    NSString *_kCellId;
    UIFont *_textFont;
    UIFont *_headerFont;
    UIColor *_headerBackColor;
    UIColor *_selectTextColor;
    UIColor *_commonTextColor;
}

@property(retain, nonatomic) UIColor *commonTextColor; // @synthesize commonTextColor=_commonTextColor;
@property(retain, nonatomic) UIColor *selectTextColor; // @synthesize selectTextColor=_selectTextColor;
@property(retain, nonatomic) UIColor *headerBackColor; // @synthesize headerBackColor=_headerBackColor;
@property(retain, nonatomic) UIFont *headerFont; // @synthesize headerFont=_headerFont;
@property(retain, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(copy, nonatomic) NSString *kCellId; // @synthesize kCellId=_kCellId;
@property(copy, nonatomic) NSString *targetLanguageDesc; // @synthesize targetLanguageDesc=_targetLanguageDesc;
@property(copy, nonatomic) NSString *originalLanguageDesc; // @synthesize originalLanguageDesc=_originalLanguageDesc;
@property(copy, nonatomic) NSString *allLanguageDesc; // @synthesize allLanguageDesc=_allLanguageDesc;
@property(copy, nonatomic) NSString *recentLanguageDesc; // @synthesize recentLanguageDesc=_recentLanguageDesc;
@property(copy, nonatomic) CDUnknownBlockType selectValueChangeAction; // @synthesize selectValueChangeAction=_selectValueChangeAction;
@property(retain, nonatomic) XILanguage *currentValue; // @synthesize currentValue=_currentValue;
@property(retain, nonatomic) NSArray *historyList; // @synthesize historyList=_historyList;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <IXILanguageFilter> languageFilter; // @synthesize languageFilter=_languageFilter;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)btnDoneClick;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)setup;
- (id)initWithStyle:(long long)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

