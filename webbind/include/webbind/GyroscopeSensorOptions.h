#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SensorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GyroscopeSensorOptions, SensorOptions);

GyroscopeLocalCoordinateSystem GyroscopeSensorOptions_referenceFrame(const GyroscopeSensorOptions *self);

void GyroscopeSensorOptions_set_referenceFrame(GyroscopeSensorOptions* self, GyroscopeLocalCoordinateSystem * value);

GyroscopeSensorOptions GyroscopeSensorOptions_new();

#ifdef __cplusplus
}
#endif
