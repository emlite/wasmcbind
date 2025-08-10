#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SensorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(OrientationSensorOptions, SensorOptions);

OrientationSensorLocalCoordinateSystem OrientationSensorOptions_referenceFrame(const OrientationSensorOptions *self);

void OrientationSensorOptions_set_referenceFrame(OrientationSensorOptions* self, OrientationSensorLocalCoordinateSystem * value);

OrientationSensorOptions OrientationSensorOptions_new();

#ifdef __cplusplus
}
#endif
