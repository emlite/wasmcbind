#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GeolocationSensorReading, em_Val);

jb_Any GeolocationSensorReading_timestamp(const GeolocationSensorReading *self);

void GeolocationSensorReading_set_timestamp(GeolocationSensorReading* self, jb_Any * value);

double GeolocationSensorReading_latitude(const GeolocationSensorReading *self);

void GeolocationSensorReading_set_latitude(GeolocationSensorReading* self, double value);

double GeolocationSensorReading_longitude(const GeolocationSensorReading *self);

void GeolocationSensorReading_set_longitude(GeolocationSensorReading* self, double value);

double GeolocationSensorReading_altitude(const GeolocationSensorReading *self);

void GeolocationSensorReading_set_altitude(GeolocationSensorReading* self, double value);

double GeolocationSensorReading_accuracy(const GeolocationSensorReading *self);

void GeolocationSensorReading_set_accuracy(GeolocationSensorReading* self, double value);

double GeolocationSensorReading_altitudeAccuracy(const GeolocationSensorReading *self);

void GeolocationSensorReading_set_altitudeAccuracy(GeolocationSensorReading* self, double value);

double GeolocationSensorReading_heading(const GeolocationSensorReading *self);

void GeolocationSensorReading_set_heading(GeolocationSensorReading* self, double value);

double GeolocationSensorReading_speed(const GeolocationSensorReading *self);

void GeolocationSensorReading_set_speed(GeolocationSensorReading* self, double value);

GeolocationSensorReading GeolocationSensorReading_new();

#ifdef __cplusplus
}
#endif
