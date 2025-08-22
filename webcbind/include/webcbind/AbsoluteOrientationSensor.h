#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "OrientationSensor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OrientationSensorOptions OrientationSensorOptions;


/**
 * @brief Interface AbsoluteOrientationSensor
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AbsoluteOrientationSensor)
 */
DECLARE_EMLITE_TYPE(AbsoluteOrientationSensor, OrientationSensor);

/**
 * @brief Creates a new `AbsoluteOrientationSensor` object. 
*/
AbsoluteOrientationSensor AbsoluteOrientationSensor_new0();

/**
 * @brief Creates a new `AbsoluteOrientationSensor` object. 
*/
AbsoluteOrientationSensor AbsoluteOrientationSensor_new1(OrientationSensorOptions * sensorOptions);

#ifdef __cplusplus
}
#endif
