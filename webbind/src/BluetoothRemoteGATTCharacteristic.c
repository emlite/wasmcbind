#include <webbind/BluetoothRemoteGATTCharacteristic.h>

#include <webbind/BluetoothRemoteGATTService.h>
#include <webbind/BluetoothCharacteristicProperties.h>
#include <webbind/BluetoothRemoteGATTDescriptor.h>

DEFINE_EMLITE_TYPE(BluetoothRemoteGATTCharacteristic, EventTarget);


BluetoothRemoteGATTService BluetoothRemoteGATTCharacteristic_service(const BluetoothRemoteGATTCharacteristic *self) {
    return em_Val_as(BluetoothRemoteGATTService, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("service")));
}


jb_Any BluetoothRemoteGATTCharacteristic_uuid(const BluetoothRemoteGATTCharacteristic *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("uuid")));
}


BluetoothCharacteristicProperties BluetoothRemoteGATTCharacteristic_properties(const BluetoothRemoteGATTCharacteristic *self) {
    return em_Val_as(BluetoothCharacteristicProperties, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("properties")));
}


jb_DataView BluetoothRemoteGATTCharacteristic_value(const BluetoothRemoteGATTCharacteristic *self) {
    return em_Val_as(jb_DataView, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("value")));
}


jb_Promise BluetoothRemoteGATTCharacteristic_getDescriptor(BluetoothRemoteGATTCharacteristic* self , jb_Any * descriptor) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getDescriptor", em_Val_from(descriptor)));
}


jb_Promise BluetoothRemoteGATTCharacteristic_getDescriptors0(BluetoothRemoteGATTCharacteristic* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getDescriptors"));
}


jb_Promise BluetoothRemoteGATTCharacteristic_getDescriptors1(BluetoothRemoteGATTCharacteristic* self , jb_Any * descriptor) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getDescriptors", em_Val_from(descriptor)));
}


jb_Promise BluetoothRemoteGATTCharacteristic_readValue(BluetoothRemoteGATTCharacteristic* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "readValue"));
}


jb_Promise BluetoothRemoteGATTCharacteristic_writeValue(BluetoothRemoteGATTCharacteristic* self , jb_Any * value) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "writeValue", em_Val_from(value)));
}


jb_Promise BluetoothRemoteGATTCharacteristic_writeValueWithResponse(BluetoothRemoteGATTCharacteristic* self , jb_Any * value) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "writeValueWithResponse", em_Val_from(value)));
}


jb_Promise BluetoothRemoteGATTCharacteristic_writeValueWithoutResponse(BluetoothRemoteGATTCharacteristic* self , jb_Any * value) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "writeValueWithoutResponse", em_Val_from(value)));
}


jb_Promise BluetoothRemoteGATTCharacteristic_startNotifications(BluetoothRemoteGATTCharacteristic* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "startNotifications"));
}


jb_Promise BluetoothRemoteGATTCharacteristic_stopNotifications(BluetoothRemoteGATTCharacteristic* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "stopNotifications"));
}


jb_Any BluetoothRemoteGATTCharacteristic_oncharacteristicvaluechanged(const BluetoothRemoteGATTCharacteristic *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("oncharacteristicvaluechanged")));
}


void BluetoothRemoteGATTCharacteristic_set_oncharacteristicvaluechanged(BluetoothRemoteGATTCharacteristic* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("oncharacteristicvaluechanged"), em_Val_from(value));
}

