#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Sensor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GyroscopeSensorOptions GyroscopeSensorOptions;


/**
 * @brief Interface Gyroscope
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Gyroscope)
 */
DECLARE_EMLITE_TYPE(Gyroscope, Sensor);

/**
 * @brief Creates a new `Gyroscope` object. 
*/
Gyroscope Gyroscope_new0();

/**
 * @brief Creates a new `Gyroscope` object. 
*/
Gyroscope Gyroscope_new1(GyroscopeSensorOptions * sensorOptions);

/**
 * @brief Gets the `x` property. 
*/
double Gyroscope_x(const Gyroscope *self);

/**
 * @brief Gets the `y` property. 
*/
double Gyroscope_y(const Gyroscope *self);

/**
 * @brief Gets the `z` property. 
*/
double Gyroscope_z(const Gyroscope *self);

#ifdef __cplusplus
}
#endif
