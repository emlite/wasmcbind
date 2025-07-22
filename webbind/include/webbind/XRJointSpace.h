#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XRSpace.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(XRJointSpace, XRSpace);

XRHandJoint XRJointSpace_jointName( const XRJointSpace *self);
