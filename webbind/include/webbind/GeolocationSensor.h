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


/**
 * @brief Interface GeolocationSensor
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationSensor)
 */
DECLARE_EMLITE_TYPE(GeolocationSensor, Sensor);

/**
 * @brief Creates a new `GeolocationSensor` object. 
*/
GeolocationSensor GeolocationSensor_new0();

/**
 * @brief Creates a new `GeolocationSensor` object. 
*/
GeolocationSensor GeolocationSensor_new1(GeolocationSensorOptions * options);

/**
 * @brief Calls the `read` method. 
*/
jb_Promise GeolocationSensor_read0(GeolocationSensor* self );

/**
 * @brief Calls the `read` method. 
*/
jb_Promise GeolocationSensor_read1(GeolocationSensor* self , ReadOptions * readOptions);

/**
 * @brief Gets the `latitude` property. 
*/
double GeolocationSensor_latitude(const GeolocationSensor *self);

/**
 * @brief Gets the `longitude` property. 
*/
double GeolocationSensor_longitude(const GeolocationSensor *self);

/**
 * @brief Gets the `altitude` property. 
*/
double GeolocationSensor_altitude(const GeolocationSensor *self);

/**
 * @brief Gets the `accuracy` property. 
*/
double GeolocationSensor_accuracy(const GeolocationSensor *self);

/**
 * @brief Gets the `altitudeAccuracy` property. 
*/
double GeolocationSensor_altitudeAccuracy(const GeolocationSensor *self);

/**
 * @brief Gets the `heading` property. 
*/
double GeolocationSensor_heading(const GeolocationSensor *self);

/**
 * @brief Gets the `speed` property. 
*/
double GeolocationSensor_speed(const GeolocationSensor *self);

#ifdef __cplusplus
}
#endif
