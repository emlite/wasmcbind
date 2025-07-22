#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Accelerometer.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(GravitySensor, Accelerometer);

GravitySensor GravitySensor_new0();

GravitySensor GravitySensor_new1(jb_Any * options);
