#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DeviceOrientationEventInit */
DECLARE_EMLITE_TYPE(DeviceOrientationEventInit, EventInit);

/** @brief Getter of the alpha property */
double DeviceOrientationEventInit_alpha(const DeviceOrientationEventInit *self);

/** @brief Setter of the alpha property */
void DeviceOrientationEventInit_set_alpha(DeviceOrientationEventInit* self, double value);

/** @brief Getter of the beta property */
double DeviceOrientationEventInit_beta(const DeviceOrientationEventInit *self);

/** @brief Setter of the beta property */
void DeviceOrientationEventInit_set_beta(DeviceOrientationEventInit* self, double value);

/** @brief Getter of the gamma property */
double DeviceOrientationEventInit_gamma(const DeviceOrientationEventInit *self);

/** @brief Setter of the gamma property */
void DeviceOrientationEventInit_set_gamma(DeviceOrientationEventInit* self, double value);

/** @brief Getter of the absolute property */
bool DeviceOrientationEventInit_absolute(const DeviceOrientationEventInit *self);

/** @brief Setter of the absolute property */
void DeviceOrientationEventInit_set_absolute(DeviceOrientationEventInit* self, bool value);

/** @brief Constructor of the DeviceOrientationEventInit dictionary type */
DeviceOrientationEventInit DeviceOrientationEventInit_new();

#ifdef __cplusplus
}
#endif
