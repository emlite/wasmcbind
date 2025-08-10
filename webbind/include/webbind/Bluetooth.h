#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BluetoothDevice BluetoothDevice;
typedef struct RequestDeviceOptions RequestDeviceOptions;
typedef struct BluetoothLEScan BluetoothLEScan;
typedef struct BluetoothLEScanOptions BluetoothLEScanOptions;

DECLARE_EMLITE_TYPE(Bluetooth, EventTarget);

jb_Promise Bluetooth_getAvailability(Bluetooth* self );

jb_Any Bluetooth_onavailabilitychanged(const Bluetooth *self);

void Bluetooth_set_onavailabilitychanged(Bluetooth* self, jb_Any * value);

BluetoothDevice Bluetooth_referringDevice(const Bluetooth *self);

jb_Promise Bluetooth_getDevices(Bluetooth* self );

jb_Promise Bluetooth_requestDevice0(Bluetooth* self );

jb_Promise Bluetooth_requestDevice1(Bluetooth* self , RequestDeviceOptions * options);

jb_Promise Bluetooth_requestLEScan0(Bluetooth* self );

jb_Promise Bluetooth_requestLEScan1(Bluetooth* self , BluetoothLEScanOptions * options);

jb_Any Bluetooth_onadvertisementreceived(const Bluetooth *self);

void Bluetooth_set_onadvertisementreceived(Bluetooth* self, jb_Any * value);

jb_Any Bluetooth_ongattserverdisconnected(const Bluetooth *self);

void Bluetooth_set_ongattserverdisconnected(Bluetooth* self, jb_Any * value);

jb_Any Bluetooth_oncharacteristicvaluechanged(const Bluetooth *self);

void Bluetooth_set_oncharacteristicvaluechanged(Bluetooth* self, jb_Any * value);

jb_Any Bluetooth_onserviceadded(const Bluetooth *self);

void Bluetooth_set_onserviceadded(Bluetooth* self, jb_Any * value);

jb_Any Bluetooth_onservicechanged(const Bluetooth *self);

void Bluetooth_set_onservicechanged(Bluetooth* self, jb_Any * value);

jb_Any Bluetooth_onserviceremoved(const Bluetooth *self);

void Bluetooth_set_onserviceremoved(Bluetooth* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
