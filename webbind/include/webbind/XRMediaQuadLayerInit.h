#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRMediaLayerInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRigidTransform XRRigidTransform;

DECLARE_EMLITE_TYPE(XRMediaQuadLayerInit, XRMediaLayerInit);

XRRigidTransform XRMediaQuadLayerInit_transform(const XRMediaQuadLayerInit *self);

void XRMediaQuadLayerInit_set_transform(XRMediaQuadLayerInit* self, XRRigidTransform * value);

float XRMediaQuadLayerInit_width(const XRMediaQuadLayerInit *self);

void XRMediaQuadLayerInit_set_width(XRMediaQuadLayerInit* self, float value);

float XRMediaQuadLayerInit_height(const XRMediaQuadLayerInit *self);

void XRMediaQuadLayerInit_set_height(XRMediaQuadLayerInit* self, float value);

XRMediaQuadLayerInit XRMediaQuadLayerInit_new();

#ifdef __cplusplus
}
#endif
