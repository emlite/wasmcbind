#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface DeviceMotionEventAcceleration
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEventAcceleration)
 */
DECLARE_EMLITE_TYPE(DeviceMotionEventAcceleration, em_Val);

/**
 * @brief Gets the `x` property. 
*/
double DeviceMotionEventAcceleration_x(const DeviceMotionEventAcceleration *self);

/**
 * @brief Gets the `y` property. 
*/
double DeviceMotionEventAcceleration_y(const DeviceMotionEventAcceleration *self);

/**
 * @brief Gets the `z` property. 
*/
double DeviceMotionEventAcceleration_z(const DeviceMotionEventAcceleration *self);

#ifdef __cplusplus
}
#endif
