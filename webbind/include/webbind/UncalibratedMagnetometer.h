#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Sensor.h"
#include "enums.h"


typedef struct {
  Sensor inner;
} UncalibratedMagnetometer;


DECLARE_EMLITE_TYPE(UncalibratedMagnetometer, Sensor);

UncalibratedMagnetometer UncalibratedMagnetometer_new();

UncalibratedMagnetometer UncalibratedMagnetometer_new(const jb_Any* sensorOptions);

double UncalibratedMagnetometer_x( const UncalibratedMagnetometer *self);

double UncalibratedMagnetometer_y( const UncalibratedMagnetometer *self);

double UncalibratedMagnetometer_z( const UncalibratedMagnetometer *self);

double UncalibratedMagnetometer_xBias( const UncalibratedMagnetometer *self);

double UncalibratedMagnetometer_yBias( const UncalibratedMagnetometer *self);

double UncalibratedMagnetometer_zBias( const UncalibratedMagnetometer *self);
