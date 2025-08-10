#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Sensor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SensorOptions SensorOptions;

DECLARE_EMLITE_TYPE(AmbientLightSensor, Sensor);

AmbientLightSensor AmbientLightSensor_new0();

AmbientLightSensor AmbientLightSensor_new1(SensorOptions * sensorOptions);

double AmbientLightSensor_illuminance(const AmbientLightSensor *self);

#ifdef __cplusplus
}
#endif
