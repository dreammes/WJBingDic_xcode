//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface UMSocialItemInfo : NSObject
{
    NSString *_itemImageName;
    NSString *_itemName;
    UIImage *_itemImageIcon;
    long long _platformType;
    double _itemWidth;
    double _itemHeight;
}

@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) long long platformType; // @synthesize platformType=_platformType;
@property(retain, nonatomic) UIImage *itemImageIcon; // @synthesize itemImageIcon=_itemImageIcon;
@property(retain, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(retain, nonatomic) NSString *itemImageName; // @synthesize itemImageName=_itemImageName;
- (void).cxx_destruct;

@end

