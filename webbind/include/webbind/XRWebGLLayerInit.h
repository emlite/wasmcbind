#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(XRWebGLLayerInit, em_Val);

bool XRWebGLLayerInit_antialias(const XRWebGLLayerInit *self);

void XRWebGLLayerInit_set_antialias(XRWebGLLayerInit* self, bool value);

bool XRWebGLLayerInit_depth(const XRWebGLLayerInit *self);

void XRWebGLLayerInit_set_depth(XRWebGLLayerInit* self, bool value);

bool XRWebGLLayerInit_stencil(const XRWebGLLayerInit *self);

void XRWebGLLayerInit_set_stencil(XRWebGLLayerInit* self, bool value);

bool XRWebGLLayerInit_alpha(const XRWebGLLayerInit *self);

void XRWebGLLayerInit_set_alpha(XRWebGLLayerInit* self, bool value);

bool XRWebGLLayerInit_ignoreDepthValues(const XRWebGLLayerInit *self);

void XRWebGLLayerInit_set_ignoreDepthValues(XRWebGLLayerInit* self, bool value);

double XRWebGLLayerInit_framebufferScaleFactor(const XRWebGLLayerInit *self);

void XRWebGLLayerInit_set_framebufferScaleFactor(XRWebGLLayerInit* self, double value);

XRWebGLLayerInit XRWebGLLayerInit_new();

#ifdef __cplusplus
}
#endif
