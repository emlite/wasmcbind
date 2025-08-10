#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "SensorOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GeolocationSensorOptions, SensorOptions);

GeolocationSensorOptions GeolocationSensorOptions_new();

#ifdef __cplusplus
}
#endif
