#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRigidTransform XRRigidTransform;
typedef struct DOMPointReadOnly DOMPointReadOnly;

DECLARE_EMLITE_TYPE(XRRay, em_Val);

XRRay XRRay_new(XRRigidTransform * transform);

DOMPointReadOnly XRRay_origin(const XRRay *self);

DOMPointReadOnly XRRay_direction(const XRRay *self);

jb_Float32Array XRRay_matrix(const XRRay *self);

#ifdef __cplusplus
}
#endif
