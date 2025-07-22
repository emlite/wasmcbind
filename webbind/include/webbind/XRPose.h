#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct XRRigidTransform XRRigidTransform;
typedef struct DOMPointReadOnly DOMPointReadOnly;


typedef struct {
  em_Val inner;
} XRPose;


DECLARE_EMLITE_TYPE(XRPose, em_Val);

XRRigidTransform XRPose_transform( const XRPose *self);

DOMPointReadOnly XRPose_linearVelocity( const XRPose *self);

DOMPointReadOnly XRPose_angularVelocity( const XRPose *self);

bool XRPose_emulatedPosition( const XRPose *self);
