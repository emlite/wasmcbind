#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AllowedBluetoothDevice */
DECLARE_EMLITE_TYPE(AllowedBluetoothDevice, em_Val);

/** @brief Getter of the deviceId property */
jb_String AllowedBluetoothDevice_deviceId(const AllowedBluetoothDevice *self);

/** @brief Setter of the deviceId property */
void AllowedBluetoothDevice_set_deviceId(AllowedBluetoothDevice* self, jb_String * value);

/** @brief Getter of the mayUseGATT property */
bool AllowedBluetoothDevice_mayUseGATT(const AllowedBluetoothDevice *self);

/** @brief Setter of the mayUseGATT property */
void AllowedBluetoothDevice_set_mayUseGATT(AllowedBluetoothDevice* self, bool value);

/** @brief Getter of the allowedServices property */
jb_Any AllowedBluetoothDevice_allowedServices(const AllowedBluetoothDevice *self);

/** @brief Setter of the allowedServices property */
void AllowedBluetoothDevice_set_allowedServices(AllowedBluetoothDevice* self, jb_Any * value);

/** @brief Getter of the allowedManufacturerData property */
jb_Array AllowedBluetoothDevice_allowedManufacturerData(const AllowedBluetoothDevice *self);

/** @brief Setter of the allowedManufacturerData property */
void AllowedBluetoothDevice_set_allowedManufacturerData(AllowedBluetoothDevice* self, jb_Array * value);

/** @brief Constructor of the AllowedBluetoothDevice dictionary type */
AllowedBluetoothDevice AllowedBluetoothDevice_new();

#ifdef __cplusplus
}
#endif
