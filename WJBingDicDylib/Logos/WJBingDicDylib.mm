#line 1 "/Users/wuchen/Desktop/PlayPlay/WJBingDic/WJBingDicDylib/Logos/WJBingDicDylib.xm"


#import <UIKit/UIKit.h>
#import <CommonCrypto/CommonDigest.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "WJToolUtil.h"
#import "WJBingDicDylib.h"


#include <substrate.h>
#if defined(__clang__)
#if __has_feature(objc_arc)
#define _LOGOS_SELF_TYPE_NORMAL __unsafe_unretained
#define _LOGOS_SELF_TYPE_INIT __attribute__((ns_consumed))
#define _LOGOS_SELF_CONST const
#define _LOGOS_RETURN_RETAINED __attribute__((ns_returns_retained))
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif
#else
#define _LOGOS_SELF_TYPE_NORMAL
#define _LOGOS_SELF_TYPE_INIT
#define _LOGOS_SELF_CONST
#define _LOGOS_RETURN_RETAINED
#endif

@class _TtC7BingDic22WordListViewController; 
static UITableViewCell * (*_logos_orig$_ungrouped$_TtC7BingDic22WordListViewController$tableView$cellForRowAtIndexPath$)(_LOGOS_SELF_TYPE_NORMAL _TtC7BingDic22WordListViewController* _LOGOS_SELF_CONST, SEL, UITableView *, NSIndexPath *); static UITableViewCell * _logos_method$_ungrouped$_TtC7BingDic22WordListViewController$tableView$cellForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL _TtC7BingDic22WordListViewController* _LOGOS_SELF_CONST, SEL, UITableView *, NSIndexPath *); static void _logos_method$_ungrouped$_TtC7BingDic22WordListViewController$btnAction$(_LOGOS_SELF_TYPE_NORMAL _TtC7BingDic22WordListViewController* _LOGOS_SELF_CONST, SEL, UIButton *); 

#line 10 "/Users/wuchen/Desktop/PlayPlay/WJBingDic/WJBingDicDylib/Logos/WJBingDicDylib.xm"



static UITableViewCell * _logos_method$_ungrouped$_TtC7BingDic22WordListViewController$tableView$cellForRowAtIndexPath$(_LOGOS_SELF_TYPE_NORMAL _TtC7BingDic22WordListViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UITableView * tableView, NSIndexPath * indexPath) {
    id rlt = _logos_orig$_ungrouped$_TtC7BingDic22WordListViewController$tableView$cellForRowAtIndexPath$(self, _cmd, tableView, indexPath);
    
    UITableViewCell *cellV = (UITableViewCell *)rlt;
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    int screenW = [[UIScreen mainScreen] bounds].size.width;
    int cellH = 65; 
    btn.frame = CGRectMake(screenW - cellH, 0, cellH, cellH);
    [btn setImage:[UIImage imageNamed:@"ico_loudspeaker"] forState:UIControlStateNormal];
    
    btn.tag = indexPath.row;
    [btn addTarget:self action:@selector(btnAction:) forControlEvents:UIControlEventTouchUpInside];
    
    [cellV.contentView addSubview:btn];
    return rlt;
}




static void _logos_method$_ungrouped$_TtC7BingDic22WordListViewController$btnAction$(_LOGOS_SELF_TYPE_NORMAL _TtC7BingDic22WordListViewController* _LOGOS_SELF_CONST __unused self, SEL __unused _cmd, UIButton * btn) {
    _TtC7BingDic11CollectWord *collectWord = (_TtC7BingDic11CollectWord *)self.wordList[btn.tag];
    NSLog(@"%@", collectWord);
    
    NSString *headWord = [collectWord.headWord lowercaseString];
    NSLog(@"%@", headWord);
    
    NSData *wordData =[headWord dataUsingEncoding:NSUnicodeStringEncoding];
    NSLog(@"%@", wordData);
    
    unsigned char md[16];
    unsigned char *inAry = (unsigned char *)wordData.bytes;
    CC_MD5((const void *)&inAry[2], (int)(wordData.length - 2), md);
    
    NSData *outData = [NSData dataWithBytes:(void*)md length:16];
    NSString *outStr = [WJToolUtil data2HexStr:outData];
    NSLog(@"%@", outStr);
    
    NSString *md5Str = [NSString stringWithFormat:@"%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X%02X",
                       md[7], md[6], md[5], md[4], md[3], md[2], md[1], md[0],
                       md[15], md[14], md[13], md[12], md[11], md[10], md[9], md[8]];
    NSLog(@"%@", md5Str);
    
    
    id ae = NSClassFromString(@"BDAudioEngine");
    SEL sel = NSSelectorFromString(@"shared");
    id aeShared = ((id (*)(id, SEL))objc_msgSend)(ae, sel);
    
    sel = NSSelectorFromString(@"playWithMID:type:parentView:");
    ((void (*)(id, SEL, NSString*, NSString*, id))objc_msgSend)(aeShared, sel, md5Str, @"kUsPron", nil);
}



static __attribute__((constructor)) void _logosLocalCtor_3295c76a(int __unused argc, char __unused **argv, char __unused **envp)
{
    {Class _logos_class$_ungrouped$_TtC7BingDic22WordListViewController = objc_getClass("_TtC7BingDic22WordListViewController"); MSHookMessageEx(_logos_class$_ungrouped$_TtC7BingDic22WordListViewController, @selector(tableView:cellForRowAtIndexPath:), (IMP)&_logos_method$_ungrouped$_TtC7BingDic22WordListViewController$tableView$cellForRowAtIndexPath$, (IMP*)&_logos_orig$_ungrouped$_TtC7BingDic22WordListViewController$tableView$cellForRowAtIndexPath$);{ char _typeEncoding[1024]; unsigned int i = 0; _typeEncoding[i] = 'v'; i += 1; _typeEncoding[i] = '@'; i += 1; _typeEncoding[i] = ':'; i += 1; memcpy(_typeEncoding + i, @encode(UIButton *), strlen(@encode(UIButton *))); i += strlen(@encode(UIButton *)); _typeEncoding[i] = '\0'; class_addMethod(_logos_class$_ungrouped$_TtC7BingDic22WordListViewController, @selector(btnAction:), (IMP)&_logos_method$_ungrouped$_TtC7BingDic22WordListViewController$btnAction$, _typeEncoding); }}
}
