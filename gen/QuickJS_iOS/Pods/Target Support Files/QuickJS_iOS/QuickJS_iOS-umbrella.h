#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "QJSConfiguration.h"
#import "QJSContext.h"
#import "QJSRuntime.h"
#import "QuickJS_iOS.h"
#import "quickjs.h"
#import "quickjs-libc.h"
#import "quickjs-atom.h"
#import "finalization-registry.h"

FOUNDATION_EXPORT double QuickJS_iOSVersionNumber;
FOUNDATION_EXPORT const unsigned char QuickJS_iOSVersionString[];

