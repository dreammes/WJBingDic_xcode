//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, SharingContent, UIActivityIndicatorView, UITableView, UITapGestureRecognizer, UITextView, UIView;

@interface SharingContentViewController : UIViewController
{
    UITextView *textView;
    UIView *contentView;
    UITableView *mainTable;
    UITapGestureRecognizer *tap;
    UIActivityIndicatorView *activity;
    UIView *container;
    id delegate;
    SharingContent *shareContent;
}

@property(retain, nonatomic) SharingContent *shareContent; // @synthesize shareContent;
@property(nonatomic) id delegate; // @synthesize delegate;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)hideKeyboard;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)sharedFailed:(id)arg1;
- (void)sharedCompleted:(id)arg1;
- (void)logoutButtonClicked:(id)arg1;
- (void)shareButtonClicked:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)updateTextView:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidUnload;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)isiPad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
