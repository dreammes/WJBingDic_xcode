//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVSpeechSynthesizerDelegate-Protocol.h"

@interface _TtC7BingDic11BDTTSHelper : NSObject <AVSpeechSynthesizerDelegate>
{
    // Error parsing type: , name: player
    // Error parsing type: , name: synthenzer
}

+ (id)instance;
- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)audioSessionRouteChangeWithNoti:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)audioPlayerDecodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)dealloc;
- (void)stopSpeakingAt:(long long)arg1;

@end

