#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DeviceMotionEventRotationRateInit, em_Val);

double DeviceMotionEventRotationRateInit_alpha(const DeviceMotionEventRotationRateInit *self);

void DeviceMotionEventRotationRateInit_set_alpha(DeviceMotionEventRotationRateInit* self, double value);

double DeviceMotionEventRotationRateInit_beta(const DeviceMotionEventRotationRateInit *self);

void DeviceMotionEventRotationRateInit_set_beta(DeviceMotionEventRotationRateInit* self, double value);

double DeviceMotionEventRotationRateInit_gamma(const DeviceMotionEventRotationRateInit *self);

void DeviceMotionEventRotationRateInit_set_gamma(DeviceMotionEventRotationRateInit* self, double value);

DeviceMotionEventRotationRateInit DeviceMotionEventRotationRateInit_new();

#ifdef __cplusplus
}
#endif
