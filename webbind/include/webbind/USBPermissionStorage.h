#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AllowedUSBDevice.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(USBPermissionStorage, em_Val);

jb_Array USBPermissionStorage_allowedDevices(const USBPermissionStorage *self);

void USBPermissionStorage_set_allowedDevices(USBPermissionStorage* self, jb_Array * value);

USBPermissionStorage USBPermissionStorage_new();

#ifdef __cplusplus
}
#endif
