#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRLayer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSession XRSession;
typedef struct XRWebGLLayerInit XRWebGLLayerInit;
typedef struct WebGLFramebuffer WebGLFramebuffer;
typedef struct XRViewport XRViewport;
typedef struct XRView XRView;


/**
 * @brief Interface XRWebGLLayer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRWebGLLayer)
 */
DECLARE_EMLITE_TYPE(XRWebGLLayer, XRLayer);

/**
 * @brief Creates a new `XRWebGLLayer` object. 
*/
XRWebGLLayer XRWebGLLayer_new0(XRSession * session, jb_Any * context);

/**
 * @brief Creates a new `XRWebGLLayer` object. 
*/
XRWebGLLayer XRWebGLLayer_new1(XRSession * session, jb_Any * context, XRWebGLLayerInit * layerInit);

/**
 * @brief Gets the `antialias` property. 
*/
bool XRWebGLLayer_antialias(const XRWebGLLayer *self);

/**
 * @brief Gets the `ignoreDepthValues` property. 
*/
bool XRWebGLLayer_ignoreDepthValues(const XRWebGLLayer *self);

/**
 * @brief Gets the `fixedFoveation` property. 
*/
float XRWebGLLayer_fixedFoveation(const XRWebGLLayer *self);

/**
 * @brief Sets the `fixedFoveation` property. 
*/
void XRWebGLLayer_set_fixedFoveation(XRWebGLLayer* self, float value);

/**
 * @brief Gets the `framebuffer` property. 
*/
WebGLFramebuffer XRWebGLLayer_framebuffer(const XRWebGLLayer *self);

/**
 * @brief Gets the `framebufferWidth` property. 
*/
unsigned long XRWebGLLayer_framebufferWidth(const XRWebGLLayer *self);

/**
 * @brief Gets the `framebufferHeight` property. 
*/
unsigned long XRWebGLLayer_framebufferHeight(const XRWebGLLayer *self);

/**
 * @brief Calls the `getViewport` method. 
*/
XRViewport XRWebGLLayer_getViewport(XRWebGLLayer* self , XRView * view);

/**
 * @brief Calls the `getNativeFramebufferScaleFactor` method. 
*/
double XRWebGLLayer_getNativeFramebufferScaleFactor(XRWebGLLayer* self , XRSession * session);

#ifdef __cplusplus
}
#endif
