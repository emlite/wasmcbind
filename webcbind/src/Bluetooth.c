#include <webcbind/Bluetooth.h>

#include <webcbind/BluetoothDevice.h>
#include <webcbind/RequestDeviceOptions.h>
#include <webcbind/BluetoothLEScan.h>
#include <webcbind/BluetoothLEScanOptions.h>

DEFINE_EMLITE_TYPE(Bluetooth, EventTarget);


jb_Promise Bluetooth_getAvailability(Bluetooth* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getAvailability"));
}


jb_Any Bluetooth_onavailabilitychanged(const Bluetooth *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onavailabilitychanged")));
}


void Bluetooth_set_onavailabilitychanged(Bluetooth* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onavailabilitychanged"), em_Val_from(value));
}


BluetoothDevice Bluetooth_referringDevice(const Bluetooth *self) {
    return em_Val_as(BluetoothDevice, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("referringDevice")));
}


jb_Promise Bluetooth_getDevices(Bluetooth* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getDevices"));
}


jb_Promise Bluetooth_requestDevice0(Bluetooth* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestDevice"));
}


jb_Promise Bluetooth_requestDevice1(Bluetooth* self , RequestDeviceOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestDevice", em_Val_from(options)));
}


jb_Promise Bluetooth_requestLEScan0(Bluetooth* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestLEScan"));
}


jb_Promise Bluetooth_requestLEScan1(Bluetooth* self , BluetoothLEScanOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestLEScan", em_Val_from(options)));
}


jb_Any Bluetooth_onadvertisementreceived(const Bluetooth *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onadvertisementreceived")));
}


void Bluetooth_set_onadvertisementreceived(Bluetooth* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onadvertisementreceived"), em_Val_from(value));
}


jb_Any Bluetooth_ongattserverdisconnected(const Bluetooth *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ongattserverdisconnected")));
}


void Bluetooth_set_ongattserverdisconnected(Bluetooth* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ongattserverdisconnected"), em_Val_from(value));
}


jb_Any Bluetooth_oncharacteristicvaluechanged(const Bluetooth *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncharacteristicvaluechanged")));
}


void Bluetooth_set_oncharacteristicvaluechanged(Bluetooth* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncharacteristicvaluechanged"), em_Val_from(value));
}


jb_Any Bluetooth_onserviceadded(const Bluetooth *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onserviceadded")));
}


void Bluetooth_set_onserviceadded(Bluetooth* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onserviceadded"), em_Val_from(value));
}


jb_Any Bluetooth_onservicechanged(const Bluetooth *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onservicechanged")));
}


void Bluetooth_set_onservicechanged(Bluetooth* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onservicechanged"), em_Val_from(value));
}


jb_Any Bluetooth_onserviceremoved(const Bluetooth *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onserviceremoved")));
}


void Bluetooth_set_onserviceremoved(Bluetooth* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onserviceremoved"), em_Val_from(value));
}

