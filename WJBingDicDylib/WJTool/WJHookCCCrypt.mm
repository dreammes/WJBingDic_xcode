//
//  WJHookCCCrypt.m
//  TZAlipayDylib
//
//  Created by WUCHEN on 2018/6/22.
//  Copyright © 2018年 WUCHEN. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonCryptor.h>
#import <CommonCrypto/CommonDigest.h>
#import "hookzz.h"
#import "WJToolUtil.h"

static size_t getIVLength(CCAlgorithm alg) {
    switch(alg) {
        case kCCAlgorithmAES128:
            return kCCBlockSizeAES128;
        case kCCAlgorithmDES:
            return kCCBlockSizeDES;
        case kCCAlgorithm3DES:
            return kCCBlockSize3DES;
        case kCCAlgorithmCAST:
            return kCCBlockSizeCAST;
        case kCCAlgorithmRC2:
            return kCCBlockSizeRC2;
        default:
            return 0;
    }
}

static NSString* getOperation(CCOperation op){
    switch (op) {
        case kCCEncrypt:
            return @"Encrypt";
        case kCCDecrypt:
            return @"Decrypt";
        default:
            return @"unknown";
    }
}

static NSString* getAlgName(CCAlgorithm alg){
    switch (alg) {
        case kCCAlgorithmAES128:
            return @"AES128";
        case kCCAlgorithmDES:
            return @"DES";
        case kCCAlgorithm3DES:
            return @"3DES";
        case kCCAlgorithmCAST:
            return @"CAST";
        case kCCAlgorithmRC4:
            return @"RC4";
        case kCCAlgorithmRC2:
            return @"RC2";
        default:
            return @"unknown";
    }
}

static NSString* getOption(CCOptions options){
    switch (options) {
        case 0:
            return @"CBCMode";
        case kCCOptionPKCS7Padding:
            return @"PKCS7Padding | CBCMode";
        case kCCOptionECBMode:
            return @"ECBMode";
        case 3:
            return @"PKCS7Padding | ECBMode";
        default:
            return @"unknown";
    }
}

static CCCryptorStatus (*orig_CCCrypt)(
                                        CCOperation op,
                                        CCAlgorithm alg,
                                        CCOptions options,
                                        const void *key,
                                        size_t keyLength,
                                        const void *iv,
                                        const void *dataIn,
                                        size_t dataInLength,
                                        void *dataOut,
                                        size_t dataOutAvailable,
                                        size_t *dataOutMoved);

static CCCryptorStatus new_CCCrypt(
                                    CCOperation op,
                                    CCAlgorithm alg,
                                    CCOptions options,
                                    const void *key,
                                    size_t keyLength,
                                    const void *iv,
                                    const void *dataIn,
                                    size_t dataInLength,
                                    void *dataOut,
                                    size_t dataOutAvailable,
                                    size_t *dataOutMoved)
{
    NSMutableString *appendStr = [NSMutableString string];
    [appendStr appendString:@"==================== CCCrypt ==================\n"];
    
    [appendStr appendFormat:@"%@ | %@ | %@\n\n", getOperation(op), getAlgName(alg), getOption(options)];
    
    NSData *keyData = [NSData dataWithBytes:key length:keyLength];
    NSString *keyStr = [WJToolUtil data2HexStr:keyData];
    [appendStr appendFormat:@"key: %zu%@", keyLength, keyStr];
    
    if (iv != NULL)
    {
        size_t ivLen = getIVLength(alg);
        NSData *ivData = [NSData dataWithBytes:iv length:ivLen];
        NSString *ivStr = [WJToolUtil data2HexStr:ivData];
        [appendStr appendFormat:@"iv: %zu%@", ivLen, ivStr];
    }
    
    NSData *inData = [NSData dataWithBytes:(void *)dataIn length:dataInLength];
    NSString *inStr = [WJToolUtil data2HexStr:inData];
    [appendStr appendFormat:@"in buf: %@", inStr];
    
    int rlt = orig_CCCrypt(op, alg, options,
                           key, keyLength, iv, dataIn, dataInLength,
                           dataOut, dataOutAvailable, dataOutMoved);
    
    NSData *outData = [NSData dataWithBytes:dataOut length:*dataOutMoved];
    NSString *outStr = [WJToolUtil data2HexStr:outData];
    [appendStr appendFormat:@"out buf: %@", outStr];
    
    WJLog(@"%@", appendStr);
    return rlt;
}

static unsigned char *(*orig_CC_MD5)(const void *data, CC_LONG len, unsigned char *md);
static unsigned char *new_CC_MD5(const void *data, CC_LONG len, unsigned char *md)
{
    unsigned char *rlt = orig_CC_MD5(data, len, md);
    
    NSData *inData = [NSData dataWithBytes:(void *)data length:len];
    NSString *inStr = [WJToolUtil data2HexStr:inData];
    
    NSData *outData = [NSData dataWithBytes:(void *)md length:0x10];
    NSString *outStr = [WJToolUtil data2HexStr:outData];
    
    NSMutableString *appendStr = [NSMutableString string];
    [appendStr appendString:@"==================== CC_MD5 ==================\n"];
    [appendStr appendFormat:@"in buf: %@", inStr];
    [appendStr appendFormat:@"out buf: %@", outStr];
    WJLog(@"%@", appendStr);
    return rlt;
}


//__attribute__((constructor)) static void entry()
//{
//    ZzHookReplace((void *)CCCrypt, (void *)new_CCCrypt, (void **)&orig_CCCrypt);
//    NSLog(@"CCCrypt addr: %p", (void *)CCCrypt);
//    
//    ZzHookReplace((void *)CC_MD5, (void *)new_CC_MD5, (void **)&orig_CC_MD5);
//    NSLog(@"CCCrypt addr: %p", (void *)CC_MD5);
//}
