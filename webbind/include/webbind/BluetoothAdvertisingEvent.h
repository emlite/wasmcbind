#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BluetoothAdvertisingEventInit BluetoothAdvertisingEventInit;
typedef struct BluetoothDevice BluetoothDevice;
typedef struct BluetoothManufacturerDataMap BluetoothManufacturerDataMap;
typedef struct BluetoothServiceDataMap BluetoothServiceDataMap;


/**
 * @brief Interface BluetoothAdvertisingEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BluetoothAdvertisingEvent)
 */
DECLARE_EMLITE_TYPE(BluetoothAdvertisingEvent, Event);

/**
 * @brief Creates a new `BluetoothAdvertisingEvent` object. 
*/
BluetoothAdvertisingEvent BluetoothAdvertisingEvent_new(jb_String * type, BluetoothAdvertisingEventInit * init);

/**
 * @brief Gets the `device` property. 
*/
BluetoothDevice BluetoothAdvertisingEvent_device(const BluetoothAdvertisingEvent *self);

/**
 * @brief Gets the `uuids` property. 
*/
jb_Array BluetoothAdvertisingEvent_uuids(const BluetoothAdvertisingEvent *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String BluetoothAdvertisingEvent_name(const BluetoothAdvertisingEvent *self);

/**
 * @brief Gets the `appearance` property. 
*/
unsigned short BluetoothAdvertisingEvent_appearance(const BluetoothAdvertisingEvent *self);

/**
 * @brief Gets the `txPower` property. 
*/
char BluetoothAdvertisingEvent_txPower(const BluetoothAdvertisingEvent *self);

/**
 * @brief Gets the `rssi` property. 
*/
char BluetoothAdvertisingEvent_rssi(const BluetoothAdvertisingEvent *self);

/**
 * @brief Gets the `manufacturerData` property. 
*/
BluetoothManufacturerDataMap BluetoothAdvertisingEvent_manufacturerData(const BluetoothAdvertisingEvent *self);

/**
 * @brief Gets the `serviceData` property. 
*/
BluetoothServiceDataMap BluetoothAdvertisingEvent_serviceData(const BluetoothAdvertisingEvent *self);

#ifdef __cplusplus
}
#endif
