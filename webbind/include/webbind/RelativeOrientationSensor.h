#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "OrientationSensor.h"
#include "enums.h"


typedef struct {
  OrientationSensor inner;
} RelativeOrientationSensor;


DECLARE_EMLITE_TYPE(RelativeOrientationSensor, OrientationSensor);

RelativeOrientationSensor RelativeOrientationSensor_new();

RelativeOrientationSensor RelativeOrientationSensor_new(const jb_Any* sensorOptions);
