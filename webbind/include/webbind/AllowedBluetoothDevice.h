#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AllowedBluetoothDevice, em_Val);

jb_String AllowedBluetoothDevice_deviceId(const AllowedBluetoothDevice *self);

void AllowedBluetoothDevice_set_deviceId(AllowedBluetoothDevice* self, jb_String * value);

bool AllowedBluetoothDevice_mayUseGATT(const AllowedBluetoothDevice *self);

void AllowedBluetoothDevice_set_mayUseGATT(AllowedBluetoothDevice* self, bool value);

jb_Any AllowedBluetoothDevice_allowedServices(const AllowedBluetoothDevice *self);

void AllowedBluetoothDevice_set_allowedServices(AllowedBluetoothDevice* self, jb_Any * value);

jb_Array AllowedBluetoothDevice_allowedManufacturerData(const AllowedBluetoothDevice *self);

void AllowedBluetoothDevice_set_allowedManufacturerData(AllowedBluetoothDevice* self, jb_Array * value);

AllowedBluetoothDevice AllowedBluetoothDevice_new();

#ifdef __cplusplus
}
#endif
