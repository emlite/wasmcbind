#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SensorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AccelerometerSensorOptions */
DECLARE_EMLITE_TYPE(AccelerometerSensorOptions, SensorOptions);

/** @brief Getter of the referenceFrame property */
AccelerometerLocalCoordinateSystem AccelerometerSensorOptions_referenceFrame(const AccelerometerSensorOptions *self);

/** @brief Setter of the referenceFrame property */
void AccelerometerSensorOptions_set_referenceFrame(AccelerometerSensorOptions* self, AccelerometerLocalCoordinateSystem * value);

/** @brief Constructor of the AccelerometerSensorOptions dictionary type */
AccelerometerSensorOptions AccelerometerSensorOptions_new();

#ifdef __cplusplus
}
#endif
