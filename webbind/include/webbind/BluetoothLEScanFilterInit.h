#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "BluetoothManufacturerDataFilterInit.h"
#include "BluetoothServiceDataFilterInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BluetoothLEScanFilterInit */
DECLARE_EMLITE_TYPE(BluetoothLEScanFilterInit, em_Val);

/** @brief Getter of the services property */
jb_Array BluetoothLEScanFilterInit_services(const BluetoothLEScanFilterInit *self);

/** @brief Setter of the services property */
void BluetoothLEScanFilterInit_set_services(BluetoothLEScanFilterInit* self, jb_Array * value);

/** @brief Getter of the name property */
jb_String BluetoothLEScanFilterInit_name(const BluetoothLEScanFilterInit *self);

/** @brief Setter of the name property */
void BluetoothLEScanFilterInit_set_name(BluetoothLEScanFilterInit* self, jb_String * value);

/** @brief Getter of the namePrefix property */
jb_String BluetoothLEScanFilterInit_namePrefix(const BluetoothLEScanFilterInit *self);

/** @brief Setter of the namePrefix property */
void BluetoothLEScanFilterInit_set_namePrefix(BluetoothLEScanFilterInit* self, jb_String * value);

/** @brief Getter of the manufacturerData property */
jb_Array BluetoothLEScanFilterInit_manufacturerData(const BluetoothLEScanFilterInit *self);

/** @brief Setter of the manufacturerData property */
void BluetoothLEScanFilterInit_set_manufacturerData(BluetoothLEScanFilterInit* self, jb_Array * value);

/** @brief Getter of the serviceData property */
jb_Array BluetoothLEScanFilterInit_serviceData(const BluetoothLEScanFilterInit *self);

/** @brief Setter of the serviceData property */
void BluetoothLEScanFilterInit_set_serviceData(BluetoothLEScanFilterInit* self, jb_Array * value);

/** @brief Constructor of the BluetoothLEScanFilterInit dictionary type */
BluetoothLEScanFilterInit BluetoothLEScanFilterInit_new();

#ifdef __cplusplus
}
#endif
