#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Sensor.h"
#include "enums.h"


typedef struct {
  Sensor inner;
} Gyroscope;


DECLARE_EMLITE_TYPE(Gyroscope, Sensor);

Gyroscope Gyroscope_new();

Gyroscope Gyroscope_new(const jb_Any* sensorOptions);

double Gyroscope_x( const Gyroscope *self);

double Gyroscope_y( const Gyroscope *self);

double Gyroscope_z( const Gyroscope *self);
