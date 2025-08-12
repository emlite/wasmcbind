#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Accelerometer.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AccelerometerSensorOptions AccelerometerSensorOptions;


/**
 * @brief Interface LinearAccelerationSensor
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/LinearAccelerationSensor)
 */
DECLARE_EMLITE_TYPE(LinearAccelerationSensor, Accelerometer);

/**
 * @brief Creates a new `LinearAccelerationSensor` object. 
*/
LinearAccelerationSensor LinearAccelerationSensor_new0();

/**
 * @brief Creates a new `LinearAccelerationSensor` object. 
*/
LinearAccelerationSensor LinearAccelerationSensor_new1(AccelerometerSensorOptions * options);

#ifdef __cplusplus
}
#endif
