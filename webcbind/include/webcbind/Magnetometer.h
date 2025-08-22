#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Sensor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MagnetometerSensorOptions MagnetometerSensorOptions;


/**
 * @brief Interface Magnetometer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Magnetometer)
 */
DECLARE_EMLITE_TYPE(Magnetometer, Sensor);

/**
 * @brief Creates a new `Magnetometer` object. 
*/
Magnetometer Magnetometer_new0();

/**
 * @brief Creates a new `Magnetometer` object. 
*/
Magnetometer Magnetometer_new1(MagnetometerSensorOptions * sensorOptions);

/**
 * @brief Gets the `x` property. 
*/
double Magnetometer_x(const Magnetometer *self);

/**
 * @brief Gets the `y` property. 
*/
double Magnetometer_y(const Magnetometer *self);

/**
 * @brief Gets the `z` property. 
*/
double Magnetometer_z(const Magnetometer *self);

#ifdef __cplusplus
}
#endif
