#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Accelerometer.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(LinearAccelerationSensor, Accelerometer);

LinearAccelerationSensor LinearAccelerationSensor_new0();

LinearAccelerationSensor LinearAccelerationSensor_new1(jb_Any * options);
