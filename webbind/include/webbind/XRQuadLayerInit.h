#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRLayerInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRigidTransform XRRigidTransform;

DECLARE_EMLITE_TYPE(XRQuadLayerInit, XRLayerInit);

XRTextureType XRQuadLayerInit_textureType(const XRQuadLayerInit *self);

void XRQuadLayerInit_set_textureType(XRQuadLayerInit* self, XRTextureType * value);

XRRigidTransform XRQuadLayerInit_transform(const XRQuadLayerInit *self);

void XRQuadLayerInit_set_transform(XRQuadLayerInit* self, XRRigidTransform * value);

float XRQuadLayerInit_width(const XRQuadLayerInit *self);

void XRQuadLayerInit_set_width(XRQuadLayerInit* self, float value);

float XRQuadLayerInit_height(const XRQuadLayerInit *self);

void XRQuadLayerInit_set_height(XRQuadLayerInit* self, float value);

XRQuadLayerInit XRQuadLayerInit_new();

#ifdef __cplusplus
}
#endif
