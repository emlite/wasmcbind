#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Sensor.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface OrientationSensor
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/OrientationSensor)
 */
DECLARE_EMLITE_TYPE(OrientationSensor, Sensor);

/**
 * @brief Gets the `quaternion` property. 
*/
jb_Array OrientationSensor_quaternion(const OrientationSensor *self);

/**
 * @brief Calls the `populateMatrix` method. 
*/
jb_Undefined OrientationSensor_populateMatrix(OrientationSensor* self , jb_Any * targetMatrix);

#ifdef __cplusplus
}
#endif
