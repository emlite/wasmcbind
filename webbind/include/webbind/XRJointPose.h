#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XRPose.h"
#include "enums.h"


typedef struct {
  XRPose inner;
} XRJointPose;


DECLARE_EMLITE_TYPE(XRJointPose, XRPose);

float XRJointPose_radius( const XRJointPose *self);
