#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct BluetoothDevice BluetoothDevice;
typedef struct BluetoothRemoteGATTServer BluetoothRemoteGATTServer;
typedef struct BluetoothRemoteGATTService BluetoothRemoteGATTService;


typedef struct {
  em_Val inner;
} BluetoothRemoteGATTServer;


DECLARE_EMLITE_TYPE(BluetoothRemoteGATTServer, em_Val);

BluetoothDevice BluetoothRemoteGATTServer_device( const BluetoothRemoteGATTServer *self);

bool BluetoothRemoteGATTServer_connected( const BluetoothRemoteGATTServer *self);

jb_Promise BluetoothRemoteGATTServer_connect(BluetoothRemoteGATTServer* self );

jb_Undefined BluetoothRemoteGATTServer_disconnect(BluetoothRemoteGATTServer* self );

jb_Promise BluetoothRemoteGATTServer_getPrimaryService(BluetoothRemoteGATTServer* self , const jb_Any* service);

jb_Promise BluetoothRemoteGATTServer_getPrimaryServices(BluetoothRemoteGATTServer* self );

jb_Promise BluetoothRemoteGATTServer_getPrimaryServices(BluetoothRemoteGATTServer* self , const jb_Any* service);
