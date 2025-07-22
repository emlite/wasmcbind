#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct BluetoothLEScanFilter BluetoothLEScanFilter;


typedef struct {
  em_Val inner;
} BluetoothLEScan;


DECLARE_EMLITE_TYPE(BluetoothLEScan, em_Val);

jb_FrozenArray BluetoothLEScan_filters( const BluetoothLEScan *self);

bool BluetoothLEScan_keepRepeatedDevices( const BluetoothLEScan *self);

bool BluetoothLEScan_acceptAllAdvertisements( const BluetoothLEScan *self);

bool BluetoothLEScan_active( const BluetoothLEScan *self);

jb_Undefined BluetoothLEScan_stop(BluetoothLEScan* self );
