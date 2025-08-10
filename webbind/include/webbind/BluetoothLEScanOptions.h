#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "BluetoothLEScanFilterInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BluetoothLEScanOptions, em_Val);

jb_Array BluetoothLEScanOptions_filters(const BluetoothLEScanOptions *self);

void BluetoothLEScanOptions_set_filters(BluetoothLEScanOptions* self, jb_Array * value);

bool BluetoothLEScanOptions_keepRepeatedDevices(const BluetoothLEScanOptions *self);

void BluetoothLEScanOptions_set_keepRepeatedDevices(BluetoothLEScanOptions* self, bool value);

bool BluetoothLEScanOptions_acceptAllAdvertisements(const BluetoothLEScanOptions *self);

void BluetoothLEScanOptions_set_acceptAllAdvertisements(BluetoothLEScanOptions* self, bool value);

BluetoothLEScanOptions BluetoothLEScanOptions_new();

#ifdef __cplusplus
}
#endif
