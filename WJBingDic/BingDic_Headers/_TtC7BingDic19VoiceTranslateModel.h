//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_$S10RealmSwift6ObjectCN.h"

@class NSString;

@interface _TtC7BingDic19VoiceTranslateModel : _$S10RealmSwift6ObjectCN
{
    // Error parsing type: , name: localFilePath
    // Error parsing type: , name: originHeight
    // Error parsing type: , name: cellHeight
    // Error parsing type: , name: originText
    // Error parsing type: , name: targetText
    // Error parsing type: , name: originCode
    // Error parsing type: , name: originName
    // Error parsing type: , name: originCodeLocal
    // Error parsing type: , name: targetCode
    // Error parsing type: , name: targetName
    // Error parsing type: , name: translateTime
    // Error parsing type: , name: state
}

- (CDUnknownBlockType).cxx_destruct;
- (id)initWithValue:(id)arg1 schema:(id)arg2;
- (id)initWithRealm:(id)arg1 schema:(id)arg2;
- (id)initWithValue:(id)arg1;
- (id)init;
- (void)calculateHeight;
@property(nonatomic) long long state; // @synthesize state;
@property(nonatomic) double translateTime; // @synthesize translateTime;
@property(nonatomic, copy) NSString *targetName; // @synthesize targetName;
@property(nonatomic, copy) NSString *targetCode; // @synthesize targetCode;
@property(nonatomic, copy) NSString *originCodeLocal; // @synthesize originCodeLocal;
@property(nonatomic, copy) NSString *originName; // @synthesize originName;
@property(nonatomic, copy) NSString *originCode; // @synthesize originCode;
@property(nonatomic, copy) NSString *targetText; // @synthesize targetText;
@property(nonatomic, copy) NSString *originText; // @synthesize originText;
@property(nonatomic) double cellHeight; // @synthesize cellHeight;
@property(nonatomic) double originHeight; // @synthesize originHeight;
@property(nonatomic, copy) NSString *localFilePath; // @synthesize localFilePath;

@end

