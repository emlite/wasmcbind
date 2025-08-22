#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AllowedBluetoothDevice.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BluetoothPermissionStorage */
DECLARE_EMLITE_TYPE(BluetoothPermissionStorage, em_Val);

/** @brief Getter of the allowedDevices property */
jb_Array BluetoothPermissionStorage_allowedDevices(const BluetoothPermissionStorage *self);

/** @brief Setter of the allowedDevices property */
void BluetoothPermissionStorage_set_allowedDevices(BluetoothPermissionStorage* self, jb_Array * value);

/** @brief Constructor of the BluetoothPermissionStorage dictionary type */
BluetoothPermissionStorage BluetoothPermissionStorage_new();

#ifdef __cplusplus
}
#endif
