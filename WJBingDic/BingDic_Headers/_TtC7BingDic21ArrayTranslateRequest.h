//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7BingDic15HttpRequestBase.h"

@class NSArray;

@interface _TtC7BingDic21ArrayTranslateRequest : _TtC7BingDic15HttpRequestBase
{
    // Error parsing type: , name: translatedText
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithResponse:(CDUnknownBlockType)arg1;
- (void)responseWithResponseData:(id)arg1;
- (void)beginTranslateRequestWithText:(id)arg1 originLang:(id)arg2 targetLang:(id)arg3;
@property(nonatomic, copy) NSArray *translatedText; // @synthesize translatedText;

@end

