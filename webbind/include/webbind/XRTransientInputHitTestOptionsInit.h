#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRay XRRay;

DECLARE_EMLITE_TYPE(XRTransientInputHitTestOptionsInit, em_Val);

jb_String XRTransientInputHitTestOptionsInit_profile(const XRTransientInputHitTestOptionsInit *self);

void XRTransientInputHitTestOptionsInit_set_profile(XRTransientInputHitTestOptionsInit* self, jb_String * value);

jb_Array XRTransientInputHitTestOptionsInit_entityTypes(const XRTransientInputHitTestOptionsInit *self);

void XRTransientInputHitTestOptionsInit_set_entityTypes(XRTransientInputHitTestOptionsInit* self, jb_Array * value);

XRRay XRTransientInputHitTestOptionsInit_offsetRay(const XRTransientInputHitTestOptionsInit *self);

void XRTransientInputHitTestOptionsInit_set_offsetRay(XRTransientInputHitTestOptionsInit* self, XRRay * value);

XRTransientInputHitTestOptionsInit XRTransientInputHitTestOptionsInit_new();

#ifdef __cplusplus
}
#endif
