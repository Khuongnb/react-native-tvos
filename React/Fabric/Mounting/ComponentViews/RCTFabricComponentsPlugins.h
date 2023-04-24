/**
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the root directory of this source tree.
 *
 * @generated by an internal plugin build system
 */

#ifdef RN_DISABLE_OSS_PLUGIN_HEADER

// FB Internal: FBRCTFabricComponentsPlugins.h is autogenerated by the build system.
#import <React/FBRCTFabricComponentsPlugins.h>

#else

// OSS-compatibility layer

#import <Foundation/Foundation.h>
#import <RCTThirdPartyFabricComponentsProvider.h>
#import <React/RCTComponentViewProtocol.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wreturn-type-c-linkage"

#ifdef __cplusplus
extern "C" {
#endif

Class<RCTComponentViewProtocol> RCTFabricComponentsProvider(const char *name);

// Lookup functions
Class<RCTComponentViewProtocol> RCTSafeAreaViewCls(void) __attribute__((used));
Class<RCTComponentViewProtocol> RCTScrollViewCls(void) __attribute__((used));
#if !TARGET_OS_TV
Class<RCTComponentViewProtocol> RCTPullToRefreshViewCls(void) __attribute__((used));
#endif
Class<RCTComponentViewProtocol> RCTActivityIndicatorViewCls(void) __attribute__((used));
#if !TARGET_OS_TV
Class<RCTComponentViewProtocol> RCTSliderCls(void) __attribute__((used));
Class<RCTComponentViewProtocol> RCTSwitchCls(void) __attribute__((used));
#endif
Class<RCTComponentViewProtocol> RCTUnimplementedNativeViewCls(void) __attribute__((used));
Class<RCTComponentViewProtocol> RCTParagraphCls(void) __attribute__((used));
Class<RCTComponentViewProtocol> RCTTextInputCls(void) __attribute__((used));
#if !TARGET_OS_TV
Class<RCTComponentViewProtocol> RCTInputAccessoryCls(void) __attribute__((used));
#endif
Class<RCTComponentViewProtocol> RCTViewCls(void) __attribute__((used));
Class<RCTComponentViewProtocol> RCTImageCls(void) __attribute__((used));
Class<RCTComponentViewProtocol> RCTModalHostViewCls(void) __attribute__((used));

#ifdef __cplusplus
}
#endif

#pragma GCC diagnostic pop

#endif // RN_DISABLE_OSS_PLUGIN_HEADER
