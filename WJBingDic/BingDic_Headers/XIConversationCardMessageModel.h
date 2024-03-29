//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XIConversationMessageModel.h"

@class NSArray;

@interface XIConversationCardMessageModel : XIConversationMessageModel
{
    NSArray *_items;
    struct CGRect _tableViewRect;
}

@property(nonatomic) struct CGRect tableViewRect; // @synthesize tableViewRect=_tableViewRect;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (void)readJSONString:(id)arg1;
- (id)translateToJSON;
- (void)calculateCellContentSize:(id)arg1;
- (void)setCellHeight:(double)arg1;
- (void)setSender:(_Bool)arg1;
- (void)setType:(unsigned long long)arg1;

@end

