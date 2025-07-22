#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Sensor.h"
#include "enums.h"


typedef struct {
  Sensor inner;
} ProximitySensor;


DECLARE_EMLITE_TYPE(ProximitySensor, Sensor);

ProximitySensor ProximitySensor_new();

ProximitySensor ProximitySensor_new(const jb_Any* sensorOptions);

double ProximitySensor_distance( const ProximitySensor *self);

double ProximitySensor_max( const ProximitySensor *self);

bool ProximitySensor_near( const ProximitySensor *self);
