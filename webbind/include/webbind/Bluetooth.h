#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct BluetoothDevice BluetoothDevice;
typedef struct RequestDeviceOptions RequestDeviceOptions;
typedef struct BluetoothLEScan BluetoothLEScan;
typedef struct BluetoothLEScanOptions BluetoothLEScanOptions;


typedef struct {
  em_Val inner;
} RequestDeviceOptions;


DECLARE_EMLITE_TYPE(RequestDeviceOptions, em_Val);

jb_Sequence RequestDeviceOptions_filters( const RequestDeviceOptions *self);

void RequestDeviceOptions_set_filters(RequestDeviceOptions* self, const jb_Sequence* value);

jb_Sequence RequestDeviceOptions_exclusionFilters( const RequestDeviceOptions *self);

void RequestDeviceOptions_set_exclusionFilters(RequestDeviceOptions* self, const jb_Sequence* value);

jb_Sequence RequestDeviceOptions_optionalServices( const RequestDeviceOptions *self);

void RequestDeviceOptions_set_optionalServices(RequestDeviceOptions* self, const jb_Sequence* value);

jb_Sequence RequestDeviceOptions_optionalManufacturerData( const RequestDeviceOptions *self);

void RequestDeviceOptions_set_optionalManufacturerData(RequestDeviceOptions* self, const jb_Sequence* value);

bool RequestDeviceOptions_acceptAllDevices( const RequestDeviceOptions *self);

void RequestDeviceOptions_set_acceptAllDevices(RequestDeviceOptions* self, bool value);
typedef struct {
  em_Val inner;
} BluetoothLEScanOptions;


DECLARE_EMLITE_TYPE(BluetoothLEScanOptions, em_Val);

jb_Sequence BluetoothLEScanOptions_filters( const BluetoothLEScanOptions *self);

void BluetoothLEScanOptions_set_filters(BluetoothLEScanOptions* self, const jb_Sequence* value);

bool BluetoothLEScanOptions_keepRepeatedDevices( const BluetoothLEScanOptions *self);

void BluetoothLEScanOptions_set_keepRepeatedDevices(BluetoothLEScanOptions* self, bool value);

bool BluetoothLEScanOptions_acceptAllAdvertisements( const BluetoothLEScanOptions *self);

void BluetoothLEScanOptions_set_acceptAllAdvertisements(BluetoothLEScanOptions* self, bool value);
typedef struct {
  EventTarget inner;
} Bluetooth;


DECLARE_EMLITE_TYPE(Bluetooth, EventTarget);

jb_Promise Bluetooth_getAvailability(Bluetooth* self );

jb_Any Bluetooth_onavailabilitychanged( const Bluetooth *self);

void Bluetooth_set_onavailabilitychanged(Bluetooth* self, const jb_Any* value);

BluetoothDevice Bluetooth_referringDevice( const Bluetooth *self);

jb_Promise Bluetooth_getDevices(Bluetooth* self );

jb_Promise Bluetooth_requestDevice(Bluetooth* self );

jb_Promise Bluetooth_requestDevice(Bluetooth* self , const RequestDeviceOptions* options);

jb_Promise Bluetooth_requestLEScan(Bluetooth* self );

jb_Promise Bluetooth_requestLEScan(Bluetooth* self , const BluetoothLEScanOptions* options);

jb_Any Bluetooth_onadvertisementreceived( const Bluetooth *self);

void Bluetooth_set_onadvertisementreceived(Bluetooth* self, const jb_Any* value);

jb_Any Bluetooth_ongattserverdisconnected( const Bluetooth *self);

void Bluetooth_set_ongattserverdisconnected(Bluetooth* self, const jb_Any* value);

jb_Any Bluetooth_oncharacteristicvaluechanged( const Bluetooth *self);

void Bluetooth_set_oncharacteristicvaluechanged(Bluetooth* self, const jb_Any* value);

jb_Any Bluetooth_onserviceadded( const Bluetooth *self);

void Bluetooth_set_onserviceadded(Bluetooth* self, const jb_Any* value);

jb_Any Bluetooth_onservicechanged( const Bluetooth *self);

void Bluetooth_set_onservicechanged(Bluetooth* self, const jb_Any* value);

jb_Any Bluetooth_onserviceremoved( const Bluetooth *self);

void Bluetooth_set_onserviceremoved(Bluetooth* self, const jb_Any* value);
