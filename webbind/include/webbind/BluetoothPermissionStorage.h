#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AllowedBluetoothDevice.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BluetoothPermissionStorage, em_Val);

jb_Array BluetoothPermissionStorage_allowedDevices(const BluetoothPermissionStorage *self);

void BluetoothPermissionStorage_set_allowedDevices(BluetoothPermissionStorage* self, jb_Array * value);

BluetoothPermissionStorage BluetoothPermissionStorage_new();

#ifdef __cplusplus
}
#endif
