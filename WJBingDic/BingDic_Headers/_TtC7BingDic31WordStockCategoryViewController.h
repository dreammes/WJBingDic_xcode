//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSString;

@interface _TtC7BingDic31WordStockCategoryViewController : UITableViewController
{
    // Error parsing type: , name: kCategoryCellId
    // Error parsing type: , name: kShowWordStockSegueId
    // Error parsing type: , name: categoryList
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
@property(nonatomic, copy) NSArray *categoryList; // @synthesize categoryList;
@property(nonatomic, readonly) NSString *kShowWordStockSegueId; // @synthesize kShowWordStockSegueId;
@property(nonatomic, readonly) NSString *kCategoryCellId; // @synthesize kCategoryCellId;

@end

