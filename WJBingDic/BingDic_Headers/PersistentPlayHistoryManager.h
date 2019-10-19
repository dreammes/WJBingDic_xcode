//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BICoreDataManager, NSManagedObjectContext;

@interface PersistentPlayHistoryManager : NSObject
{
    BICoreDataManager *mCoreDataManager;
    NSManagedObjectContext *mManagedObjectContext;
}

@property(readonly, nonatomic) BICoreDataManager *coreDataManager; // @synthesize coreDataManager=mCoreDataManager;
@property(readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=mManagedObjectContext;
- (unsigned long long)countWithPredicate:(id)arg1 sortDescriptors:(id)arg2 returnAsFaults:(_Bool)arg3 maxItemCount:(long long)arg4 baseEntity:(id)arg5 includeSubentities:(_Bool)arg6;
- (id)fetchWithPredicate:(id)arg1 sortDescriptors:(id)arg2 returnAsFaults:(_Bool)arg3 maxItemCount:(long long)arg4 baseEntity:(id)arg5 includeSubentities:(_Bool)arg6;
- (void)deletePeristentHisArticle:(id)arg1;
- (id)prepareNewPersistentHisArticle;
- (void)discardChanges;
- (void)saveChanges;
- (id)addStoreFromPath:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_fetchRequestForPredicate:(id)arg1 sortDescriptors:(id)arg2 returnAsFaults:(_Bool)arg3 maxItemCount:(long long)arg4 baseEntity:(id)arg5 includesSubentities:(_Bool)arg6;

@end
