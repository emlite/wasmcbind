#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DeviceOrientationEventInit, EventInit);

double DeviceOrientationEventInit_alpha(const DeviceOrientationEventInit *self);

void DeviceOrientationEventInit_set_alpha(DeviceOrientationEventInit* self, double value);

double DeviceOrientationEventInit_beta(const DeviceOrientationEventInit *self);

void DeviceOrientationEventInit_set_beta(DeviceOrientationEventInit* self, double value);

double DeviceOrientationEventInit_gamma(const DeviceOrientationEventInit *self);

void DeviceOrientationEventInit_set_gamma(DeviceOrientationEventInit* self, double value);

bool DeviceOrientationEventInit_absolute(const DeviceOrientationEventInit *self);

void DeviceOrientationEventInit_set_absolute(DeviceOrientationEventInit* self, bool value);

DeviceOrientationEventInit DeviceOrientationEventInit_new();

#ifdef __cplusplus
}
#endif
