//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XIOCRTranslateResultRegion : NSObject
{
    NSString *_srText;
    NSString *_transText;
    struct CGRect _boundingBox;
}

+ (id)modelWithDict:(id)arg1;
@property(copy, nonatomic) NSString *transText; // @synthesize transText=_transText;
@property(copy, nonatomic) NSString *srText; // @synthesize srText=_srText;
@property(nonatomic) struct CGRect boundingBox; // @synthesize boundingBox=_boundingBox;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

