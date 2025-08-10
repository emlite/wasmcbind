#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRLayerInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRigidTransform XRRigidTransform;

DECLARE_EMLITE_TYPE(XRCylinderLayerInit, XRLayerInit);

XRTextureType XRCylinderLayerInit_textureType(const XRCylinderLayerInit *self);

void XRCylinderLayerInit_set_textureType(XRCylinderLayerInit* self, XRTextureType * value);

XRRigidTransform XRCylinderLayerInit_transform(const XRCylinderLayerInit *self);

void XRCylinderLayerInit_set_transform(XRCylinderLayerInit* self, XRRigidTransform * value);

float XRCylinderLayerInit_radius(const XRCylinderLayerInit *self);

void XRCylinderLayerInit_set_radius(XRCylinderLayerInit* self, float value);

float XRCylinderLayerInit_centralAngle(const XRCylinderLayerInit *self);

void XRCylinderLayerInit_set_centralAngle(XRCylinderLayerInit* self, float value);

float XRCylinderLayerInit_aspectRatio(const XRCylinderLayerInit *self);

void XRCylinderLayerInit_set_aspectRatio(XRCylinderLayerInit* self, float value);

XRCylinderLayerInit XRCylinderLayerInit_new();

#ifdef __cplusplus
}
#endif
