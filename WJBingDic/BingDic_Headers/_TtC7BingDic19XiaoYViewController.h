//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7BingDic17WebViewController.h"

@class NSString, WebViewJavascriptBridge, _TtC7BingDic13AudioRecorder;

@interface _TtC7BingDic19XiaoYViewController : _TtC7BingDic17WebViewController
{
    // Error parsing type: , name: tokenUrl
    // Error parsing type: , name: funcLogin
    // Error parsing type: , name: funcStart
    // Error parsing type: , name: callbackStart
    // Error parsing type: , name: funcStop
    // Error parsing type: , name: funcUserInfo
    // Error parsing type: , name: path
    // Error parsing type: , name: bridge
    // Error parsing type: , name: loginCallback
    // Error parsing type: , name: isLoadviewNeeded
    // Error parsing type: , name: recorder
}

+ (id)getInstanceWithTitle:(id)arg1;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)responseWithRequest:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
@property(nonatomic, retain) _TtC7BingDic13AudioRecorder *recorder; // @synthesize recorder;
@property(nonatomic) _Bool isLoadviewNeeded; // @synthesize isLoadviewNeeded;
@property(nonatomic, copy) CDUnknownBlockType loginCallback; // @synthesize loginCallback;
@property(nonatomic, retain) WebViewJavascriptBridge *bridge; // @synthesize bridge;
@property(nonatomic, readonly) NSString *path; // @synthesize path;
@property(nonatomic, readonly) NSString *funcUserInfo; // @synthesize funcUserInfo;
@property(nonatomic, readonly) NSString *funcStop; // @synthesize funcStop;
@property(nonatomic, readonly) NSString *callbackStart; // @synthesize callbackStart;
@property(nonatomic, readonly) NSString *funcStart; // @synthesize funcStart;
@property(nonatomic, readonly) NSString *funcLogin; // @synthesize funcLogin;
@property(nonatomic, copy) NSString *tokenUrl; // @synthesize tokenUrl;

@end
