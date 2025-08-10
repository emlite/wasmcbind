#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRMediaLayerInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRigidTransform XRRigidTransform;

DECLARE_EMLITE_TYPE(XRMediaEquirectLayerInit, XRMediaLayerInit);

XRRigidTransform XRMediaEquirectLayerInit_transform(const XRMediaEquirectLayerInit *self);

void XRMediaEquirectLayerInit_set_transform(XRMediaEquirectLayerInit* self, XRRigidTransform * value);

float XRMediaEquirectLayerInit_radius(const XRMediaEquirectLayerInit *self);

void XRMediaEquirectLayerInit_set_radius(XRMediaEquirectLayerInit* self, float value);

float XRMediaEquirectLayerInit_centralHorizontalAngle(const XRMediaEquirectLayerInit *self);

void XRMediaEquirectLayerInit_set_centralHorizontalAngle(XRMediaEquirectLayerInit* self, float value);

float XRMediaEquirectLayerInit_upperVerticalAngle(const XRMediaEquirectLayerInit *self);

void XRMediaEquirectLayerInit_set_upperVerticalAngle(XRMediaEquirectLayerInit* self, float value);

float XRMediaEquirectLayerInit_lowerVerticalAngle(const XRMediaEquirectLayerInit *self);

void XRMediaEquirectLayerInit_set_lowerVerticalAngle(XRMediaEquirectLayerInit* self, float value);

XRMediaEquirectLayerInit XRMediaEquirectLayerInit_new();

#ifdef __cplusplus
}
#endif
