#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DeviceMotionEventRotationRateInit */
DECLARE_EMLITE_TYPE(DeviceMotionEventRotationRateInit, em_Val);

/** @brief Getter of the alpha property */
double DeviceMotionEventRotationRateInit_alpha(const DeviceMotionEventRotationRateInit *self);

/** @brief Setter of the alpha property */
void DeviceMotionEventRotationRateInit_set_alpha(DeviceMotionEventRotationRateInit* self, double value);

/** @brief Getter of the beta property */
double DeviceMotionEventRotationRateInit_beta(const DeviceMotionEventRotationRateInit *self);

/** @brief Setter of the beta property */
void DeviceMotionEventRotationRateInit_set_beta(DeviceMotionEventRotationRateInit* self, double value);

/** @brief Getter of the gamma property */
double DeviceMotionEventRotationRateInit_gamma(const DeviceMotionEventRotationRateInit *self);

/** @brief Setter of the gamma property */
void DeviceMotionEventRotationRateInit_set_gamma(DeviceMotionEventRotationRateInit* self, double value);

/** @brief Constructor of the DeviceMotionEventRotationRateInit dictionary type */
DeviceMotionEventRotationRateInit DeviceMotionEventRotationRateInit_new();

#ifdef __cplusplus
}
#endif
