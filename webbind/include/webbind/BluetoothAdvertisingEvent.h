#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct BluetoothDevice BluetoothDevice;
typedef struct BluetoothManufacturerDataMap BluetoothManufacturerDataMap;
typedef struct BluetoothServiceDataMap BluetoothServiceDataMap;


DECLARE_EMLITE_TYPE(BluetoothAdvertisingEvent, Event);

BluetoothAdvertisingEvent BluetoothAdvertisingEvent_new(jb_DOMString * type, jb_Any * init);

BluetoothDevice BluetoothAdvertisingEvent_device( const BluetoothAdvertisingEvent *self);

jb_FrozenArray BluetoothAdvertisingEvent_uuids( const BluetoothAdvertisingEvent *self);

jb_DOMString BluetoothAdvertisingEvent_name( const BluetoothAdvertisingEvent *self);

unsigned short BluetoothAdvertisingEvent_appearance( const BluetoothAdvertisingEvent *self);

char BluetoothAdvertisingEvent_txPower( const BluetoothAdvertisingEvent *self);

char BluetoothAdvertisingEvent_rssi( const BluetoothAdvertisingEvent *self);

BluetoothManufacturerDataMap BluetoothAdvertisingEvent_manufacturerData( const BluetoothAdvertisingEvent *self);

BluetoothServiceDataMap BluetoothAdvertisingEvent_serviceData( const BluetoothAdvertisingEvent *self);
