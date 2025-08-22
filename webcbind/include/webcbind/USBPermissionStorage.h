#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AllowedUSBDevice.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type USBPermissionStorage */
DECLARE_EMLITE_TYPE(USBPermissionStorage, em_Val);

/** @brief Getter of the allowedDevices property */
jb_Array USBPermissionStorage_allowedDevices(const USBPermissionStorage *self);

/** @brief Setter of the allowedDevices property */
void USBPermissionStorage_set_allowedDevices(USBPermissionStorage* self, jb_Array * value);

/** @brief Constructor of the USBPermissionStorage dictionary type */
USBPermissionStorage USBPermissionStorage_new();

#ifdef __cplusplus
}
#endif
