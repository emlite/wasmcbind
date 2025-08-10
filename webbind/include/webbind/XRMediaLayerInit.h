#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSpace XRSpace;

DECLARE_EMLITE_TYPE(XRMediaLayerInit, em_Val);

XRSpace XRMediaLayerInit_space(const XRMediaLayerInit *self);

void XRMediaLayerInit_set_space(XRMediaLayerInit* self, XRSpace * value);

XRLayerLayout XRMediaLayerInit_layout(const XRMediaLayerInit *self);

void XRMediaLayerInit_set_layout(XRMediaLayerInit* self, XRLayerLayout * value);

bool XRMediaLayerInit_invertStereo(const XRMediaLayerInit *self);

void XRMediaLayerInit_set_invertStereo(XRMediaLayerInit* self, bool value);

XRMediaLayerInit XRMediaLayerInit_new();

#ifdef __cplusplus
}
#endif
