#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct BluetoothDevice BluetoothDevice;
typedef struct BluetoothRemoteGATTCharacteristic BluetoothRemoteGATTCharacteristic;
typedef struct BluetoothRemoteGATTService BluetoothRemoteGATTService;


typedef struct {
  EventTarget inner;
} BluetoothRemoteGATTService;


DECLARE_EMLITE_TYPE(BluetoothRemoteGATTService, EventTarget);

BluetoothDevice BluetoothRemoteGATTService_device( const BluetoothRemoteGATTService *self);

jb_Any BluetoothRemoteGATTService_uuid( const BluetoothRemoteGATTService *self);

bool BluetoothRemoteGATTService_isPrimary( const BluetoothRemoteGATTService *self);

jb_Promise BluetoothRemoteGATTService_getCharacteristic(BluetoothRemoteGATTService* self , const jb_Any* characteristic);

jb_Promise BluetoothRemoteGATTService_getCharacteristics(BluetoothRemoteGATTService* self );

jb_Promise BluetoothRemoteGATTService_getCharacteristics(BluetoothRemoteGATTService* self , const jb_Any* characteristic);

jb_Promise BluetoothRemoteGATTService_getIncludedService(BluetoothRemoteGATTService* self , const jb_Any* service);

jb_Promise BluetoothRemoteGATTService_getIncludedServices(BluetoothRemoteGATTService* self );

jb_Promise BluetoothRemoteGATTService_getIncludedServices(BluetoothRemoteGATTService* self , const jb_Any* service);

jb_Any BluetoothRemoteGATTService_oncharacteristicvaluechanged( const BluetoothRemoteGATTService *self);

void BluetoothRemoteGATTService_set_oncharacteristicvaluechanged(BluetoothRemoteGATTService* self, const jb_Any* value);

jb_Any BluetoothRemoteGATTService_onserviceadded( const BluetoothRemoteGATTService *self);

void BluetoothRemoteGATTService_set_onserviceadded(BluetoothRemoteGATTService* self, const jb_Any* value);

jb_Any BluetoothRemoteGATTService_onservicechanged( const BluetoothRemoteGATTService *self);

void BluetoothRemoteGATTService_set_onservicechanged(BluetoothRemoteGATTService* self, const jb_Any* value);

jb_Any BluetoothRemoteGATTService_onserviceremoved( const BluetoothRemoteGATTService *self);

void BluetoothRemoteGATTService_set_onserviceremoved(BluetoothRemoteGATTService* self, const jb_Any* value);
