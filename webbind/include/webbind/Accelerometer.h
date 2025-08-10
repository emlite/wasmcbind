#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Sensor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AccelerometerSensorOptions AccelerometerSensorOptions;

DECLARE_EMLITE_TYPE(Accelerometer, Sensor);

Accelerometer Accelerometer_new0();

Accelerometer Accelerometer_new1(AccelerometerSensorOptions * options);

double Accelerometer_x(const Accelerometer *self);

double Accelerometer_y(const Accelerometer *self);

double Accelerometer_z(const Accelerometer *self);

#ifdef __cplusplus
}
#endif
