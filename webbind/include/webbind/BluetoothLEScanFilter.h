#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct BluetoothManufacturerDataFilter BluetoothManufacturerDataFilter;
typedef struct BluetoothServiceDataFilter BluetoothServiceDataFilter;


DECLARE_EMLITE_TYPE(BluetoothLEScanFilter, em_Val);

BluetoothLEScanFilter BluetoothLEScanFilter_new0();

BluetoothLEScanFilter BluetoothLEScanFilter_new1(jb_Any * init);

jb_DOMString BluetoothLEScanFilter_name( const BluetoothLEScanFilter *self);

jb_DOMString BluetoothLEScanFilter_namePrefix( const BluetoothLEScanFilter *self);

jb_FrozenArray BluetoothLEScanFilter_services( const BluetoothLEScanFilter *self);

BluetoothManufacturerDataFilter BluetoothLEScanFilter_manufacturerData( const BluetoothLEScanFilter *self);

BluetoothServiceDataFilter BluetoothLEScanFilter_serviceData( const BluetoothLEScanFilter *self);
