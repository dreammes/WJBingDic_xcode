//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSXMLParser, _TtC7BingDic7KeyWord, _TtC7BingDic8NewsItem, _TtC7BingDic9DailyItem, _TtC7BingDic9DailyWord;

@interface _TtC7BingDic18DailyContentParser : NSObject
{
    // Error parsing type: , name: _Hp
    // Error parsing type: , name: _DailyItem
    // Error parsing type: , name: _Sen
    // Error parsing type: , name: _English
    // Error parsing type: , name: _Chinese
    // Error parsing type: , name: _SenImage
    // Error parsing type: , name: _Type
    // Error parsing type: , name: _LinkUrl
    // Error parsing type: , name: _LinkTitle
    // Error parsing type: , name: _Json
    // Error parsing type: , name: _Wd
    // Error parsing type: , name: _PronUS
    // Error parsing type: , name: _PronUK
    // Error parsing type: , name: _AudioMd5
    // Error parsing type: , name: _HasImages
    // Error parsing type: , name: _Images
    // Error parsing type: , name: _Image1
    // Error parsing type: , name: _Image2
    // Error parsing type: , name: _Image3
    // Error parsing type: , name: _News
    // Error parsing type: , name: _NewsItem
    // Error parsing type: , name: _Title
    // Error parsing type: , name: _Desp
    // Error parsing type: , name: _NewsSource
    // Error parsing type: , name: _NewsImage
    // Error parsing type: , name: _NewsWidth
    // Error parsing type: , name: _NewsHeight
    // Error parsing type: , name: _TitleUrl
    // Error parsing type: , name: _DespUrl
    // Error parsing type: , name: _ImageUrl
    // Error parsing type: , name: _Level
    // Error parsing type: , name: _PubDate
    // Error parsing type: , name: _Reviewd
    // Error parsing type: , name: _Keywords
    // Error parsing type: , name: _Keyword
    // Error parsing type: , name: _HeadWord
    // Error parsing type: , name: _Phonetic
    // Error parsing type: , name: _Definition
    // Error parsing type: , name: _Check
    // Error parsing type: , name: currentString
    // Error parsing type: , name: parser
    // Error parsing type: , name: mDailyItem
    // Error parsing type: , name: mNewsItem
    // Error parsing type: , name: mDailyWord
    // Error parsing type: , name: mKeyWord
    // Error parsing type: , name: storingCharacters
    // Error parsing type: , name: parsingWord
    // Error parsing type: , name: dailyItems
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)rmEncodingWithSt:(id)arg1;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (id)parseDataWithData:(id)arg1;
@property(nonatomic, copy) NSArray *dailyItems; // @synthesize dailyItems;
@property(nonatomic) _Bool parsingWord; // @synthesize parsingWord;
@property(nonatomic) _Bool storingCharacters; // @synthesize storingCharacters;
@property(nonatomic, retain) _TtC7BingDic7KeyWord *mKeyWord; // @synthesize mKeyWord;
@property(nonatomic, retain) _TtC7BingDic9DailyWord *mDailyWord; // @synthesize mDailyWord;
@property(nonatomic, retain) _TtC7BingDic8NewsItem *mNewsItem; // @synthesize mNewsItem;
@property(nonatomic, retain) _TtC7BingDic9DailyItem *mDailyItem; // @synthesize mDailyItem;
@property(nonatomic, retain) NSXMLParser *parser; // @synthesize parser;
@property(nonatomic, copy) NSString *currentString; // @synthesize currentString;
@property(nonatomic, readonly) NSString *_Check; // @synthesize _Check;
@property(nonatomic, readonly) NSString *_Definition; // @synthesize _Definition;
@property(nonatomic, readonly) NSString *_Phonetic; // @synthesize _Phonetic;
@property(nonatomic, readonly) NSString *_HeadWord; // @synthesize _HeadWord;
@property(nonatomic, readonly) NSString *_Keyword; // @synthesize _Keyword;
@property(nonatomic, readonly) NSString *_Keywords; // @synthesize _Keywords;
@property(nonatomic, readonly) NSString *_Reviewd; // @synthesize _Reviewd;
@property(nonatomic, readonly) NSString *_PubDate; // @synthesize _PubDate;
@property(nonatomic, readonly) NSString *_Level; // @synthesize _Level;
@property(nonatomic, readonly) NSString *_ImageUrl; // @synthesize _ImageUrl;
@property(nonatomic, readonly) NSString *_DespUrl; // @synthesize _DespUrl;
@property(nonatomic, readonly) NSString *_TitleUrl; // @synthesize _TitleUrl;
@property(nonatomic, readonly) NSString *_NewsHeight; // @synthesize _NewsHeight;
@property(nonatomic, readonly) NSString *_NewsWidth; // @synthesize _NewsWidth;
@property(nonatomic, readonly) NSString *_NewsImage; // @synthesize _NewsImage;
@property(nonatomic, readonly) NSString *_NewsSource; // @synthesize _NewsSource;
@property(nonatomic, readonly) NSString *_Desp; // @synthesize _Desp;
@property(nonatomic, readonly) NSString *_Title; // @synthesize _Title;
@property(nonatomic, readonly) NSString *_NewsItem; // @synthesize _NewsItem;
@property(nonatomic, readonly) NSString *_News; // @synthesize _News;
@property(nonatomic, readonly) NSString *_Image3; // @synthesize _Image3;
@property(nonatomic, readonly) NSString *_Image2; // @synthesize _Image2;
@property(nonatomic, readonly) NSString *_Image1; // @synthesize _Image1;
@property(nonatomic, readonly) NSString *_Images; // @synthesize _Images;
@property(nonatomic, readonly) NSString *_HasImages; // @synthesize _HasImages;
@property(nonatomic, readonly) NSString *_AudioMd5; // @synthesize _AudioMd5;
@property(nonatomic, readonly) NSString *_PronUK; // @synthesize _PronUK;
@property(nonatomic, readonly) NSString *_PronUS; // @synthesize _PronUS;
@property(nonatomic, readonly) NSString *_Wd; // @synthesize _Wd;
@property(nonatomic, readonly) NSString *_Json; // @synthesize _Json;
@property(nonatomic, readonly) NSString *_LinkTitle; // @synthesize _LinkTitle;
@property(nonatomic, readonly) NSString *_LinkUrl; // @synthesize _LinkUrl;
@property(nonatomic, readonly) NSString *_Type; // @synthesize _Type;
@property(nonatomic, readonly) NSString *_SenImage; // @synthesize _SenImage;
@property(nonatomic, readonly) NSString *_Chinese; // @synthesize _Chinese;
@property(nonatomic, readonly) NSString *_English; // @synthesize _English;
@property(nonatomic, readonly) NSString *_Sen; // @synthesize _Sen;
@property(nonatomic, readonly) NSString *_DailyItem; // @synthesize _DailyItem;
@property(nonatomic, readonly) NSString *_Hp; // @synthesize _Hp;

@end
