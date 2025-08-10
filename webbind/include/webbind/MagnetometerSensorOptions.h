#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SensorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(MagnetometerSensorOptions, SensorOptions);

MagnetometerLocalCoordinateSystem MagnetometerSensorOptions_referenceFrame(const MagnetometerSensorOptions *self);

void MagnetometerSensorOptions_set_referenceFrame(MagnetometerSensorOptions* self, MagnetometerLocalCoordinateSystem * value);

MagnetometerSensorOptions MagnetometerSensorOptions_new();

#ifdef __cplusplus
}
#endif
