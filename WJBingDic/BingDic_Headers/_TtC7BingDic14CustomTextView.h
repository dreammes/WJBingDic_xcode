//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSDictionary, NSTimer, _TtC7BingDic23DictionarySearchManager;

@interface _TtC7BingDic14CustomTextView : UITextView
{
    // Error parsing type: , name: wordCardDelegate
    // Error parsing type: , name: updateHighlightDelegate
    // Error parsing type: , name: dictSearchMananger
    // Error parsing type: , name: tapLineStartY
    // Error parsing type: , name: tapLineEndY
    // Error parsing type: , name: tapCenterX
    // Error parsing type: , name: lineHeight
    // Error parsing type: , name: groupRangeDict
    // Error parsing type: , name: errorTimer
}

- (CDUnknownBlockType).cxx_destruct;
- (void)queryResultFailed;
- (void)tapResponseWithRecognizer:(id)arg1;
- (void)initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;
@property(nonatomic, retain) NSTimer *errorTimer; // @synthesize errorTimer;
@property(nonatomic, copy) NSDictionary *groupRangeDict; // @synthesize groupRangeDict;
@property(nonatomic) double lineHeight; // @synthesize lineHeight;
@property(nonatomic, retain) _TtC7BingDic23DictionarySearchManager *dictSearchMananger; // @synthesize dictSearchMananger;

@end
