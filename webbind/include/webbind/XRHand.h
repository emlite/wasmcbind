#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct XRJointSpace XRJointSpace;


DECLARE_EMLITE_TYPE(XRHand, em_Val);

unsigned long XRHand_size(const XRHand *self);

XRJointSpace XRHand_get(XRHand* self , XRHandJoint * key);
