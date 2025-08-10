#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRLayerInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMPointReadOnly DOMPointReadOnly;

DECLARE_EMLITE_TYPE(XRCubeLayerInit, XRLayerInit);

DOMPointReadOnly XRCubeLayerInit_orientation(const XRCubeLayerInit *self);

void XRCubeLayerInit_set_orientation(XRCubeLayerInit* self, DOMPointReadOnly * value);

XRCubeLayerInit XRCubeLayerInit_new();

#ifdef __cplusplus
}
#endif
