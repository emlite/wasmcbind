#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DOMPointReadOnly DOMPointReadOnly;
typedef struct XRRigidTransform XRRigidTransform;


typedef struct {
  em_Val inner;
} XRRay;


DECLARE_EMLITE_TYPE(XRRay, em_Val);

XRRay XRRay_new(const XRRigidTransform* transform);

DOMPointReadOnly XRRay_origin( const XRRay *self);

DOMPointReadOnly XRRay_direction( const XRRay *self);

jb_Float32Array XRRay_matrix( const XRRay *self);
