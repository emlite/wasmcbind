#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "OrientationSensor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OrientationSensorOptions OrientationSensorOptions;


/**
 * @brief Interface RelativeOrientationSensor
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RelativeOrientationSensor)
 */
DECLARE_EMLITE_TYPE(RelativeOrientationSensor, OrientationSensor);

/**
 * @brief Creates a new `RelativeOrientationSensor` object. 
*/
RelativeOrientationSensor RelativeOrientationSensor_new0();

/**
 * @brief Creates a new `RelativeOrientationSensor` object. 
*/
RelativeOrientationSensor RelativeOrientationSensor_new1(OrientationSensorOptions * sensorOptions);

#ifdef __cplusplus
}
#endif
