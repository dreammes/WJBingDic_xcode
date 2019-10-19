//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ImageCacheService, NSMutableArray, NSString, UIViewController;

@interface SharingServiceManager : NSObject
{
    NSMutableArray *serviceList;
    _Bool oldShowNavigationBar;
    NSString *navBarBgViewName;
    ImageCacheService *dataCacheImage;
    UIViewController *rootViewController;
    NSString *navBarBackImage;
}

+ (id)instance;
@property(retain, nonatomic) NSString *navBarBackImage; // @synthesize navBarBackImage;
@property(readonly, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController;
@property(readonly, nonatomic) ImageCacheService *dataCacheImage; // @synthesize dataCacheImage;
@property(retain, nonatomic) NSString *navBarBgViewName; // @synthesize navBarBgViewName;
@property(retain, nonatomic) NSMutableArray *serviceList; // @synthesize serviceList;
- (void)endSharing;
- (void)startSharing:(id)arg1 withContent:(id)arg2;
- (void)dealloc;
- (void)doSave;
- (id)init;

@end

