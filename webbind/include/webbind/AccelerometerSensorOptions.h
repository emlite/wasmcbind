#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SensorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AccelerometerSensorOptions, SensorOptions);

AccelerometerLocalCoordinateSystem AccelerometerSensorOptions_referenceFrame(const AccelerometerSensorOptions *self);

void AccelerometerSensorOptions_set_referenceFrame(AccelerometerSensorOptions* self, AccelerometerLocalCoordinateSystem * value);

AccelerometerSensorOptions AccelerometerSensorOptions_new();

#ifdef __cplusplus
}
#endif
