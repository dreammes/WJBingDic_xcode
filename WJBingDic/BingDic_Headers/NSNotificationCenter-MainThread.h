//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSNotificationCenter.h>

@interface NSNotificationCenter (MainThread)
- (void)mainThreadHandler:(id)arg1;
- (void)removeObserverOnMainThread:(id)arg1;
- (void)removeObserverOnMainThread:(id)arg1 name:(id)arg2 object:(id)arg3;
- (void)removeNotificationObject:(id)arg1 fromArray:(id)arg2 usingNotificationName:(id)arg3;
- (void)addObserverOnMainThread:(id)arg1 selector:(SEL)arg2 name:(id)arg3 object:(id)arg4;
@end

