#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRMediaLayerInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRigidTransform XRRigidTransform;

DECLARE_EMLITE_TYPE(XRMediaCylinderLayerInit, XRMediaLayerInit);

XRRigidTransform XRMediaCylinderLayerInit_transform(const XRMediaCylinderLayerInit *self);

void XRMediaCylinderLayerInit_set_transform(XRMediaCylinderLayerInit* self, XRRigidTransform * value);

float XRMediaCylinderLayerInit_radius(const XRMediaCylinderLayerInit *self);

void XRMediaCylinderLayerInit_set_radius(XRMediaCylinderLayerInit* self, float value);

float XRMediaCylinderLayerInit_centralAngle(const XRMediaCylinderLayerInit *self);

void XRMediaCylinderLayerInit_set_centralAngle(XRMediaCylinderLayerInit* self, float value);

float XRMediaCylinderLayerInit_aspectRatio(const XRMediaCylinderLayerInit *self);

void XRMediaCylinderLayerInit_set_aspectRatio(XRMediaCylinderLayerInit* self, float value);

XRMediaCylinderLayerInit XRMediaCylinderLayerInit_new();

#ifdef __cplusplus
}
#endif
