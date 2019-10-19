//
//  WJToolUtil.m
//  WJWeChatDylib
//
//  Created by 王军 on 2017/12/22.
//  Copyright © 2017年 王军. All rights reserved.
//

#import "MJExtension.h"
#include <zlib.h>
#import "WJToolUtil.h"

@implementation WJToolUtil

+ (NSString *)data2HexStr:(NSData *)data
{
    NSString *(^ByteBuf2Str)(Byte *, int, int) = ^NSString *(Byte *buf, int len, int lineIndex) {
        
        NSMutableString *hexStr = [NSMutableString string];
        NSMutableString *charStr = [NSMutableString string];
        for (int i = 0; i < len; i++) {
            [hexStr appendFormat:@"%02X ", buf[i]];
            if (buf[i] >= 32 && buf[i] <= 126) {
                [charStr appendFormat:@"%c", buf[i]];
            } else {
                [charStr appendString:@"."];
            }
        }
        
        // 不到16字节用空格补
        if (len < 16) {
            for (int i = 0; i < (16-len)*3; i++) {
                [hexStr appendString:@" "];
            }
        }
        
        NSMutableString *rltStr = [NSMutableString string];
        NSString *lineStr = [NSString stringWithFormat:@"%08X", lineIndex*16];
        [rltStr appendString:lineStr];
        [rltStr appendString:@"   "];
        [rltStr appendString:hexStr];
        [rltStr appendString:@"   "];
        [rltStr appendString:charStr];
        return rltStr;
    };
    
    NSMutableString *appendStr = [NSMutableString string];
    [appendStr appendString:@"\n"];
    int curIndex = 0;
    int curLine = 0;
    while (curIndex < data.length)
    {
        NSUInteger len = data.length - curIndex > 16 ? 16 : data.length - curIndex;
        NSString *oneLineStr = ByteBuf2Str((Byte *)(data.bytes + curIndex), (int)len, curLine);
        [appendStr appendString:oneLineStr];
        [appendStr appendString:@"\n"];
        curIndex += len;
        curLine++;
    }
    [appendStr appendString:@"\n"];
    return appendStr;
}

+ (NSString *)ivarKeyValueDescription:(NSObject *)obj
{
    NSDictionary *dic = [obj mj_keyValues];
    return [NSString stringWithFormat:@"%@", dic];
}

+ (NSData *)zLibDecompressed:(NSData *)inData
{
    if ([inData length] == 0)
        return inData;
    
    NSUInteger full_length = [inData length];
    NSUInteger half_length = [inData length] / 2;
    
    NSMutableData *decompressed = [NSMutableData dataWithLength:full_length + half_length];
    BOOL done = NO;
    int status;
    
    z_stream strm;
    strm.next_in = (Bytef *)[inData bytes];
    strm.avail_in = (unsigned)[inData length];
    strm.total_out = 0;
    strm.zalloc = Z_NULL;
    strm.zfree = Z_NULL;
    
    if (inflateInit (&strm) != Z_OK) return nil;
    
    while (!done)
    {
        // Make sure we have enough room and reset the lengths.
        if (strm.total_out >= [decompressed length])
            [decompressed increaseLengthBy: half_length];
        strm.next_out = [decompressed mutableBytes] + strm.total_out;
        strm.avail_out = (uint)([decompressed length] - strm.total_out);
        
        // Inflate another chunk.
        status = inflate (&strm, Z_SYNC_FLUSH);
        if (status == Z_STREAM_END) done = YES;
        else if (status != Z_OK) break;
    }
    if (inflateEnd (&strm) != Z_OK) return nil;
    
    // Set real length.
    if (done)
    {
        [decompressed setLength: strm.total_out];
        return [NSData dataWithData: decompressed];
    }
    else return nil;
}

@end
