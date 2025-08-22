#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DeviceMotionEventAccelerationInit */
DECLARE_EMLITE_TYPE(DeviceMotionEventAccelerationInit, em_Val);

/** @brief Getter of the x property */
double DeviceMotionEventAccelerationInit_x(const DeviceMotionEventAccelerationInit *self);

/** @brief Setter of the x property */
void DeviceMotionEventAccelerationInit_set_x(DeviceMotionEventAccelerationInit* self, double value);

/** @brief Getter of the y property */
double DeviceMotionEventAccelerationInit_y(const DeviceMotionEventAccelerationInit *self);

/** @brief Setter of the y property */
void DeviceMotionEventAccelerationInit_set_y(DeviceMotionEventAccelerationInit* self, double value);

/** @brief Getter of the z property */
double DeviceMotionEventAccelerationInit_z(const DeviceMotionEventAccelerationInit *self);

/** @brief Setter of the z property */
void DeviceMotionEventAccelerationInit_set_z(DeviceMotionEventAccelerationInit* self, double value);

/** @brief Constructor of the DeviceMotionEventAccelerationInit dictionary type */
DeviceMotionEventAccelerationInit DeviceMotionEventAccelerationInit_new();

#ifdef __cplusplus
}
#endif
