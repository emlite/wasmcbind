#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRWebGLLayer XRWebGLLayer;
typedef struct XRLayer XRLayer;

DECLARE_EMLITE_TYPE(XRRenderStateInit, em_Val);

double XRRenderStateInit_depthNear(const XRRenderStateInit *self);

void XRRenderStateInit_set_depthNear(XRRenderStateInit* self, double value);

double XRRenderStateInit_depthFar(const XRRenderStateInit *self);

void XRRenderStateInit_set_depthFar(XRRenderStateInit* self, double value);

bool XRRenderStateInit_passthroughFullyObscured(const XRRenderStateInit *self);

void XRRenderStateInit_set_passthroughFullyObscured(XRRenderStateInit* self, bool value);

double XRRenderStateInit_inlineVerticalFieldOfView(const XRRenderStateInit *self);

void XRRenderStateInit_set_inlineVerticalFieldOfView(XRRenderStateInit* self, double value);

XRWebGLLayer XRRenderStateInit_baseLayer(const XRRenderStateInit *self);

void XRRenderStateInit_set_baseLayer(XRRenderStateInit* self, XRWebGLLayer * value);

jb_Array XRRenderStateInit_layers(const XRRenderStateInit *self);

void XRRenderStateInit_set_layers(XRRenderStateInit* self, jb_Array * value);

XRRenderStateInit XRRenderStateInit_new();

#ifdef __cplusplus
}
#endif
