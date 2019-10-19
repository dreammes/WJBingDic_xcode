//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IXILogger-Protocol.h"

@class NSMutableArray, NSString;

@interface XILogManager : NSObject <IXILogger>
{
    NSMutableArray *_loggers;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *loggers; // @synthesize loggers=_loggers;
- (void).cxx_destruct;
- (void)e:(id)arg1;
- (void)w:(id)arg1;
- (void)d:(id)arg1;
- (void)i:(id)arg1;
- (_Bool)addLogger:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
