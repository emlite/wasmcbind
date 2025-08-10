#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Accelerometer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AccelerometerSensorOptions AccelerometerSensorOptions;

DECLARE_EMLITE_TYPE(GravitySensor, Accelerometer);

GravitySensor GravitySensor_new0();

GravitySensor GravitySensor_new1(AccelerometerSensorOptions * options);

#ifdef __cplusplus
}
#endif
