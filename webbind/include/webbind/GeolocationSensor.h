#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Sensor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GeolocationSensorOptions GeolocationSensorOptions;
typedef struct GeolocationSensorReading GeolocationSensorReading;
typedef struct ReadOptions ReadOptions;

DECLARE_EMLITE_TYPE(GeolocationSensor, Sensor);

GeolocationSensor GeolocationSensor_new0();

GeolocationSensor GeolocationSensor_new1(GeolocationSensorOptions * options);

jb_Promise GeolocationSensor_read0(GeolocationSensor* self );

jb_Promise GeolocationSensor_read1(GeolocationSensor* self , ReadOptions * readOptions);

double GeolocationSensor_latitude(const GeolocationSensor *self);

double GeolocationSensor_longitude(const GeolocationSensor *self);

double GeolocationSensor_altitude(const GeolocationSensor *self);

double GeolocationSensor_accuracy(const GeolocationSensor *self);

double GeolocationSensor_altitudeAccuracy(const GeolocationSensor *self);

double GeolocationSensor_heading(const GeolocationSensor *self);

double GeolocationSensor_speed(const GeolocationSensor *self);

#ifdef __cplusplus
}
#endif
