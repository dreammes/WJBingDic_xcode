//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_$S10RealmSwift6ObjectCN.h"

@class NSString, _TtC7BingDic12SentenceBook;

@interface _TtC7BingDic15CollectSentence : _$S10RealmSwift6ObjectCN
{
    // Error parsing type: , name: enPlainSentence
    // Error parsing type: , name: cnPlainSentence
    // Error parsing type: , name: note
    // Error parsing type: , name: lastModifiedTime
    // Error parsing type: , name: relatedWord
    // Error parsing type: , name: isDeleted
    // Error parsing type: , name: imgUrl
    // Error parsing type: , name: signature
    // Error parsing type: , name: sentenceBook
    // Error parsing type: , name: linkUrl
}

+ (id)sentenceWithJsonItemWithJsonItem:(id)arg1;
+ (id)primaryKey;
+ (id)dailySentenceWithJsonItemWithJsonItem:(id)arg1;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithValue:(id)arg1 schema:(id)arg2;
- (id)initWithRealm:(id)arg1 schema:(id)arg2;
- (id)initWithValue:(id)arg1;
- (id)init;
@property(nonatomic, copy) NSString *linkUrl; // @synthesize linkUrl;
@property(nonatomic, retain) _TtC7BingDic12SentenceBook *sentenceBook; // @synthesize sentenceBook;
@property(nonatomic, copy) NSString *signature; // @synthesize signature;
@property(nonatomic, copy) NSString *imgUrl; // @synthesize imgUrl;
@property(nonatomic) _Bool isDeleted; // @synthesize isDeleted;
@property(nonatomic, copy) NSString *relatedWord; // @synthesize relatedWord;
@property(nonatomic, copy) NSString *lastModifiedTime; // @synthesize lastModifiedTime;
@property(nonatomic, copy) NSString *note; // @synthesize note;
@property(nonatomic, copy) NSString *cnPlainSentence; // @synthesize cnPlainSentence;
@property(nonatomic, copy) NSString *enPlainSentence; // @synthesize enPlainSentence;

@end

