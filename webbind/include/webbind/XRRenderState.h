#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRWebGLLayer XRWebGLLayer;
typedef struct XRLayer XRLayer;


/**
 * @brief Interface XRRenderState
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRRenderState)
 */
DECLARE_EMLITE_TYPE(XRRenderState, em_Val);

/**
 * @brief Gets the `depthNear` property. 
*/
double XRRenderState_depthNear(const XRRenderState *self);

/**
 * @brief Gets the `depthFar` property. 
*/
double XRRenderState_depthFar(const XRRenderState *self);

/**
 * @brief Gets the `passthroughFullyObscured` property. 
*/
bool XRRenderState_passthroughFullyObscured(const XRRenderState *self);

/**
 * @brief Gets the `inlineVerticalFieldOfView` property. 
*/
double XRRenderState_inlineVerticalFieldOfView(const XRRenderState *self);

/**
 * @brief Gets the `baseLayer` property. 
*/
XRWebGLLayer XRRenderState_baseLayer(const XRRenderState *self);

/**
 * @brief Gets the `layers` property. 
*/
jb_Array XRRenderState_layers(const XRRenderState *self);

#ifdef __cplusplus
}
#endif
