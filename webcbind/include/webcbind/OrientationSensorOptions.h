#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SensorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type OrientationSensorOptions */
DECLARE_EMLITE_TYPE(OrientationSensorOptions, SensorOptions);

/** @brief Getter of the referenceFrame property */
OrientationSensorLocalCoordinateSystem OrientationSensorOptions_referenceFrame(const OrientationSensorOptions *self);

/** @brief Setter of the referenceFrame property */
void OrientationSensorOptions_set_referenceFrame(OrientationSensorOptions* self, OrientationSensorLocalCoordinateSystem * value);

/** @brief Constructor of the OrientationSensorOptions dictionary type */
OrientationSensorOptions OrientationSensorOptions_new();

#ifdef __cplusplus
}
#endif
