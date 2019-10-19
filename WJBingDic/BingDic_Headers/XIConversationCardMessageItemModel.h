//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XIConversationCardMessageItemModel : NSObject
{
    NSString *_contentTitle;
    NSString *_contentText;
    NSString *_imageURL;
    NSString *_imageLocalPath;
    NSString *_imageLocalFullPath;
    NSString *_contentURL;
    double _contentCreateTime;
    NSString *_contentCreateDate;
    double _itemWidth;
}

@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(retain, nonatomic) NSString *contentCreateDate; // @synthesize contentCreateDate=_contentCreateDate;
@property(nonatomic) double contentCreateTime; // @synthesize contentCreateTime=_contentCreateTime;
@property(retain, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
@property(retain, nonatomic) NSString *imageLocalFullPath; // @synthesize imageLocalFullPath=_imageLocalFullPath;
@property(retain, nonatomic) NSString *imageLocalPath; // @synthesize imageLocalPath=_imageLocalPath;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(retain, nonatomic) NSString *contentTitle; // @synthesize contentTitle=_contentTitle;
- (void).cxx_destruct;

@end
