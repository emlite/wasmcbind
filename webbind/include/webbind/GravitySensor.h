#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Accelerometer.h"
#include "enums.h"


typedef struct {
  Accelerometer inner;
} GravitySensor;


DECLARE_EMLITE_TYPE(GravitySensor, Accelerometer);

GravitySensor GravitySensor_new();

GravitySensor GravitySensor_new(const jb_Any* options);
