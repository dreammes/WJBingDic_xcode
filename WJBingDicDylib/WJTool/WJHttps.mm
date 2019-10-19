#import <Security/SecureTransport.h>
#import "substrate.h"
#import "FLEXManager.h"
#import "hookzz.h"

static OSStatus (*org_SSLHandshake)(SSLContextRef context);
static OSStatus new_SSLHandshake(SSLContextRef context)
{
    OSStatus result = org_SSLHandshake(context);
    if (result == errSSLServerAuthCompleted) {
        return org_SSLHandshake(context);
    }
    else
        return result;
}

static OSStatus (*org_SSLSetSessionOption)(
    SSLContextRef context,
    SSLSessionOption option,
    Boolean value
);
static OSStatus new_SSLSetSessionOption(
    SSLContextRef context,
    SSLSessionOption option,
    Boolean value
)
{
    if (option == kSSLSessionOptionBreakOnServerAuth)
        return noErr;
    else
        return org_SSLSetSessionOption(context, option, value);
}

static SSLContextRef (*org_SSLCreateContext)(
    CFAllocatorRef alloc,
    SSLProtocolSide protocolSide,
    SSLConnectionType connectionType
);
static SSLContextRef new_SSLCreateContext(
    CFAllocatorRef alloc,
    SSLProtocolSide protocolSide,
    SSLConnectionType connectionType
)
{
    SSLContextRef sslContext = org_SSLCreateContext(alloc, protocolSide, connectionType);
    org_SSLSetSessionOption(sslContext, kSSLSessionOptionBreakOnServerAuth, true);
    return sslContext;
}

static OSStatus (*org_tls_helper_create_peer_trust)(
    void *hdsk,
    bool server,
    SecTrustRef *trustRef
);
static OSStatus new_tls_helper_create_peer_trust(
    void *hdsk,
    bool server,
    SecTrustRef *trustRef
)
{
    return errSecSuccess;
}

static void (*org_SetTLSTrustEvaluator)(id self, SEL _cmd, id evaluator);
static void new_SetTLSTrustEvaluator(id self, SEL _cmd, id evaluator)
{
    org_SetTLSTrustEvaluator(self, _cmd, nil);
}

static void (*org_RegisterOrigin)(id self, SEL _cmd, NSString *origin);
static void new_RegisterOrigin(id self, SEL _cmd, NSString *origin)
{

}

static void (*org_SetprotocolClasses)(id self, SEL _cmd, NSArray <Class> *protocolClasses);
static void new_SetprotocolClasses(id self, SEL _cmd, NSArray <Class> *protocolClasses)
{

}

//__attribute__((constructor)) static void entry()
//{
//    ZzHookReplace((void *)SSLHandshake, (void *)new_SSLHandshake, (void **)&org_SSLHandshake);
//    ZzHookReplace((void *)SSLSetSessionOption, (void *)new_SSLSetSessionOption, (void **)&org_SSLSetSessionOption);
//    ZzHookReplace((void *)SSLCreateContext, (void *)new_SSLCreateContext, (void **)&org_SSLCreateContext);
//
//    NSProcessInfo *processInfo = [NSProcessInfo processInfo];
//    if ([processInfo respondsToSelector:@selector(isOperatingSystemAtLeastVersion:)] && [processInfo isOperatingSystemAtLeastVersion:(NSOperatingSystemVersion){11, 0, 0}])
//    {
//        // Support for iOS 11
//        void* handle = dlopen("/usr/lib/libnetwork.dylib", RTLD_NOW);
//        void *tls_helper_create_peer_trust = dlsym(handle, "nw_tls_create_peer_trust");
//        if (tls_helper_create_peer_trust)
//        {
//            ZzHookReplace(
//                          (void *)tls_helper_create_peer_trust,
//                          (void *)new_tls_helper_create_peer_trust,
//                          (void **)&org_tls_helper_create_peer_trust
//                          );
//        }
//    }
//    else if ([processInfo respondsToSelector:@selector(isOperatingSystemAtLeastVersion:)] && [processInfo isOperatingSystemAtLeastVersion:(NSOperatingSystemVersion){10, 0, 0}])
//    {
//        // Support for iOS 10
//        void *tls_helper_create_peer_trust = dlsym(RTLD_DEFAULT, "tls_helper_create_peer_trust");
//        ZzHookReplace(
//                      (void *)tls_helper_create_peer_trust,
//                      (void *)new_tls_helper_create_peer_trust,
//                      (void **)&org_tls_helper_create_peer_trust
//                      );
//    }
//
//    Class spdyProtocolClass = NSClassFromString(@"SPDYProtocol");
//    if (spdyProtocolClass)
//    {
//        MSHookMessageEx(
//                        object_getClass(spdyProtocolClass),
//                        NSSelectorFromString(@"setTLSTrustEvaluator:"),
//                        (IMP)&new_SetTLSTrustEvaluator,
//                        (IMP *)&org_SetTLSTrustEvaluator
//                        );
//
//        Class spdyUrlConnectionProtocolClass = NSClassFromString(@"SPDYURLConnectionProtocol");
//        MSHookMessageEx(
//                        object_getClass(spdyUrlConnectionProtocolClass),
//                        NSSelectorFromString(@"registerOrigin:"),
//                        (IMP)&new_RegisterOrigin,
//                        (IMP *)&org_RegisterOrigin
//                        );
//
//        MSHookMessageEx(
//                        NSClassFromString(@"NSURLSessionConfiguration"),
//                        NSSelectorFromString(@"setprotocolClasses:"),
//                        (IMP)&new_SetprotocolClasses,
//                        (IMP *)&org_SetprotocolClasses
//                        );
//    }
//
//    [[NSNotificationCenter defaultCenter] addObserverForName:UIApplicationDidFinishLaunchingNotification object:nil queue:[NSOperationQueue mainQueue] usingBlock:^(NSNotification * _Nonnull note) {
//        // flex 初始化
//        [[FLEXManager sharedManager] showExplorer];
//        if (![[FLEXManager sharedManager] isNetworkDebuggingEnabled])
//            [[FLEXManager sharedManager] setNetworkDebuggingEnabled:YES];
//    }];
//
//}
