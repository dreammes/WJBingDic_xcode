//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSString, UICollectionView, UINavigationController;

@interface _TtC7BingDic27DailySentenceViewController : UIViewController
{
    // Error parsing type: , name: collectionView
    // Error parsing type: , name: kSentenceListSegueId
    // Error parsing type: , name: kSentenceCellId
    // Error parsing type: , name: sentenceType
    // Error parsing type: , name: dataSource
    // Error parsing type: , name: currentIndex
    // Error parsing type: , name: tempNavigationController
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)dailySentenceCollectionShouldShowActionWithSender:(id)arg1 sentence:(id)arg2;
- (void)dailySentenceResponseWithResponse:(id)arg1;
- (void)showList;
- (void)back;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, retain) UINavigationController *tempNavigationController; // @synthesize tempNavigationController;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex;
@property(nonatomic, copy) NSArray *dataSource; // @synthesize dataSource;
@property(nonatomic, readonly) NSString *kSentenceCellId; // @synthesize kSentenceCellId;
@property(nonatomic, readonly) NSString *kSentenceListSegueId; // @synthesize kSentenceListSegueId;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView;

@end

