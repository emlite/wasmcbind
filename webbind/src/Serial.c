#include <webbind/Serial.h>
#include <webbind/SerialPort.h>


DEFINE_EMLITE_TYPE(SerialPortRequestOptions, em_Val);


jb_Sequence SerialPortRequestOptions_filters(const SerialPortRequestOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "filters"));
}


void SerialPortRequestOptions_set_filters(SerialPortRequestOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "filters", value);
}


jb_Sequence SerialPortRequestOptions_allowedBluetoothServiceClassIds(const SerialPortRequestOptions *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "allowedBluetoothServiceClassIds"));
}


void SerialPortRequestOptions_set_allowedBluetoothServiceClassIds(SerialPortRequestOptions* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "allowedBluetoothServiceClassIds", value);
}

DEFINE_EMLITE_TYPE(Serial, EventTarget);


jb_Any Serial_onconnect(const Serial *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onconnect"));
}


void Serial_set_onconnect(Serial* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onconnect", value);
}


jb_Any Serial_ondisconnect(const Serial *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ondisconnect"));
}


void Serial_set_ondisconnect(Serial* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ondisconnect", value);
}


jb_Promise Serial_getPorts(Serial* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "getPorts"));
}


jb_Promise Serial_requestPort(Serial* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestPort"));
}


jb_Promise Serial_requestPort(Serial* self , const SerialPortRequestOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "requestPort", em_Val_from(options)));
}

