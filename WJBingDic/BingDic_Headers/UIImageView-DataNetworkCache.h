//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

#import "DataNetworkCacheDelegate-Protocol.h"
#import "ImageCacheDelegate-Protocol.h"

@interface UIImageView (DataNetworkCache) <DataNetworkCacheDelegate, ImageCacheDelegate>
- (void)imageReceived:(id)arg1 isFresh:(_Bool)arg2;
- (void)dataReceived:(id)arg1 isFresh:(_Bool)arg2;
@end

