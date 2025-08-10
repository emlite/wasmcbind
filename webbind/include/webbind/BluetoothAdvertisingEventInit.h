#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BluetoothDevice BluetoothDevice;
typedef struct BluetoothManufacturerDataMap BluetoothManufacturerDataMap;
typedef struct BluetoothServiceDataMap BluetoothServiceDataMap;

DECLARE_EMLITE_TYPE(BluetoothAdvertisingEventInit, EventInit);

BluetoothDevice BluetoothAdvertisingEventInit_device(const BluetoothAdvertisingEventInit *self);

void BluetoothAdvertisingEventInit_set_device(BluetoothAdvertisingEventInit* self, BluetoothDevice * value);

jb_Array BluetoothAdvertisingEventInit_uuids(const BluetoothAdvertisingEventInit *self);

void BluetoothAdvertisingEventInit_set_uuids(BluetoothAdvertisingEventInit* self, jb_Array * value);

jb_String BluetoothAdvertisingEventInit_name(const BluetoothAdvertisingEventInit *self);

void BluetoothAdvertisingEventInit_set_name(BluetoothAdvertisingEventInit* self, jb_String * value);

unsigned short BluetoothAdvertisingEventInit_appearance(const BluetoothAdvertisingEventInit *self);

void BluetoothAdvertisingEventInit_set_appearance(BluetoothAdvertisingEventInit* self, unsigned short value);

char BluetoothAdvertisingEventInit_txPower(const BluetoothAdvertisingEventInit *self);

void BluetoothAdvertisingEventInit_set_txPower(BluetoothAdvertisingEventInit* self, char value);

char BluetoothAdvertisingEventInit_rssi(const BluetoothAdvertisingEventInit *self);

void BluetoothAdvertisingEventInit_set_rssi(BluetoothAdvertisingEventInit* self, char value);

BluetoothManufacturerDataMap BluetoothAdvertisingEventInit_manufacturerData(const BluetoothAdvertisingEventInit *self);

void BluetoothAdvertisingEventInit_set_manufacturerData(BluetoothAdvertisingEventInit* self, BluetoothManufacturerDataMap * value);

BluetoothServiceDataMap BluetoothAdvertisingEventInit_serviceData(const BluetoothAdvertisingEventInit *self);

void BluetoothAdvertisingEventInit_set_serviceData(BluetoothAdvertisingEventInit* self, BluetoothServiceDataMap * value);

BluetoothAdvertisingEventInit BluetoothAdvertisingEventInit_new();

#ifdef __cplusplus
}
#endif
