#include <webbind/BluetoothServiceDataFilterInit.h>

DEFINE_EMLITE_TYPE(BluetoothServiceDataFilterInit, BluetoothDataFilterInit);


jb_Any BluetoothServiceDataFilterInit_service(const BluetoothServiceDataFilterInit *self) {
    return em_Val_as(jb_Any, em_Val_get(BluetoothDataFilterInit_as_val(self->inner), em_Val_from("service")));
}


void BluetoothServiceDataFilterInit_set_service(BluetoothServiceDataFilterInit* self, jb_Any * value) {
    em_Val_set(BluetoothDataFilterInit_as_val(self->inner), em_Val_from("service"), em_Val_from(value));
}


BluetoothServiceDataFilterInit BluetoothServiceDataFilterInit_new() {
    em_Val obj = em_Val_object();
    return BluetoothServiceDataFilterInit_from_val(&obj);
}

