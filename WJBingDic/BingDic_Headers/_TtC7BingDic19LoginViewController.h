//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class UILabel;

@interface _TtC7BingDic19LoginViewController : UIViewController
{
    // Error parsing type: , name: lblLoginNow
    // Error parsing type: , name: lblEnterSpace
    // Error parsing type: , name: lblLoginTitle
    // Error parsing type: , name: channels
    // Error parsing type: , name: buttonWidth
    // Error parsing type: , name: viewMargin
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dataMergeResponseWithResponse:(id)arg1;
- (void)responseWithResponse:(id)arg1;
- (void)onAuthFailed;
- (void)onAuthResponseUserWithUser:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)popOut;
- (void)btnCloseClick:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(nonatomic, readonly) double viewMargin; // @synthesize viewMargin;
@property(nonatomic, readonly) long long buttonWidth; // @synthesize buttonWidth;
@property(nonatomic) __weak UILabel *lblLoginTitle; // @synthesize lblLoginTitle;
@property(nonatomic) __weak UILabel *lblEnterSpace; // @synthesize lblEnterSpace;
@property(nonatomic) __weak UILabel *lblLoginNow; // @synthesize lblLoginNow;

@end
