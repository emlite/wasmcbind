#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PermissionStatus.h"
#include "enums.h"

typedef struct BluetoothDevice BluetoothDevice;


DECLARE_EMLITE_TYPE(BluetoothPermissionResult, PermissionStatus);

jb_FrozenArray BluetoothPermissionResult_devices( const BluetoothPermissionResult *self);

void BluetoothPermissionResult_set_devices(BluetoothPermissionResult* self, jb_FrozenArray * value);
