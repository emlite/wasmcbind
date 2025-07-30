#include <webbind/Bluetooth.h>
#include <webbind/BluetoothDevice.h>
#include <webbind/BluetoothLEScan.h>


DEFINE_EMLITE_TYPE(RequestDeviceOptions, em_Val);


jb_Array RequestDeviceOptions_filters(const RequestDeviceOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filters")));
}


void RequestDeviceOptions_set_filters(RequestDeviceOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("filters"), em_Val_from(value));
}


jb_Array RequestDeviceOptions_exclusionFilters(const RequestDeviceOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("exclusionFilters")));
}


void RequestDeviceOptions_set_exclusionFilters(RequestDeviceOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("exclusionFilters"), em_Val_from(value));
}


jb_Array RequestDeviceOptions_optionalServices(const RequestDeviceOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("optionalServices")));
}


void RequestDeviceOptions_set_optionalServices(RequestDeviceOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("optionalServices"), em_Val_from(value));
}


jb_Array RequestDeviceOptions_optionalManufacturerData(const RequestDeviceOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("optionalManufacturerData")));
}


void RequestDeviceOptions_set_optionalManufacturerData(RequestDeviceOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("optionalManufacturerData"), em_Val_from(value));
}


bool RequestDeviceOptions_acceptAllDevices(const RequestDeviceOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("acceptAllDevices")));
}


void RequestDeviceOptions_set_acceptAllDevices(RequestDeviceOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("acceptAllDevices"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(BluetoothLEScanOptions, em_Val);


jb_Array BluetoothLEScanOptions_filters(const BluetoothLEScanOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filters")));
}


void BluetoothLEScanOptions_set_filters(BluetoothLEScanOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("filters"), em_Val_from(value));
}


bool BluetoothLEScanOptions_keepRepeatedDevices(const BluetoothLEScanOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keepRepeatedDevices")));
}


void BluetoothLEScanOptions_set_keepRepeatedDevices(BluetoothLEScanOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("keepRepeatedDevices"), em_Val_from(value));
}


bool BluetoothLEScanOptions_acceptAllAdvertisements(const BluetoothLEScanOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("acceptAllAdvertisements")));
}


void BluetoothLEScanOptions_set_acceptAllAdvertisements(BluetoothLEScanOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("acceptAllAdvertisements"), em_Val_from(value));
}

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

