//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XIConversationMessageModel.h"

@class NSString;

@interface XIConversationTipsMessageModel : XIConversationMessageModel
{
    NSString *_tipContent;
    struct CGRect _tipContentRect;
}

@property(nonatomic) struct CGRect tipContentRect; // @synthesize tipContentRect=_tipContentRect;
@property(retain, nonatomic) NSString *tipContent; // @synthesize tipContent=_tipContent;
- (void).cxx_destruct;
- (void)calculateCellContentSize:(id)arg1;
- (void)setSender:(_Bool)arg1;
- (void)setType:(unsigned long long)arg1;

@end

