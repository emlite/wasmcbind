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

/** @brief Dictionary type BluetoothAdvertisingEventInit */
DECLARE_EMLITE_TYPE(BluetoothAdvertisingEventInit, EventInit);

/** @brief Getter of the device property */
BluetoothDevice BluetoothAdvertisingEventInit_device(const BluetoothAdvertisingEventInit *self);

/** @brief Setter of the device property */
void BluetoothAdvertisingEventInit_set_device(BluetoothAdvertisingEventInit* self, BluetoothDevice * value);

/** @brief Getter of the uuids property */
jb_Array BluetoothAdvertisingEventInit_uuids(const BluetoothAdvertisingEventInit *self);

/** @brief Setter of the uuids property */
void BluetoothAdvertisingEventInit_set_uuids(BluetoothAdvertisingEventInit* self, jb_Array * value);

/** @brief Getter of the name property */
jb_String BluetoothAdvertisingEventInit_name(const BluetoothAdvertisingEventInit *self);

/** @brief Setter of the name property */
void BluetoothAdvertisingEventInit_set_name(BluetoothAdvertisingEventInit* self, jb_String * value);

/** @brief Getter of the appearance property */
unsigned short BluetoothAdvertisingEventInit_appearance(const BluetoothAdvertisingEventInit *self);

/** @brief Setter of the appearance property */
void BluetoothAdvertisingEventInit_set_appearance(BluetoothAdvertisingEventInit* self, unsigned short value);

/** @brief Getter of the txPower property */
char BluetoothAdvertisingEventInit_txPower(const BluetoothAdvertisingEventInit *self);

/** @brief Setter of the txPower property */
void BluetoothAdvertisingEventInit_set_txPower(BluetoothAdvertisingEventInit* self, char value);

/** @brief Getter of the rssi property */
char BluetoothAdvertisingEventInit_rssi(const BluetoothAdvertisingEventInit *self);

/** @brief Setter of the rssi property */
void BluetoothAdvertisingEventInit_set_rssi(BluetoothAdvertisingEventInit* self, char value);

/** @brief Getter of the manufacturerData property */
BluetoothManufacturerDataMap BluetoothAdvertisingEventInit_manufacturerData(const BluetoothAdvertisingEventInit *self);

/** @brief Setter of the manufacturerData property */
void BluetoothAdvertisingEventInit_set_manufacturerData(BluetoothAdvertisingEventInit* self, BluetoothManufacturerDataMap * value);

/** @brief Getter of the serviceData property */
BluetoothServiceDataMap BluetoothAdvertisingEventInit_serviceData(const BluetoothAdvertisingEventInit *self);

/** @brief Setter of the serviceData property */
void BluetoothAdvertisingEventInit_set_serviceData(BluetoothAdvertisingEventInit* self, BluetoothServiceDataMap * value);

/** @brief Constructor of the BluetoothAdvertisingEventInit dictionary type */
BluetoothAdvertisingEventInit BluetoothAdvertisingEventInit_new();

#ifdef __cplusplus
}
#endif
