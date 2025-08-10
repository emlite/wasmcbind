#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(XRRayDirectionInit, em_Val);

double XRRayDirectionInit_x(const XRRayDirectionInit *self);

void XRRayDirectionInit_set_x(XRRayDirectionInit* self, double value);

double XRRayDirectionInit_y(const XRRayDirectionInit *self);

void XRRayDirectionInit_set_y(XRRayDirectionInit* self, double value);

double XRRayDirectionInit_z(const XRRayDirectionInit *self);

void XRRayDirectionInit_set_z(XRRayDirectionInit* self, double value);

double XRRayDirectionInit_w(const XRRayDirectionInit *self);

void XRRayDirectionInit_set_w(XRRayDirectionInit* self, double value);

XRRayDirectionInit XRRayDirectionInit_new();

#ifdef __cplusplus
}
#endif
