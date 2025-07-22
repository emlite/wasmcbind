#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "OrientationSensor.h"
#include "enums.h"


typedef struct {
  OrientationSensor inner;
} AbsoluteOrientationSensor;


DECLARE_EMLITE_TYPE(AbsoluteOrientationSensor, OrientationSensor);

AbsoluteOrientationSensor AbsoluteOrientationSensor_new();

AbsoluteOrientationSensor AbsoluteOrientationSensor_new(const jb_Any* sensorOptions);
