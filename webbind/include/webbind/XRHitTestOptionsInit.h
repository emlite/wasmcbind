#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSpace XRSpace;
typedef struct XRRay XRRay;

DECLARE_EMLITE_TYPE(XRHitTestOptionsInit, em_Val);

XRSpace XRHitTestOptionsInit_space(const XRHitTestOptionsInit *self);

void XRHitTestOptionsInit_set_space(XRHitTestOptionsInit* self, XRSpace * value);

jb_Array XRHitTestOptionsInit_entityTypes(const XRHitTestOptionsInit *self);

void XRHitTestOptionsInit_set_entityTypes(XRHitTestOptionsInit* self, jb_Array * value);

XRRay XRHitTestOptionsInit_offsetRay(const XRHitTestOptionsInit *self);

void XRHitTestOptionsInit_set_offsetRay(XRHitTestOptionsInit* self, XRRay * value);

XRHitTestOptionsInit XRHitTestOptionsInit_new();

#ifdef __cplusplus
}
#endif
