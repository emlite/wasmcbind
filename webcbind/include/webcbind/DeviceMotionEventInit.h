#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"
#include "DeviceMotionEventAccelerationInit.h"
#include "DeviceMotionEventRotationRateInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DeviceMotionEventInit */
DECLARE_EMLITE_TYPE(DeviceMotionEventInit, EventInit);

/** @brief Getter of the acceleration property */
DeviceMotionEventAccelerationInit DeviceMotionEventInit_acceleration(const DeviceMotionEventInit *self);

/** @brief Setter of the acceleration property */
void DeviceMotionEventInit_set_acceleration(DeviceMotionEventInit* self, DeviceMotionEventAccelerationInit * value);

/** @brief Getter of the accelerationIncludingGravity property */
DeviceMotionEventAccelerationInit DeviceMotionEventInit_accelerationIncludingGravity(const DeviceMotionEventInit *self);

/** @brief Setter of the accelerationIncludingGravity property */
void DeviceMotionEventInit_set_accelerationIncludingGravity(DeviceMotionEventInit* self, DeviceMotionEventAccelerationInit * value);

/** @brief Getter of the rotationRate property */
DeviceMotionEventRotationRateInit DeviceMotionEventInit_rotationRate(const DeviceMotionEventInit *self);

/** @brief Setter of the rotationRate property */
void DeviceMotionEventInit_set_rotationRate(DeviceMotionEventInit* self, DeviceMotionEventRotationRateInit * value);

/** @brief Getter of the interval property */
double DeviceMotionEventInit_interval(const DeviceMotionEventInit *self);

/** @brief Setter of the interval property */
void DeviceMotionEventInit_set_interval(DeviceMotionEventInit* self, double value);

/** @brief Constructor of the DeviceMotionEventInit dictionary type */
DeviceMotionEventInit DeviceMotionEventInit_new();

#ifdef __cplusplus
}
#endif
