#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GeolocationSensorReading */
DECLARE_EMLITE_TYPE(GeolocationSensorReading, em_Val);

/** @brief Getter of the timestamp property */
jb_Any GeolocationSensorReading_timestamp(const GeolocationSensorReading *self);

/** @brief Setter of the timestamp property */
void GeolocationSensorReading_set_timestamp(GeolocationSensorReading* self, jb_Any * value);

/** @brief Getter of the latitude property */
double GeolocationSensorReading_latitude(const GeolocationSensorReading *self);

/** @brief Setter of the latitude property */
void GeolocationSensorReading_set_latitude(GeolocationSensorReading* self, double value);

/** @brief Getter of the longitude property */
double GeolocationSensorReading_longitude(const GeolocationSensorReading *self);

/** @brief Setter of the longitude property */
void GeolocationSensorReading_set_longitude(GeolocationSensorReading* self, double value);

/** @brief Getter of the altitude property */
double GeolocationSensorReading_altitude(const GeolocationSensorReading *self);

/** @brief Setter of the altitude property */
void GeolocationSensorReading_set_altitude(GeolocationSensorReading* self, double value);

/** @brief Getter of the accuracy property */
double GeolocationSensorReading_accuracy(const GeolocationSensorReading *self);

/** @brief Setter of the accuracy property */
void GeolocationSensorReading_set_accuracy(GeolocationSensorReading* self, double value);

/** @brief Getter of the altitudeAccuracy property */
double GeolocationSensorReading_altitudeAccuracy(const GeolocationSensorReading *self);

/** @brief Setter of the altitudeAccuracy property */
void GeolocationSensorReading_set_altitudeAccuracy(GeolocationSensorReading* self, double value);

/** @brief Getter of the heading property */
double GeolocationSensorReading_heading(const GeolocationSensorReading *self);

/** @brief Setter of the heading property */
void GeolocationSensorReading_set_heading(GeolocationSensorReading* self, double value);

/** @brief Getter of the speed property */
double GeolocationSensorReading_speed(const GeolocationSensorReading *self);

/** @brief Setter of the speed property */
void GeolocationSensorReading_set_speed(GeolocationSensorReading* self, double value);

/** @brief Constructor of the GeolocationSensorReading dictionary type */
GeolocationSensorReading GeolocationSensorReading_new();

#ifdef __cplusplus
}
#endif
