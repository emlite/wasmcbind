#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DeviceMotionEventAccelerationInit, em_Val);

double DeviceMotionEventAccelerationInit_x(const DeviceMotionEventAccelerationInit *self);

void DeviceMotionEventAccelerationInit_set_x(DeviceMotionEventAccelerationInit* self, double value);

double DeviceMotionEventAccelerationInit_y(const DeviceMotionEventAccelerationInit *self);

void DeviceMotionEventAccelerationInit_set_y(DeviceMotionEventAccelerationInit* self, double value);

double DeviceMotionEventAccelerationInit_z(const DeviceMotionEventAccelerationInit *self);

void DeviceMotionEventAccelerationInit_set_z(DeviceMotionEventAccelerationInit* self, double value);

DeviceMotionEventAccelerationInit DeviceMotionEventAccelerationInit_new();

#ifdef __cplusplus
}
#endif
