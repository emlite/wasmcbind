#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Sensor.h"
#include "enums.h"


typedef struct {
  Sensor inner;
} OrientationSensor;


DECLARE_EMLITE_TYPE(OrientationSensor, Sensor);

jb_FrozenArray OrientationSensor_quaternion( const OrientationSensor *self);

jb_Undefined OrientationSensor_populateMatrix(OrientationSensor* self , const jb_Any* targetMatrix);
