#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSpace XRSpace;

DECLARE_EMLITE_TYPE(XRLayerInit, em_Val);

XRSpace XRLayerInit_space(const XRLayerInit *self);

void XRLayerInit_set_space(XRLayerInit* self, XRSpace * value);

jb_Any XRLayerInit_colorFormat(const XRLayerInit *self);

void XRLayerInit_set_colorFormat(XRLayerInit* self, jb_Any * value);

jb_Any XRLayerInit_depthFormat(const XRLayerInit *self);

void XRLayerInit_set_depthFormat(XRLayerInit* self, jb_Any * value);

unsigned long XRLayerInit_mipLevels(const XRLayerInit *self);

void XRLayerInit_set_mipLevels(XRLayerInit* self, unsigned long value);

unsigned long XRLayerInit_viewPixelWidth(const XRLayerInit *self);

void XRLayerInit_set_viewPixelWidth(XRLayerInit* self, unsigned long value);

unsigned long XRLayerInit_viewPixelHeight(const XRLayerInit *self);

void XRLayerInit_set_viewPixelHeight(XRLayerInit* self, unsigned long value);

XRLayerLayout XRLayerInit_layout(const XRLayerInit *self);

void XRLayerInit_set_layout(XRLayerInit* self, XRLayerLayout * value);

bool XRLayerInit_isStatic(const XRLayerInit *self);

void XRLayerInit_set_isStatic(XRLayerInit* self, bool value);

bool XRLayerInit_clearOnAccess(const XRLayerInit *self);

void XRLayerInit_set_clearOnAccess(XRLayerInit* self, bool value);

XRLayerInit XRLayerInit_new();

#ifdef __cplusplus
}
#endif
