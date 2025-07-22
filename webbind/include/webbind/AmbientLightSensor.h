#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Sensor.h"
#include "enums.h"


typedef struct {
  Sensor inner;
} AmbientLightSensor;


DECLARE_EMLITE_TYPE(AmbientLightSensor, Sensor);

AmbientLightSensor AmbientLightSensor_new();

AmbientLightSensor AmbientLightSensor_new(const jb_Any* sensorOptions);

double AmbientLightSensor_illuminance( const AmbientLightSensor *self);
