#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRLayer XRLayer;

DECLARE_EMLITE_TYPE(XRLayerEventInit, EventInit);

XRLayer XRLayerEventInit_layer(const XRLayerEventInit *self);

void XRLayerEventInit_set_layer(XRLayerEventInit* self, XRLayer * value);

XRLayerEventInit XRLayerEventInit_new();

#ifdef __cplusplus
}
#endif
