//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "UMSocialTaskOperationDelegate-Protocol.h"

@class NSDictionary, NSOperationQueue, NSString;
@protocol UMSocialTaskDelegate;

@interface UMSocialTask : NSObject <UMSocialTaskOperationDelegate, NSCopying, NSCoding>
{
    long long _httpMethodType;
    NSString *_hostUrlPath;
    NSString *_relatedUrlPath;
    NSDictionary *_paramDic;
    CDUnknownBlockType _completion;
    long long _taskIdentifier;
    long long _retryCount;
    long long _taskState;
    id <UMSocialTaskDelegate> _taskDelegate;
    NSOperationQueue *_operationTaskQueue;
}

@property(nonatomic) __weak NSOperationQueue *operationTaskQueue; // @synthesize operationTaskQueue=_operationTaskQueue;
@property(nonatomic) __weak id <UMSocialTaskDelegate> taskDelegate; // @synthesize taskDelegate=_taskDelegate;
@property(nonatomic) long long taskState; // @synthesize taskState=_taskState;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) long long taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) NSDictionary *paramDic; // @synthesize paramDic=_paramDic;
@property(copy, nonatomic) NSString *relatedUrlPath; // @synthesize relatedUrlPath=_relatedUrlPath;
@property(copy, nonatomic) NSString *hostUrlPath; // @synthesize hostUrlPath=_hostUrlPath;
@property(nonatomic) long long httpMethodType; // @synthesize httpMethodType=_httpMethodType;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)handleTaskOperationWithData:(id)arg1 withData:(id)arg2 withError:(id)arg3;
- (void)retryTask;
- (_Bool)checkRetryTaskWithNetworkError:(id)arg1 withServerError:(id)arg2;
- (_Bool)doCheckRetryTaskWithNetworkError:(id)arg1;
- (void)executeTaskWithOperationQueue:(id)arg1;
- (CDUnknownBlockType)dependencyTaskCompletionHandler;
- (void)doExecuteTaskWithOperationQueue:(id)arg1;
- (id)makeDependencyTaskOperation;
- (id)makeDependencyURLRequest;
- (_Bool)checkDependencyForTask;
- (void)finishTaskWithError:(id)arg1;
- (id)makeTaskOperation;
- (id)makeURLRequest;
- (id)umSocialApiPathForRelatedPath:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

