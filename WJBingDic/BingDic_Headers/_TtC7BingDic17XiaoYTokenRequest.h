//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7BingDic15HttpRequestBase.h"

@class NSString;

@interface _TtC7BingDic17XiaoYTokenRequest : _TtC7BingDic15HttpRequestBase
{
    // Error parsing type: , name: kExpireTime
    // Error parsing type: , name: kToken
    // Error parsing type: , name: tokenUrl
    // Error parsing type: , name: bodyFormat
    // Error parsing type: , name: token
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithResponse:(CDUnknownBlockType)arg1;
- (void)responseWithResponseData:(id)arg1;
- (void)beginTokenRequest;
@property(nonatomic, copy) NSString *token; // @synthesize token;
@property(nonatomic, readonly) NSString *bodyFormat; // @synthesize bodyFormat;
@property(nonatomic, readonly) NSString *tokenUrl; // @synthesize tokenUrl;
@property(nonatomic, readonly) NSString *kToken; // @synthesize kToken;
@property(nonatomic, readonly) NSString *kExpireTime; // @synthesize kExpireTime;

@end

