#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "XRSpace.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(XRJointSpace, XRSpace);

XRHandJoint XRJointSpace_jointName(const XRJointSpace *self);

#ifdef __cplusplus
}
#endif
