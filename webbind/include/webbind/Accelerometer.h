#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Sensor.h"
#include "enums.h"


typedef struct {
  Sensor inner;
} Accelerometer;


DECLARE_EMLITE_TYPE(Accelerometer, Sensor);

Accelerometer Accelerometer_new();

Accelerometer Accelerometer_new(const jb_Any* options);

double Accelerometer_x( const Accelerometer *self);

double Accelerometer_y( const Accelerometer *self);

double Accelerometer_z( const Accelerometer *self);
