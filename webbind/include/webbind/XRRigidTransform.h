#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DOMPointReadOnly DOMPointReadOnly;
typedef struct XRRigidTransform XRRigidTransform;
typedef struct DOMPointInit DOMPointInit;


typedef struct {
  em_Val inner;
} XRRigidTransform;


DECLARE_EMLITE_TYPE(XRRigidTransform, em_Val);

XRRigidTransform XRRigidTransform_new();

XRRigidTransform XRRigidTransform_new(const DOMPointInit* position);

XRRigidTransform XRRigidTransform_new(const DOMPointInit* position, const DOMPointInit* orientation);

DOMPointReadOnly XRRigidTransform_position( const XRRigidTransform *self);

DOMPointReadOnly XRRigidTransform_orientation( const XRRigidTransform *self);

jb_Float32Array XRRigidTransform_matrix( const XRRigidTransform *self);

XRRigidTransform XRRigidTransform_inverse( const XRRigidTransform *self);
