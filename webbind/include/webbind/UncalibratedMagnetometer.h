#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Sensor.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MagnetometerSensorOptions MagnetometerSensorOptions;


/**
 * @brief Interface UncalibratedMagnetometer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/UncalibratedMagnetometer)
 */
DECLARE_EMLITE_TYPE(UncalibratedMagnetometer, Sensor);

/**
 * @brief Creates a new `UncalibratedMagnetometer` object. 
*/
UncalibratedMagnetometer UncalibratedMagnetometer_new0();

/**
 * @brief Creates a new `UncalibratedMagnetometer` object. 
*/
UncalibratedMagnetometer UncalibratedMagnetometer_new1(MagnetometerSensorOptions * sensorOptions);

/**
 * @brief Gets the `x` property. 
*/
double UncalibratedMagnetometer_x(const UncalibratedMagnetometer *self);

/**
 * @brief Gets the `y` property. 
*/
double UncalibratedMagnetometer_y(const UncalibratedMagnetometer *self);

/**
 * @brief Gets the `z` property. 
*/
double UncalibratedMagnetometer_z(const UncalibratedMagnetometer *self);

/**
 * @brief Gets the `xBias` property. 
*/
double UncalibratedMagnetometer_xBias(const UncalibratedMagnetometer *self);

/**
 * @brief Gets the `yBias` property. 
*/
double UncalibratedMagnetometer_yBias(const UncalibratedMagnetometer *self);

/**
 * @brief Gets the `zBias` property. 
*/
double UncalibratedMagnetometer_zBias(const UncalibratedMagnetometer *self);

#ifdef __cplusplus
}
#endif
