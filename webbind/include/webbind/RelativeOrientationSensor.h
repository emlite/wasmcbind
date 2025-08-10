#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "OrientationSensor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OrientationSensorOptions OrientationSensorOptions;

DECLARE_EMLITE_TYPE(RelativeOrientationSensor, OrientationSensor);

RelativeOrientationSensor RelativeOrientationSensor_new0();

RelativeOrientationSensor RelativeOrientationSensor_new1(OrientationSensorOptions * sensorOptions);

#ifdef __cplusplus
}
#endif
