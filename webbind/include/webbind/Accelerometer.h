#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Sensor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AccelerometerSensorOptions AccelerometerSensorOptions;


/**
 * @brief Interface Accelerometer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Accelerometer)
 */
DECLARE_EMLITE_TYPE(Accelerometer, Sensor);

/**
 * @brief Creates a new `Accelerometer` object. 
*/
Accelerometer Accelerometer_new0();

/**
 * @brief Creates a new `Accelerometer` object. 
*/
Accelerometer Accelerometer_new1(AccelerometerSensorOptions * options);

/**
 * @brief Gets the `x` property. 
*/
double Accelerometer_x(const Accelerometer *self);

/**
 * @brief Gets the `y` property. 
*/
double Accelerometer_y(const Accelerometer *self);

/**
 * @brief Gets the `z` property. 
*/
double Accelerometer_z(const Accelerometer *self);

#ifdef __cplusplus
}
#endif
