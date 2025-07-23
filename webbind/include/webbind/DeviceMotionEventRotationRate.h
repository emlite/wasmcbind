#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(DeviceMotionEventRotationRate, em_Val);

double DeviceMotionEventRotationRate_alpha(const DeviceMotionEventRotationRate *self);

double DeviceMotionEventRotationRate_beta(const DeviceMotionEventRotationRate *self);

double DeviceMotionEventRotationRate_gamma(const DeviceMotionEventRotationRate *self);
