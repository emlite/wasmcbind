#include <webbind/BluetoothDataFilterInit.h>

DEFINE_EMLITE_TYPE(BluetoothDataFilterInit, em_Val);


jb_Any BluetoothDataFilterInit_dataPrefix(const BluetoothDataFilterInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dataPrefix")));
}


void BluetoothDataFilterInit_set_dataPrefix(BluetoothDataFilterInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dataPrefix"), em_Val_from(value));
}


jb_Any BluetoothDataFilterInit_mask(const BluetoothDataFilterInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mask")));
}


void BluetoothDataFilterInit_set_mask(BluetoothDataFilterInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mask"), em_Val_from(value));
}


BluetoothDataFilterInit BluetoothDataFilterInit_new() {
    em_Val obj = em_Val_object();
    return BluetoothDataFilterInit_from_val(&obj);
}

