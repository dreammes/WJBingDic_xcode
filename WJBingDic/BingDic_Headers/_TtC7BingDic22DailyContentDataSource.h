//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, _TtC7BingDic18DailyContentParser;

@interface _TtC7BingDic22DailyContentDataSource : NSObject
{
    // Error parsing type: , name: completeHandler
    // Error parsing type: , name: parser
    // Error parsing type: , name: dailyItems
    // Error parsing type: , name: loadType
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (void)infoResponseWithRequest:(id)arg1;
- (void)loadNewData;
- (void)loadInitData;
- (id)initWithCompleteHandler:(CDUnknownBlockType)arg1;
@property(nonatomic, copy) NSArray *dailyItems; // @synthesize dailyItems;
@property(nonatomic, readonly) _TtC7BingDic18DailyContentParser *parser; // @synthesize parser;
@property(nonatomic, copy) CDUnknownBlockType completeHandler; // @synthesize completeHandler;

@end
