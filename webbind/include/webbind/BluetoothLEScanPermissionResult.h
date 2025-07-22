#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "PermissionStatus.h"
#include "enums.h"

typedef struct BluetoothLEScan BluetoothLEScan;


typedef struct {
  PermissionStatus inner;
} BluetoothLEScanPermissionResult;


DECLARE_EMLITE_TYPE(BluetoothLEScanPermissionResult, PermissionStatus);

jb_FrozenArray BluetoothLEScanPermissionResult_scans( const BluetoothLEScanPermissionResult *self);

void BluetoothLEScanPermissionResult_set_scans(BluetoothLEScanPermissionResult* self, const jb_FrozenArray* value);
