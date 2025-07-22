#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XRCompositionLayer.h"
#include "enums.h"

typedef struct XRSpace XRSpace;
typedef struct XRRigidTransform XRRigidTransform;


typedef struct {
  XRCompositionLayer inner;
} XREquirectLayer;


DECLARE_EMLITE_TYPE(XREquirectLayer, XRCompositionLayer);

XRSpace XREquirectLayer_space( const XREquirectLayer *self);

void XREquirectLayer_set_space(XREquirectLayer* self, const XRSpace* value);

XRRigidTransform XREquirectLayer_transform( const XREquirectLayer *self);

void XREquirectLayer_set_transform(XREquirectLayer* self, const XRRigidTransform* value);

float XREquirectLayer_radius( const XREquirectLayer *self);

void XREquirectLayer_set_radius(XREquirectLayer* self, float value);

float XREquirectLayer_centralHorizontalAngle( const XREquirectLayer *self);

void XREquirectLayer_set_centralHorizontalAngle(XREquirectLayer* self, float value);

float XREquirectLayer_upperVerticalAngle( const XREquirectLayer *self);

void XREquirectLayer_set_upperVerticalAngle(XREquirectLayer* self, float value);

float XREquirectLayer_lowerVerticalAngle( const XREquirectLayer *self);

void XREquirectLayer_set_lowerVerticalAngle(XREquirectLayer* self, float value);

jb_Any XREquirectLayer_onredraw( const XREquirectLayer *self);

void XREquirectLayer_set_onredraw(XREquirectLayer* self, const jb_Any* value);
