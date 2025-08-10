#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Sensor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MagnetometerSensorOptions MagnetometerSensorOptions;

DECLARE_EMLITE_TYPE(Magnetometer, Sensor);

Magnetometer Magnetometer_new0();

Magnetometer Magnetometer_new1(MagnetometerSensorOptions * sensorOptions);

double Magnetometer_x(const Magnetometer *self);

double Magnetometer_y(const Magnetometer *self);

double Magnetometer_z(const Magnetometer *self);

#ifdef __cplusplus
}
#endif
