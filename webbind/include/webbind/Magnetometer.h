#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Sensor.h"
#include "enums.h"


typedef struct {
  Sensor inner;
} Magnetometer;


DECLARE_EMLITE_TYPE(Magnetometer, Sensor);

Magnetometer Magnetometer_new();

Magnetometer Magnetometer_new(const jb_Any* sensorOptions);

double Magnetometer_x( const Magnetometer *self);

double Magnetometer_y( const Magnetometer *self);

double Magnetometer_z( const Magnetometer *self);
