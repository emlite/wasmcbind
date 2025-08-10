#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"
#include "BluetoothLEScanFilterInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BluetoothPermissionDescriptor, PermissionDescriptor);

jb_String BluetoothPermissionDescriptor_deviceId(const BluetoothPermissionDescriptor *self);

void BluetoothPermissionDescriptor_set_deviceId(BluetoothPermissionDescriptor* self, jb_String * value);

jb_Array BluetoothPermissionDescriptor_filters(const BluetoothPermissionDescriptor *self);

void BluetoothPermissionDescriptor_set_filters(BluetoothPermissionDescriptor* self, jb_Array * value);

jb_Array BluetoothPermissionDescriptor_optionalServices(const BluetoothPermissionDescriptor *self);

void BluetoothPermissionDescriptor_set_optionalServices(BluetoothPermissionDescriptor* self, jb_Array * value);

jb_Array BluetoothPermissionDescriptor_optionalManufacturerData(const BluetoothPermissionDescriptor *self);

void BluetoothPermissionDescriptor_set_optionalManufacturerData(BluetoothPermissionDescriptor* self, jb_Array * value);

bool BluetoothPermissionDescriptor_acceptAllDevices(const BluetoothPermissionDescriptor *self);

void BluetoothPermissionDescriptor_set_acceptAllDevices(BluetoothPermissionDescriptor* self, bool value);

BluetoothPermissionDescriptor BluetoothPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
