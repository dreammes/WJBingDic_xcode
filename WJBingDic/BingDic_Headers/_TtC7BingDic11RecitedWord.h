//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_$S10RealmSwift6ObjectCN.h"

@class NSString, _TtC7BingDic19ReciteWordsCategory;

@interface _TtC7BingDic11RecitedWord : _$S10RealmSwift6ObjectCN
{
    // Error parsing type: , name: headWord
    // Error parsing type: , name: phonetic
    // Error parsing type: , name: ukphonetic
    // Error parsing type: , name: quickDef
    // Error parsing type: , name: category
    // Error parsing type: , name: date
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithValue:(id)arg1 schema:(id)arg2;
- (id)initWithRealm:(id)arg1 schema:(id)arg2;
- (id)initWithValue:(id)arg1;
- (id)init;
@property(nonatomic, copy) NSString *date; // @synthesize date;
@property(nonatomic, retain) _TtC7BingDic19ReciteWordsCategory *category; // @synthesize category;
@property(nonatomic, copy) NSString *quickDef; // @synthesize quickDef;
@property(nonatomic, copy) NSString *ukphonetic; // @synthesize ukphonetic;
@property(nonatomic, copy) NSString *phonetic; // @synthesize phonetic;
@property(nonatomic, copy) NSString *headWord; // @synthesize headWord;

@end

