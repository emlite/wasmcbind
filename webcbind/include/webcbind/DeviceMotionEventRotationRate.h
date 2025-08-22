#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface DeviceMotionEventRotationRate
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DeviceMotionEventRotationRate)
 */
DECLARE_EMLITE_TYPE(DeviceMotionEventRotationRate, em_Val);

/**
 * @brief Gets the `alpha` property. 
*/
double DeviceMotionEventRotationRate_alpha(const DeviceMotionEventRotationRate *self);

/**
 * @brief Gets the `beta` property. 
*/
double DeviceMotionEventRotationRate_beta(const DeviceMotionEventRotationRate *self);

/**
 * @brief Gets the `gamma` property. 
*/
double DeviceMotionEventRotationRate_gamma(const DeviceMotionEventRotationRate *self);

#ifdef __cplusplus
}
#endif
