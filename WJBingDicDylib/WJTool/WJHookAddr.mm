#import <Foundation/Foundation.h>
#import <mach-o/dyld.h>
#import "WJToolUtil.h"
#import "hookzz.h"

void check_proxy(RegState *rs, const HookEntryInfo *info);
void check_proxy(RegState *rs, const HookEntryInfo *info)
{
    rs->general.regs.x0 = 1;
}

//__attribute__((constructor)) static void entry()
//{
//    NSLog(@"hook addr");
//    
//    long main_module_base = (long)_dyld_get_image_header(0);
//    WJLog(@"main_module_base: %p", (void *)main_module_base);
//
//    // 过代理检测
//    long hookAddr = main_module_base + 0xA45C7C;
//    ZzDynamicBinaryInstrumentation((void *)hookAddr, check_proxy);
//}
