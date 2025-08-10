#include <webbind/AllowedBluetoothDevice.h>

DEFINE_EMLITE_TYPE(AllowedBluetoothDevice, em_Val);


jb_String AllowedBluetoothDevice_deviceId(const AllowedBluetoothDevice *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("deviceId")));
}


void AllowedBluetoothDevice_set_deviceId(AllowedBluetoothDevice* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("deviceId"), em_Val_from(value));
}


bool AllowedBluetoothDevice_mayUseGATT(const AllowedBluetoothDevice *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mayUseGATT")));
}


void AllowedBluetoothDevice_set_mayUseGATT(AllowedBluetoothDevice* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mayUseGATT"), em_Val_from(value));
}


jb_Any AllowedBluetoothDevice_allowedServices(const AllowedBluetoothDevice *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("allowedServices")));
}


void AllowedBluetoothDevice_set_allowedServices(AllowedBluetoothDevice* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("allowedServices"), em_Val_from(value));
}


jb_Array AllowedBluetoothDevice_allowedManufacturerData(const AllowedBluetoothDevice *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("allowedManufacturerData")));
}


void AllowedBluetoothDevice_set_allowedManufacturerData(AllowedBluetoothDevice* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("allowedManufacturerData"), em_Val_from(value));
}


AllowedBluetoothDevice AllowedBluetoothDevice_new() {
    em_Val obj = em_Val_object();
    return AllowedBluetoothDevice_from_val(&obj);
}

