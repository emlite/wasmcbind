#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "BluetoothDataFilterInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BluetoothServiceDataFilterInit, BluetoothDataFilterInit);

jb_Any BluetoothServiceDataFilterInit_service(const BluetoothServiceDataFilterInit *self);

void BluetoothServiceDataFilterInit_set_service(BluetoothServiceDataFilterInit* self, jb_Any * value);

BluetoothServiceDataFilterInit BluetoothServiceDataFilterInit_new();

#ifdef __cplusplus
}
#endif
