#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Accelerometer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AccelerometerSensorOptions AccelerometerSensorOptions;

DECLARE_EMLITE_TYPE(LinearAccelerationSensor, Accelerometer);

LinearAccelerationSensor LinearAccelerationSensor_new0();

LinearAccelerationSensor LinearAccelerationSensor_new1(AccelerometerSensorOptions * options);

#ifdef __cplusplus
}
#endif
