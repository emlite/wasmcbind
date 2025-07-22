#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Sensor.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(AmbientLightSensor, Sensor);

AmbientLightSensor AmbientLightSensor_new0();

AmbientLightSensor AmbientLightSensor_new1(jb_Any * sensorOptions);

double AmbientLightSensor_illuminance( const AmbientLightSensor *self);
