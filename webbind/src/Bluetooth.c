#include <webbind/Bluetooth.h>
#include <webbind/BluetoothDevice.h>
#include <webbind/BluetoothLEScan.h>


DEFINE_EMLITE_TYPE(RequestDeviceOptions, em_Val);


jb_Sequence RequestDeviceOptions_filters(const RequestDeviceOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "filters"));
}


void RequestDeviceOptions_set_filters(RequestDeviceOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "filters", value);
}


jb_Sequence RequestDeviceOptions_exclusionFilters(const RequestDeviceOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "exclusionFilters"));
}


void RequestDeviceOptions_set_exclusionFilters(RequestDeviceOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "exclusionFilters", value);
}


jb_Sequence RequestDeviceOptions_optionalServices(const RequestDeviceOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "optionalServices"));
}


void RequestDeviceOptions_set_optionalServices(RequestDeviceOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "optionalServices", value);
}


jb_Sequence RequestDeviceOptions_optionalManufacturerData(const RequestDeviceOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "optionalManufacturerData"));
}


void RequestDeviceOptions_set_optionalManufacturerData(RequestDeviceOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "optionalManufacturerData", value);
}


bool RequestDeviceOptions_acceptAllDevices(const RequestDeviceOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "acceptAllDevices"));
}


void RequestDeviceOptions_set_acceptAllDevices(RequestDeviceOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "acceptAllDevices", value);
}

DEFINE_EMLITE_TYPE(BluetoothLEScanOptions, em_Val);


jb_Sequence BluetoothLEScanOptions_filters(const BluetoothLEScanOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "filters"));
}


void BluetoothLEScanOptions_set_filters(BluetoothLEScanOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "filters", value);
}


bool BluetoothLEScanOptions_keepRepeatedDevices(const BluetoothLEScanOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "keepRepeatedDevices"));
}


void BluetoothLEScanOptions_set_keepRepeatedDevices(BluetoothLEScanOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "keepRepeatedDevices", value);
}


bool BluetoothLEScanOptions_acceptAllAdvertisements(const BluetoothLEScanOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "acceptAllAdvertisements"));
}


void BluetoothLEScanOptions_set_acceptAllAdvertisements(BluetoothLEScanOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "acceptAllAdvertisements", value);
}

DEFINE_EMLITE_TYPE(Bluetooth, EventTarget);


jb_Promise Bluetooth_getAvailability(Bluetooth* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getAvailability"));
}


jb_Any Bluetooth_onavailabilitychanged(const Bluetooth *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onavailabilitychanged"));
}


void Bluetooth_set_onavailabilitychanged(Bluetooth* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onavailabilitychanged", value);
}


BluetoothDevice Bluetooth_referringDevice(const Bluetooth *self) {
    return em_Val_as(BluetoothDevice, em_Val_get(EventTarget_as_val(self->inner), "referringDevice"));
}


jb_Promise Bluetooth_getDevices(Bluetooth* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getDevices"));
}


jb_Promise Bluetooth_requestDevice(Bluetooth* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestDevice"));
}


jb_Promise Bluetooth_requestDevice(Bluetooth* self , const RequestDeviceOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestDevice", em_Val_from(options)));
}


jb_Promise Bluetooth_requestLEScan(Bluetooth* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestLEScan"));
}


jb_Promise Bluetooth_requestLEScan(Bluetooth* self , const BluetoothLEScanOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestLEScan", em_Val_from(options)));
}


jb_Any Bluetooth_onadvertisementreceived(const Bluetooth *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onadvertisementreceived"));
}


void Bluetooth_set_onadvertisementreceived(Bluetooth* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onadvertisementreceived", value);
}


jb_Any Bluetooth_ongattserverdisconnected(const Bluetooth *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ongattserverdisconnected"));
}


void Bluetooth_set_ongattserverdisconnected(Bluetooth* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ongattserverdisconnected", value);
}


jb_Any Bluetooth_oncharacteristicvaluechanged(const Bluetooth *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "oncharacteristicvaluechanged"));
}


void Bluetooth_set_oncharacteristicvaluechanged(Bluetooth* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "oncharacteristicvaluechanged", value);
}


jb_Any Bluetooth_onserviceadded(const Bluetooth *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onserviceadded"));
}


void Bluetooth_set_onserviceadded(Bluetooth* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onserviceadded", value);
}


jb_Any Bluetooth_onservicechanged(const Bluetooth *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onservicechanged"));
}


void Bluetooth_set_onservicechanged(Bluetooth* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onservicechanged", value);
}


jb_Any Bluetooth_onserviceremoved(const Bluetooth *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onserviceremoved"));
}


void Bluetooth_set_onserviceremoved(Bluetooth* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onserviceremoved", value);
}

