//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XIConversationHttpRequestModel : NSObject
{
    long long _messageType;
    NSString *_query;
}

@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
- (void).cxx_destruct;
- (id)getJsonBodyString:(id)arg1 typeString:(id)arg2;
- (id)getJsonString;

@end

