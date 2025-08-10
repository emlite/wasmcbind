#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"
#include "BluetoothLEScanFilterInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BluetoothLEScanPermissionDescriptor, PermissionDescriptor);

jb_Array BluetoothLEScanPermissionDescriptor_filters(const BluetoothLEScanPermissionDescriptor *self);

void BluetoothLEScanPermissionDescriptor_set_filters(BluetoothLEScanPermissionDescriptor* self, jb_Array * value);

bool BluetoothLEScanPermissionDescriptor_keepRepeatedDevices(const BluetoothLEScanPermissionDescriptor *self);

void BluetoothLEScanPermissionDescriptor_set_keepRepeatedDevices(BluetoothLEScanPermissionDescriptor* self, bool value);

bool BluetoothLEScanPermissionDescriptor_acceptAllAdvertisements(const BluetoothLEScanPermissionDescriptor *self);

void BluetoothLEScanPermissionDescriptor_set_acceptAllAdvertisements(BluetoothLEScanPermissionDescriptor* self, bool value);

BluetoothLEScanPermissionDescriptor BluetoothLEScanPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
