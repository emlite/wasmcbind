#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "OrientationSensor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OrientationSensorOptions OrientationSensorOptions;

DECLARE_EMLITE_TYPE(AbsoluteOrientationSensor, OrientationSensor);

AbsoluteOrientationSensor AbsoluteOrientationSensor_new0();

AbsoluteOrientationSensor AbsoluteOrientationSensor_new1(OrientationSensorOptions * sensorOptions);

#ifdef __cplusplus
}
#endif
