//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC7BingDic12RadioManager : NSObject
{
}

+ (void)migrateArticleListWithItems:(id)arg1;
+ (void)clearDownloadItems;
+ (void)removeDownloadItemWithArticle:(id)arg1;
+ (void)downloadSuccessWithArticle:(id)arg1;
+ (void)addDownloadItemWithArticle:(id)arg1;
+ (_Bool)hasDownloadWithArticle:(id)arg1;
+ (id)getHistoryItems;
+ (void)clearHistoryItems;
+ (void)addHistoryItemWithArticle:(id)arg1;
+ (_Bool)hasViewWithArticle:(id)arg1;
+ (id)getItemWithArticleId:(long long)arg1 sourceId:(long long)arg2;
- (id)init;

@end
