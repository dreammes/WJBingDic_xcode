//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface SharingContent : NSObject
{
    NSString *url;
    NSString *originalDesc;
    NSString *targetDesc;
    UIImage *pic;
}

@property(retain, nonatomic) UIImage *pic; // @synthesize pic;
@property(retain, nonatomic) NSString *targetDesc; // @synthesize targetDesc;
@property(retain, nonatomic) NSString *originalDesc; // @synthesize originalDesc;
@property(retain, nonatomic) NSString *url; // @synthesize url;
- (void)dealloc;
- (void)updateDescription:(id)arg1;

@end
