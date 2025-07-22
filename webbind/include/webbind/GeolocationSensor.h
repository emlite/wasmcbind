#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Sensor.h"
#include "enums.h"

typedef struct GeolocationSensorReading GeolocationSensorReading;
typedef struct ReadOptions ReadOptions;
typedef struct AbortSignal AbortSignal;


typedef struct {
  em_Val inner;
} GeolocationSensorReading;


DECLARE_EMLITE_TYPE(GeolocationSensorReading, em_Val);

jb_Any GeolocationSensorReading_timestamp( const GeolocationSensorReading *self);

void GeolocationSensorReading_set_timestamp(GeolocationSensorReading* self, const jb_Any* value);

double GeolocationSensorReading_latitude( const GeolocationSensorReading *self);

void GeolocationSensorReading_set_latitude(GeolocationSensorReading* self, double value);

double GeolocationSensorReading_longitude( const GeolocationSensorReading *self);

void GeolocationSensorReading_set_longitude(GeolocationSensorReading* self, double value);

double GeolocationSensorReading_altitude( const GeolocationSensorReading *self);

void GeolocationSensorReading_set_altitude(GeolocationSensorReading* self, double value);

double GeolocationSensorReading_accuracy( const GeolocationSensorReading *self);

void GeolocationSensorReading_set_accuracy(GeolocationSensorReading* self, double value);

double GeolocationSensorReading_altitudeAccuracy( const GeolocationSensorReading *self);

void GeolocationSensorReading_set_altitudeAccuracy(GeolocationSensorReading* self, double value);

double GeolocationSensorReading_heading( const GeolocationSensorReading *self);

void GeolocationSensorReading_set_heading(GeolocationSensorReading* self, double value);

double GeolocationSensorReading_speed( const GeolocationSensorReading *self);

void GeolocationSensorReading_set_speed(GeolocationSensorReading* self, double value);
typedef struct {
  em_Val inner;
} ReadOptions;


DECLARE_EMLITE_TYPE(ReadOptions, em_Val);

AbortSignal ReadOptions_signal( const ReadOptions *self);

void ReadOptions_set_signal(ReadOptions* self, const AbortSignal* value);
typedef struct {
  Sensor inner;
} GeolocationSensor;


DECLARE_EMLITE_TYPE(GeolocationSensor, Sensor);

GeolocationSensor GeolocationSensor_new();

GeolocationSensor GeolocationSensor_new(const jb_Any* options);

jb_Promise GeolocationSensor_read(GeolocationSensor* self );

jb_Promise GeolocationSensor_read(GeolocationSensor* self , const ReadOptions* readOptions);

double GeolocationSensor_latitude( const GeolocationSensor *self);

double GeolocationSensor_longitude( const GeolocationSensor *self);

double GeolocationSensor_altitude( const GeolocationSensor *self);

double GeolocationSensor_accuracy( const GeolocationSensor *self);

double GeolocationSensor_altitudeAccuracy( const GeolocationSensor *self);

double GeolocationSensor_heading( const GeolocationSensor *self);

double GeolocationSensor_speed( const GeolocationSensor *self);
