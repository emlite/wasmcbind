#include <webcbind/SerialPortRequestOptions.h>

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


SerialPortRequestOptions SerialPortRequestOptions_new() {
    em_Val obj = em_Val_object();
    return SerialPortRequestOptions_from_val(&obj);
}

