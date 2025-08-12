#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SensorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MagnetometerSensorOptions */
DECLARE_EMLITE_TYPE(MagnetometerSensorOptions, SensorOptions);

/** @brief Getter of the referenceFrame property */
MagnetometerLocalCoordinateSystem MagnetometerSensorOptions_referenceFrame(const MagnetometerSensorOptions *self);

/** @brief Setter of the referenceFrame property */
void MagnetometerSensorOptions_set_referenceFrame(MagnetometerSensorOptions* self, MagnetometerLocalCoordinateSystem * value);

/** @brief Constructor of the MagnetometerSensorOptions dictionary type */
MagnetometerSensorOptions MagnetometerSensorOptions_new();

#ifdef __cplusplus
}
#endif
