#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Accelerometer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AccelerometerSensorOptions AccelerometerSensorOptions;


/**
 * @brief Interface GravitySensor
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GravitySensor)
 */
DECLARE_EMLITE_TYPE(GravitySensor, Accelerometer);

/**
 * @brief Creates a new `GravitySensor` object. 
*/
GravitySensor GravitySensor_new0();

/**
 * @brief Creates a new `GravitySensor` object. 
*/
GravitySensor GravitySensor_new1(AccelerometerSensorOptions * options);

#ifdef __cplusplus
}
#endif
