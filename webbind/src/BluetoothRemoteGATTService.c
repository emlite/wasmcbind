#include <webbind/BluetoothRemoteGATTService.h>

#include <webbind/BluetoothDevice.h>
#include <webbind/BluetoothRemoteGATTCharacteristic.h>

DEFINE_EMLITE_TYPE(BluetoothRemoteGATTService, EventTarget);


BluetoothDevice BluetoothRemoteGATTService_device(const BluetoothRemoteGATTService *self) {
    return em_Val_as(BluetoothDevice, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("device")));
}


jb_Any BluetoothRemoteGATTService_uuid(const BluetoothRemoteGATTService *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("uuid")));
}


bool BluetoothRemoteGATTService_isPrimary(const BluetoothRemoteGATTService *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("isPrimary")));
}


jb_Promise BluetoothRemoteGATTService_getCharacteristic(BluetoothRemoteGATTService* self , jb_Any * characteristic) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getCharacteristic", em_Val_from(characteristic)));
}


jb_Promise BluetoothRemoteGATTService_getCharacteristics0(BluetoothRemoteGATTService* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getCharacteristics"));
}


jb_Promise BluetoothRemoteGATTService_getCharacteristics1(BluetoothRemoteGATTService* self , jb_Any * characteristic) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getCharacteristics", em_Val_from(characteristic)));
}


jb_Promise BluetoothRemoteGATTService_getIncludedService(BluetoothRemoteGATTService* self , jb_Any * service) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getIncludedService", em_Val_from(service)));
}


jb_Promise BluetoothRemoteGATTService_getIncludedServices0(BluetoothRemoteGATTService* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getIncludedServices"));
}


jb_Promise BluetoothRemoteGATTService_getIncludedServices1(BluetoothRemoteGATTService* self , jb_Any * service) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getIncludedServices", em_Val_from(service)));
}


jb_Any BluetoothRemoteGATTService_oncharacteristicvaluechanged(const BluetoothRemoteGATTService *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncharacteristicvaluechanged")));
}


void BluetoothRemoteGATTService_set_oncharacteristicvaluechanged(BluetoothRemoteGATTService* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncharacteristicvaluechanged"), em_Val_from(value));
}


jb_Any BluetoothRemoteGATTService_onserviceadded(const BluetoothRemoteGATTService *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onserviceadded")));
}


void BluetoothRemoteGATTService_set_onserviceadded(BluetoothRemoteGATTService* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onserviceadded"), em_Val_from(value));
}


jb_Any BluetoothRemoteGATTService_onservicechanged(const BluetoothRemoteGATTService *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onservicechanged")));
}


void BluetoothRemoteGATTService_set_onservicechanged(BluetoothRemoteGATTService* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onservicechanged"), em_Val_from(value));
}


jb_Any BluetoothRemoteGATTService_onserviceremoved(const BluetoothRemoteGATTService *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onserviceremoved")));
}


void BluetoothRemoteGATTService_set_onserviceremoved(BluetoothRemoteGATTService* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onserviceremoved"), em_Val_from(value));
}

