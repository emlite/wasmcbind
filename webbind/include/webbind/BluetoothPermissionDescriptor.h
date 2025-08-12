#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "PermissionDescriptor.h"
#include "BluetoothLEScanFilterInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BluetoothPermissionDescriptor */
DECLARE_EMLITE_TYPE(BluetoothPermissionDescriptor, PermissionDescriptor);

/** @brief Getter of the deviceId property */
jb_String BluetoothPermissionDescriptor_deviceId(const BluetoothPermissionDescriptor *self);

/** @brief Setter of the deviceId property */
void BluetoothPermissionDescriptor_set_deviceId(BluetoothPermissionDescriptor* self, jb_String * value);

/** @brief Getter of the filters property */
jb_Array BluetoothPermissionDescriptor_filters(const BluetoothPermissionDescriptor *self);

/** @brief Setter of the filters property */
void BluetoothPermissionDescriptor_set_filters(BluetoothPermissionDescriptor* self, jb_Array * value);

/** @brief Getter of the optionalServices property */
jb_Array BluetoothPermissionDescriptor_optionalServices(const BluetoothPermissionDescriptor *self);

/** @brief Setter of the optionalServices property */
void BluetoothPermissionDescriptor_set_optionalServices(BluetoothPermissionDescriptor* self, jb_Array * value);

/** @brief Getter of the optionalManufacturerData property */
jb_Array BluetoothPermissionDescriptor_optionalManufacturerData(const BluetoothPermissionDescriptor *self);

/** @brief Setter of the optionalManufacturerData property */
void BluetoothPermissionDescriptor_set_optionalManufacturerData(BluetoothPermissionDescriptor* self, jb_Array * value);

/** @brief Getter of the acceptAllDevices property */
bool BluetoothPermissionDescriptor_acceptAllDevices(const BluetoothPermissionDescriptor *self);

/** @brief Setter of the acceptAllDevices property */
void BluetoothPermissionDescriptor_set_acceptAllDevices(BluetoothPermissionDescriptor* self, bool value);

/** @brief Constructor of the BluetoothPermissionDescriptor dictionary type */
BluetoothPermissionDescriptor BluetoothPermissionDescriptor_new();

#ifdef __cplusplus
}
#endif
