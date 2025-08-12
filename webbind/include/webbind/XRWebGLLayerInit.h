#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type XRWebGLLayerInit */
DECLARE_EMLITE_TYPE(XRWebGLLayerInit, em_Val);

/** @brief Getter of the antialias property */
bool XRWebGLLayerInit_antialias(const XRWebGLLayerInit *self);

/** @brief Setter of the antialias property */
void XRWebGLLayerInit_set_antialias(XRWebGLLayerInit* self, bool value);

/** @brief Getter of the depth property */
bool XRWebGLLayerInit_depth(const XRWebGLLayerInit *self);

/** @brief Setter of the depth property */
void XRWebGLLayerInit_set_depth(XRWebGLLayerInit* self, bool value);

/** @brief Getter of the stencil property */
bool XRWebGLLayerInit_stencil(const XRWebGLLayerInit *self);

/** @brief Setter of the stencil property */
void XRWebGLLayerInit_set_stencil(XRWebGLLayerInit* self, bool value);

/** @brief Getter of the alpha property */
bool XRWebGLLayerInit_alpha(const XRWebGLLayerInit *self);

/** @brief Setter of the alpha property */
void XRWebGLLayerInit_set_alpha(XRWebGLLayerInit* self, bool value);

/** @brief Getter of the ignoreDepthValues property */
bool XRWebGLLayerInit_ignoreDepthValues(const XRWebGLLayerInit *self);

/** @brief Setter of the ignoreDepthValues property */
void XRWebGLLayerInit_set_ignoreDepthValues(XRWebGLLayerInit* self, bool value);

/** @brief Getter of the framebufferScaleFactor property */
double XRWebGLLayerInit_framebufferScaleFactor(const XRWebGLLayerInit *self);

/** @brief Setter of the framebufferScaleFactor property */
void XRWebGLLayerInit_set_framebufferScaleFactor(XRWebGLLayerInit* self, double value);

/** @brief Constructor of the XRWebGLLayerInit dictionary type */
XRWebGLLayerInit XRWebGLLayerInit_new();

#ifdef __cplusplus
}
#endif
