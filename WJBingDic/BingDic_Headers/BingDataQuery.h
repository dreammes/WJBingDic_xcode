//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BIQuery.h"

#import "DataNetworkCacheKey-Protocol.h"

@class NSURL;

@interface BingDataQuery : BIQuery <DataNetworkCacheKey>
{
    NSURL *url;
    int type;
}

@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSURL *url; // @synthesize url;
- (int)getPriority;
- (id)getCacheKey;
- (void)dealloc;
- (id)initWithUrl:(id)arg1 forType:(int)arg2;

@end
