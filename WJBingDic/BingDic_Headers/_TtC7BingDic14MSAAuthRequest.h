//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7BingDic15AuthRequestBase.h"

@class MSALPublicClientApplication, NSArray, NSString;

@interface _TtC7BingDic14MSAAuthRequest : _TtC7BingDic15AuthRequestBase
{
    // Error parsing type: , name: kScopes
    // Error parsing type: , name: kAuthority
    // Error parsing type: , name: kClinetID
    // Error parsing type: , name: kRedirectURI
    // Error parsing type: , name: msalClient
    // Error parsing type: , name: accessToken
    // Error parsing type: , name: account
    // Error parsing type: , name: username
    // Error parsing type: , name: uniqueId
    // Error parsing type: , name: group
    // Error parsing type: , name: userRequest
    // Error parsing type: , name: iconRequest
    // Error parsing type: , name: isLogout
}

- (CDUnknownBlockType).cxx_destruct;
- (void)logout;
@property(nonatomic) _Bool isLogout; // @synthesize isLogout;
- (void)clearCredentials;
- (void)beginUserInfoRequestWithUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginCodeRequest;
- (id)init;
@property(nonatomic, retain) MSALPublicClientApplication *msalClient; // @synthesize msalClient;
@property(nonatomic, readonly) NSString *kRedirectURI; // @synthesize kRedirectURI;
@property(nonatomic, readonly) NSString *kClinetID; // @synthesize kClinetID;
@property(nonatomic, readonly) NSString *kAuthority; // @synthesize kAuthority;
@property(nonatomic, readonly) NSArray *kScopes; // @synthesize kScopes;

@end

