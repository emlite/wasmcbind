#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Sensor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SensorOptions SensorOptions;


/**
 * @brief Interface AmbientLightSensor
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AmbientLightSensor)
 */
DECLARE_EMLITE_TYPE(AmbientLightSensor, Sensor);

/**
 * @brief Creates a new `AmbientLightSensor` object. 
*/
AmbientLightSensor AmbientLightSensor_new0();

/**
 * @brief Creates a new `AmbientLightSensor` object. 
*/
AmbientLightSensor AmbientLightSensor_new1(SensorOptions * sensorOptions);

/**
 * @brief Gets the `illuminance` property. 
*/
double AmbientLightSensor_illuminance(const AmbientLightSensor *self);

#ifdef __cplusplus
}
#endif
