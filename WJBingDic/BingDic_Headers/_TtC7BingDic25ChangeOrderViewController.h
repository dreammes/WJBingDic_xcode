//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class UIButton, UILabel;

@interface _TtC7BingDic25ChangeOrderViewController : UITableViewController
{
    // Error parsing type: , name: lblNotice
    // Error parsing type: , name: btnDefault
    // Error parsing type: , name: orderChangedHandler
    // Error parsing type: , name: orderGroup
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithStyle:(long long)arg1;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)backItemClicked;
- (void)btnDefaultClicked:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
@property(nonatomic) __weak UIButton *btnDefault; // @synthesize btnDefault;
@property(nonatomic) __weak UILabel *lblNotice; // @synthesize lblNotice;

@end
