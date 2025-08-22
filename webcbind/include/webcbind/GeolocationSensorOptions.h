#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "SensorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GeolocationSensorOptions */
DECLARE_EMLITE_TYPE(GeolocationSensorOptions, SensorOptions);

/** @brief Constructor of the GeolocationSensorOptions dictionary type */
GeolocationSensorOptions GeolocationSensorOptions_new();

#ifdef __cplusplus
}
#endif
