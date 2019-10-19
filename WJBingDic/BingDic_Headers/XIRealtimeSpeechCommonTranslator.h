//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IXICommonTranslatorProtocol-Protocol.h"
#import "IXITranslateListener-Protocol.h"

@class NSString;
@protocol IXIRealtimeSpeechTranslatorProtocol, IXISpeechTranslateResultListener;

@interface XIRealtimeSpeechCommonTranslator : NSObject <IXITranslateListener, IXICommonTranslatorProtocol>
{
    id <IXIRealtimeSpeechTranslatorProtocol> _realtimeSpeechTranslator;
    id <IXISpeechTranslateResultListener> _listener;
    Class _RMClass;
}

@property(nonatomic) Class RMClass; // @synthesize RMClass=_RMClass;
@property(nonatomic) __weak id <IXISpeechTranslateResultListener> listener; // @synthesize listener=_listener;
@property(retain, nonatomic) id <IXIRealtimeSpeechTranslatorProtocol> realtimeSpeechTranslator; // @synthesize realtimeSpeechTranslator=_realtimeSpeechTranslator;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)OnRecordVoicePower:(double)arg1;
- (void)OnTranslateResult:(id)arg1;
- (void)OnTranslateError:(id)arg1;
- (void)translateContent:(id)arg1;
- (void)send:(id)arg1;
- (void)end;
- (void)begin;
- (void)setTranslateResultListener:(id)arg1;
- (void)setTargetLanguage:(id)arg1;
- (void)setSourceLanguage:(id)arg1;
- (id)innerTranslator;
- (unsigned long long)translateMode;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

