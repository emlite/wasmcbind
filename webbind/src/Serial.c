#include <webbind/Serial.h>
#include <webbind/SerialPort.h>


DEFINE_EMLITE_TYPE(SerialPortRequestOptions, em_Val);


jb_Array SerialPortRequestOptions_filters(const SerialPortRequestOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filters")));
}


void SerialPortRequestOptions_set_filters(SerialPortRequestOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("filters"), em_Val_from(value));
}


jb_Array SerialPortRequestOptions_allowedBluetoothServiceClassIds(const SerialPortRequestOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("allowedBluetoothServiceClassIds")));
}


void SerialPortRequestOptions_set_allowedBluetoothServiceClassIds(SerialPortRequestOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("allowedBluetoothServiceClassIds"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(Serial, EventTarget);


jb_Any Serial_onconnect(const Serial *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onconnect")));
}


void Serial_set_onconnect(Serial* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onconnect"), em_Val_from(value));
}


jb_Any Serial_ondisconnect(const Serial *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondisconnect")));
}


void Serial_set_ondisconnect(Serial* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondisconnect"), em_Val_from(value));
}


jb_Promise Serial_getPorts(Serial* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getPorts"));
}


jb_Promise Serial_requestPort0(Serial* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestPort"));
}


jb_Promise Serial_requestPort1(Serial* self , SerialPortRequestOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestPort", em_Val_from(options)));
}

