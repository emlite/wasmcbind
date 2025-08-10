#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "BluetoothManufacturerDataFilterInit.h"
#include "BluetoothServiceDataFilterInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BluetoothLEScanFilterInit, em_Val);

jb_Array BluetoothLEScanFilterInit_services(const BluetoothLEScanFilterInit *self);

void BluetoothLEScanFilterInit_set_services(BluetoothLEScanFilterInit* self, jb_Array * value);

jb_String BluetoothLEScanFilterInit_name(const BluetoothLEScanFilterInit *self);

void BluetoothLEScanFilterInit_set_name(BluetoothLEScanFilterInit* self, jb_String * value);

jb_String BluetoothLEScanFilterInit_namePrefix(const BluetoothLEScanFilterInit *self);

void BluetoothLEScanFilterInit_set_namePrefix(BluetoothLEScanFilterInit* self, jb_String * value);

jb_Array BluetoothLEScanFilterInit_manufacturerData(const BluetoothLEScanFilterInit *self);

void BluetoothLEScanFilterInit_set_manufacturerData(BluetoothLEScanFilterInit* self, jb_Array * value);

jb_Array BluetoothLEScanFilterInit_serviceData(const BluetoothLEScanFilterInit *self);

void BluetoothLEScanFilterInit_set_serviceData(BluetoothLEScanFilterInit* self, jb_Array * value);

BluetoothLEScanFilterInit BluetoothLEScanFilterInit_new();

#ifdef __cplusplus
}
#endif
