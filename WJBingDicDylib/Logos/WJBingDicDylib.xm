// See http://iphonedevwiki.net/index.php/Logos

#import <UIKit/UIKit.h>
#import <CommonCrypto/CommonDigest.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import "WJToolUtil.h"
#import "WJBingDicDylib.h"

%hook _TtC7BingDic22WordListViewController

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    id rlt = %orig;
    
    UITableViewCell *cellV = (UITableViewCell *)rlt;
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    int screenW = [[UIScreen mainScreen] bounds].size.width;
    int cellH = 65; //cellV.frame.size.height;
    btn.frame = CGRectMake(screenW - cellH, 0, cellH, cellH);
    [btn setImage:[UIImage imageNamed:@"ico_loudspeaker"] forState:UIControlStateNormal];
    
    btn.tag = indexPath.row;
    [btn addTarget:self action:@selector(btnAction:) forControlEvents:UIControlEventTouchUpInside];
    
    [cellV.contentView addSubview:btn];
    return rlt;
}

%new

-(void)btnAction:(UIButton *)btn
{
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
    
    //[[BDAudioEngine shared] playWithMID:md5Str type:@"kUsPron" parentView:self];
    id ae = NSClassFromString(@"BDAudioEngine");
    SEL sel = NSSelectorFromString(@"shared");
    id aeShared = ((id (*)(id, SEL))objc_msgSend)(ae, sel);
    
    sel = NSSelectorFromString(@"playWithMID:type:parentView:");
    ((void (*)(id, SEL, NSString*, NSString*, id))objc_msgSend)(aeShared, sel, md5Str, @"kUsPron", nil);
}

%end

%ctor
{
    %init();
}
