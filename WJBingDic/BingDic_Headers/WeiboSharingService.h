//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SharingService.h"

@interface WeiboSharingService : SharingService
{
}

- (void)checkRenewToken;
- (void)QueryResult:(id)arg1;
- (void)getAccountInfo;
- (void)getAccessTokenWithAuthorizeCode:(id)arg1;
- (void)refreashToken;
- (void)getFriendList:(int)arg1;
- (void)share:(id)arg1;
- (void)didReceiveAuthorizeCode:(id)arg1;
- (id)getAuthorizeRequestUrl;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end
