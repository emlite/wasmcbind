#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SensorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GyroscopeSensorOptions */
DECLARE_EMLITE_TYPE(GyroscopeSensorOptions, SensorOptions);

/** @brief Getter of the referenceFrame property */
GyroscopeLocalCoordinateSystem GyroscopeSensorOptions_referenceFrame(const GyroscopeSensorOptions *self);

/** @brief Setter of the referenceFrame property */
void GyroscopeSensorOptions_set_referenceFrame(GyroscopeSensorOptions* self, GyroscopeLocalCoordinateSystem * value);

/** @brief Constructor of the GyroscopeSensorOptions dictionary type */
GyroscopeSensorOptions GyroscopeSensorOptions_new();

#ifdef __cplusplus
}
#endif
