//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7BingDic15AuthRequestBase.h"

#import "WXApiDelegate-Protocol.h"

@class NSString;

@interface _TtC7BingDic17WechatAuthRequest : _TtC7BingDic15AuthRequestBase <WXApiDelegate>
{
    // Error parsing type: , name: openId
    // Error parsing type: , name: accessToken
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)onResp:(id)arg1;
- (void)beginUserInfoParsingWithJson:(id)arg1;
- (void)beginUserInfoRequestByAccessJson:(id)arg1;
- (void)beginAccessTokenRequestByCodeWithCode:(id)arg1;
- (_Bool)handleOpenURLWithUrl:(id)arg1;
- (void)beginCodeRequest;
@property(nonatomic, copy) NSString *accessToken; // @synthesize accessToken;
@property(nonatomic, copy) NSString *openId; // @synthesize openId;

@end

