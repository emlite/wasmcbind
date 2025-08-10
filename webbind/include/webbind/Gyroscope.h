#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Sensor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GyroscopeSensorOptions GyroscopeSensorOptions;

DECLARE_EMLITE_TYPE(Gyroscope, Sensor);

Gyroscope Gyroscope_new0();

Gyroscope Gyroscope_new1(GyroscopeSensorOptions * sensorOptions);

double Gyroscope_x(const Gyroscope *self);

double Gyroscope_y(const Gyroscope *self);

double Gyroscope_z(const Gyroscope *self);

#ifdef __cplusplus
}
#endif
