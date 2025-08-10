#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRLayerInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRigidTransform XRRigidTransform;

DECLARE_EMLITE_TYPE(XREquirectLayerInit, XRLayerInit);

XRTextureType XREquirectLayerInit_textureType(const XREquirectLayerInit *self);

void XREquirectLayerInit_set_textureType(XREquirectLayerInit* self, XRTextureType * value);

XRRigidTransform XREquirectLayerInit_transform(const XREquirectLayerInit *self);

void XREquirectLayerInit_set_transform(XREquirectLayerInit* self, XRRigidTransform * value);

float XREquirectLayerInit_radius(const XREquirectLayerInit *self);

void XREquirectLayerInit_set_radius(XREquirectLayerInit* self, float value);

float XREquirectLayerInit_centralHorizontalAngle(const XREquirectLayerInit *self);

void XREquirectLayerInit_set_centralHorizontalAngle(XREquirectLayerInit* self, float value);

float XREquirectLayerInit_upperVerticalAngle(const XREquirectLayerInit *self);

void XREquirectLayerInit_set_upperVerticalAngle(XREquirectLayerInit* self, float value);

float XREquirectLayerInit_lowerVerticalAngle(const XREquirectLayerInit *self);

void XREquirectLayerInit_set_lowerVerticalAngle(XREquirectLayerInit* self, float value);

XREquirectLayerInit XREquirectLayerInit_new();

#ifdef __cplusplus
}
#endif
