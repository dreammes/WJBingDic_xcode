//
//  WJToolUtil.h
//  WJWeChatDylib
//
//  Created by 王军 on 2017/12/22.
//  Copyright © 2017年 王军. All rights reserved.
//

#import <Foundation/Foundation.h>

#define WJLog(FORMAT, ...) printf("%s\n", [[NSString stringWithFormat:FORMAT, ##__VA_ARGS__] UTF8String]);

@interface WJToolUtil : NSObject

+ (NSString *)data2HexStr:(NSData *)data;

+ (NSString *)ivarKeyValueDescription:(NSObject *)obj;

+ (NSData *)zLibDecompressed:(NSData *)inData;

@end
