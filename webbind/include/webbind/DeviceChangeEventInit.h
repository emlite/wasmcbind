#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaDeviceInfo MediaDeviceInfo;

DECLARE_EMLITE_TYPE(DeviceChangeEventInit, EventInit);

jb_Array DeviceChangeEventInit_devices(const DeviceChangeEventInit *self);

void DeviceChangeEventInit_set_devices(DeviceChangeEventInit* self, jb_Array * value);

DeviceChangeEventInit DeviceChangeEventInit_new();

#ifdef __cplusplus
}
#endif
