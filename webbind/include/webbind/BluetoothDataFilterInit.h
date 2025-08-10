#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BluetoothDataFilterInit, em_Val);

jb_Any BluetoothDataFilterInit_dataPrefix(const BluetoothDataFilterInit *self);

void BluetoothDataFilterInit_set_dataPrefix(BluetoothDataFilterInit* self, jb_Any * value);

jb_Any BluetoothDataFilterInit_mask(const BluetoothDataFilterInit *self);

void BluetoothDataFilterInit_set_mask(BluetoothDataFilterInit* self, jb_Any * value);

BluetoothDataFilterInit BluetoothDataFilterInit_new();

#ifdef __cplusplus
}
#endif
