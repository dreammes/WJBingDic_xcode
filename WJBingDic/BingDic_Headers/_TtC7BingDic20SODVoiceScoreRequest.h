//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7BingDic15HttpRequestBase.h"

@class NSData;

@interface _TtC7BingDic20SODVoiceScoreRequest : _TtC7BingDic15HttpRequestBase
{
    // Error parsing type: , name: score
    // Error parsing type: , name: uploadData
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithResponse:(CDUnknownBlockType)arg1;
- (void)responseWithResponseData:(id)arg1;
- (void)beginVoiceScoreUploadRequestWithUploadData:(id)arg1 question:(id)arg2 expAnswer:(id)arg3 keywords:(id)arg4;
@property(nonatomic, copy) NSData *uploadData; // @synthesize uploadData;
@property(nonatomic) long long score; // @synthesize score;

@end

