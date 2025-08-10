#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Sensor.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(OrientationSensor, Sensor);

jb_Array OrientationSensor_quaternion(const OrientationSensor *self);

jb_Undefined OrientationSensor_populateMatrix(OrientationSensor* self , jb_Any * targetMatrix);

#ifdef __cplusplus
}
#endif
