#include <webbind/BluetoothLEScanFilterInit.h>

DEFINE_EMLITE_TYPE(BluetoothLEScanFilterInit, em_Val);


jb_Array BluetoothLEScanFilterInit_services(const BluetoothLEScanFilterInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("services")));
}


void BluetoothLEScanFilterInit_set_services(BluetoothLEScanFilterInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("services"), em_Val_from(value));
}


jb_String BluetoothLEScanFilterInit_name(const BluetoothLEScanFilterInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void BluetoothLEScanFilterInit_set_name(BluetoothLEScanFilterInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


jb_String BluetoothLEScanFilterInit_namePrefix(const BluetoothLEScanFilterInit *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("namePrefix")));
}


void BluetoothLEScanFilterInit_set_namePrefix(BluetoothLEScanFilterInit* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("namePrefix"), em_Val_from(value));
}


jb_Array BluetoothLEScanFilterInit_manufacturerData(const BluetoothLEScanFilterInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("manufacturerData")));
}


void BluetoothLEScanFilterInit_set_manufacturerData(BluetoothLEScanFilterInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("manufacturerData"), em_Val_from(value));
}


jb_Array BluetoothLEScanFilterInit_serviceData(const BluetoothLEScanFilterInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("serviceData")));
}


void BluetoothLEScanFilterInit_set_serviceData(BluetoothLEScanFilterInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("serviceData"), em_Val_from(value));
}


BluetoothLEScanFilterInit BluetoothLEScanFilterInit_new() {
    em_Val obj = em_Val_object();
    return BluetoothLEScanFilterInit_from_val(&obj);
}

