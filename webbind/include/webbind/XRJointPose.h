#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XRPose.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(XRJointPose, XRPose);

float XRJointPose_radius( const XRJointPose *self);
