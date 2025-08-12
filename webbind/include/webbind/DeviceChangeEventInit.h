#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaDeviceInfo MediaDeviceInfo;

/** @brief Dictionary type DeviceChangeEventInit */
DECLARE_EMLITE_TYPE(DeviceChangeEventInit, EventInit);

/** @brief Getter of the devices property */
jb_Array DeviceChangeEventInit_devices(const DeviceChangeEventInit *self);

/** @brief Setter of the devices property */
void DeviceChangeEventInit_set_devices(DeviceChangeEventInit* self, jb_Array * value);

/** @brief Constructor of the DeviceChangeEventInit dictionary type */
DeviceChangeEventInit DeviceChangeEventInit_new();

#ifdef __cplusplus
}
#endif
