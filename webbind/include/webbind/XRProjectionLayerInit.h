#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(XRProjectionLayerInit, em_Val);

XRTextureType XRProjectionLayerInit_textureType(const XRProjectionLayerInit *self);

void XRProjectionLayerInit_set_textureType(XRProjectionLayerInit* self, XRTextureType * value);

jb_Any XRProjectionLayerInit_colorFormat(const XRProjectionLayerInit *self);

void XRProjectionLayerInit_set_colorFormat(XRProjectionLayerInit* self, jb_Any * value);

jb_Any XRProjectionLayerInit_depthFormat(const XRProjectionLayerInit *self);

void XRProjectionLayerInit_set_depthFormat(XRProjectionLayerInit* self, jb_Any * value);

double XRProjectionLayerInit_scaleFactor(const XRProjectionLayerInit *self);

void XRProjectionLayerInit_set_scaleFactor(XRProjectionLayerInit* self, double value);

bool XRProjectionLayerInit_clearOnAccess(const XRProjectionLayerInit *self);

void XRProjectionLayerInit_set_clearOnAccess(XRProjectionLayerInit* self, bool value);

XRProjectionLayerInit XRProjectionLayerInit_new();

#ifdef __cplusplus
}
#endif
