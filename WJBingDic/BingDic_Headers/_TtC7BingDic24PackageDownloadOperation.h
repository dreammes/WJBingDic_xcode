//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC7BingDic21FileDownloadOperation.h"

@class _TtC7BingDic18OfflinePackageItem;

@interface _TtC7BingDic24PackageDownloadOperation : _TtC7BingDic21FileDownloadOperation
{
    // Error parsing type: , name: item
}

+ (id)kOfflinePackageItemDownloadSuccessNotification;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithUrl:(id)arg1 localPath:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (id)initWithItem:(id)arg1;
@property(nonatomic, readonly) _TtC7BingDic18OfflinePackageItem *item; // @synthesize item;

@end
