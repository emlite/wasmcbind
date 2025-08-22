#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"
#include "BluetoothLEScanFilterInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BluetoothLEScanPermissionDescriptor */
DECLARE_EMLITE_TYPE(BluetoothLEScanPermissionDescriptor, PermissionDescriptor);

/** @brief Getter of the filters property */
jb_Array BluetoothLEScanPermissionDescriptor_filters(const BluetoothLEScanPermissionDescriptor *self);

/** @brief Setter of the filters property */
void BluetoothLEScanPermissionDescriptor_set_filters(BluetoothLEScanPermissionDescriptor* self, jb_Array * value);

/** @brief Getter of the keepRepeatedDevices property */
bool BluetoothLEScanPermissionDescriptor_keepRepeatedDevices(const BluetoothLEScanPermissionDescriptor *self);

/** @brief Setter of the keepRepeatedDevices property */
void BluetoothLEScanPermissionDescriptor_set_keepRepeatedDevices(BluetoothLEScanPermissionDescriptor* self, bool value);

/** @brief Getter of the acceptAllAdvertisements property */
bool BluetoothLEScanPermissionDescriptor_acceptAllAdvertisements(const BluetoothLEScanPermissionDescriptor *self);

/** @brief Setter of the acceptAllAdvertisements property */
void BluetoothLEScanPermissionDescriptor_set_acceptAllAdvertisements(BluetoothLEScanPermissionDescriptor* self, bool value);

/** @brief Constructor of the BluetoothLEScanPermissionDescriptor dictionary type */
BluetoothLEScanPermissionDescriptor BluetoothLEScanPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
