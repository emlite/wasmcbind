#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Accelerometer.h"
#include "enums.h"


typedef struct {
  Accelerometer inner;
} LinearAccelerationSensor;


DECLARE_EMLITE_TYPE(LinearAccelerationSensor, Accelerometer);

LinearAccelerationSensor LinearAccelerationSensor_new();

LinearAccelerationSensor LinearAccelerationSensor_new(const jb_Any* options);
