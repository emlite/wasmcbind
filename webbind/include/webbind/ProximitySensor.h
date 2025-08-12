#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Sensor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SensorOptions SensorOptions;


/**
 * @brief Interface ProximitySensor
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ProximitySensor)
 */
DECLARE_EMLITE_TYPE(ProximitySensor, Sensor);

/**
 * @brief Creates a new `ProximitySensor` object. 
*/
ProximitySensor ProximitySensor_new0();

/**
 * @brief Creates a new `ProximitySensor` object. 
*/
ProximitySensor ProximitySensor_new1(SensorOptions * sensorOptions);

/**
 * @brief Gets the `distance` property. 
*/
double ProximitySensor_distance(const ProximitySensor *self);

/**
 * @brief Gets the `max` property. 
*/
double ProximitySensor_max(const ProximitySensor *self);

/**
 * @brief Gets the `near` property. 
*/
bool ProximitySensor_near(const ProximitySensor *self);

#ifdef __cplusplus
}
#endif
