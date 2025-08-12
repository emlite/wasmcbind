#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSpace XRSpace;
typedef struct Gamepad Gamepad;
typedef struct XRHand XRHand;


/**
 * @brief Interface XRInputSource
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRInputSource)
 */
DECLARE_EMLITE_TYPE(XRInputSource, em_Val);

/**
 * @brief Gets the `handedness` property. 
*/
XRHandedness XRInputSource_handedness(const XRInputSource *self);

/**
 * @brief Gets the `targetRayMode` property. 
*/
XRTargetRayMode XRInputSource_targetRayMode(const XRInputSource *self);

/**
 * @brief Gets the `targetRaySpace` property. 
*/
XRSpace XRInputSource_targetRaySpace(const XRInputSource *self);

/**
 * @brief Gets the `gripSpace` property. 
*/
XRSpace XRInputSource_gripSpace(const XRInputSource *self);

/**
 * @brief Gets the `profiles` property. 
*/
jb_Array XRInputSource_profiles(const XRInputSource *self);

/**
 * @brief Gets the `skipRendering` property. 
*/
bool XRInputSource_skipRendering(const XRInputSource *self);

/**
 * @brief Gets the `gamepad` property. 
*/
Gamepad XRInputSource_gamepad(const XRInputSource *self);

/**
 * @brief Gets the `hand` property. 
*/
XRHand XRInputSource_hand(const XRInputSource *self);

#ifdef __cplusplus
}
#endif
