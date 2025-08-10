#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"
#include "DeviceMotionEventAccelerationInit.h"
#include "DeviceMotionEventRotationRateInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DeviceMotionEventInit, EventInit);

DeviceMotionEventAccelerationInit DeviceMotionEventInit_acceleration(const DeviceMotionEventInit *self);

void DeviceMotionEventInit_set_acceleration(DeviceMotionEventInit* self, DeviceMotionEventAccelerationInit * value);

DeviceMotionEventAccelerationInit DeviceMotionEventInit_accelerationIncludingGravity(const DeviceMotionEventInit *self);

void DeviceMotionEventInit_set_accelerationIncludingGravity(DeviceMotionEventInit* self, DeviceMotionEventAccelerationInit * value);

DeviceMotionEventRotationRateInit DeviceMotionEventInit_rotationRate(const DeviceMotionEventInit *self);

void DeviceMotionEventInit_set_rotationRate(DeviceMotionEventInit* self, DeviceMotionEventRotationRateInit * value);

double DeviceMotionEventInit_interval(const DeviceMotionEventInit *self);

void DeviceMotionEventInit_set_interval(DeviceMotionEventInit* self, double value);

DeviceMotionEventInit DeviceMotionEventInit_new();

#ifdef __cplusplus
}
#endif
