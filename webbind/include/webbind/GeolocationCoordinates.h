#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GeolocationCoordinates
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GeolocationCoordinates)
 */
DECLARE_EMLITE_TYPE(GeolocationCoordinates, em_Val);

/**
 * @brief Gets the `accuracy` property. 
*/
double GeolocationCoordinates_accuracy(const GeolocationCoordinates *self);

/**
 * @brief Gets the `latitude` property. 
*/
double GeolocationCoordinates_latitude(const GeolocationCoordinates *self);

/**
 * @brief Gets the `longitude` property. 
*/
double GeolocationCoordinates_longitude(const GeolocationCoordinates *self);

/**
 * @brief Gets the `altitude` property. 
*/
double GeolocationCoordinates_altitude(const GeolocationCoordinates *self);

/**
 * @brief Gets the `altitudeAccuracy` property. 
*/
double GeolocationCoordinates_altitudeAccuracy(const GeolocationCoordinates *self);

/**
 * @brief Gets the `heading` property. 
*/
double GeolocationCoordinates_heading(const GeolocationCoordinates *self);

/**
 * @brief Gets the `speed` property. 
*/
double GeolocationCoordinates_speed(const GeolocationCoordinates *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object GeolocationCoordinates_toJSON(GeolocationCoordinates* self );

#ifdef __cplusplus
}
#endif
