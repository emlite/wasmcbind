#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRPose.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(XRJointPose, XRPose);

float XRJointPose_radius(const XRJointPose *self);

#ifdef __cplusplus
}
#endif
