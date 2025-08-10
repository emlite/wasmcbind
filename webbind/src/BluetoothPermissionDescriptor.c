#include <webbind/BluetoothPermissionDescriptor.h>

DEFINE_EMLITE_TYPE(BluetoothPermissionDescriptor, PermissionDescriptor);


jb_String BluetoothPermissionDescriptor_deviceId(const BluetoothPermissionDescriptor *self) {
    return em_Val_as(jb_String, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("deviceId")));
}


void BluetoothPermissionDescriptor_set_deviceId(BluetoothPermissionDescriptor* self, jb_String * value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("deviceId"), em_Val_from(value));
}


jb_Array BluetoothPermissionDescriptor_filters(const BluetoothPermissionDescriptor *self) {
    return em_Val_as(jb_Array, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("filters")));
}


void BluetoothPermissionDescriptor_set_filters(BluetoothPermissionDescriptor* self, jb_Array * value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("filters"), em_Val_from(value));
}


jb_Array BluetoothPermissionDescriptor_optionalServices(const BluetoothPermissionDescriptor *self) {
    return em_Val_as(jb_Array, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("optionalServices")));
}


void BluetoothPermissionDescriptor_set_optionalServices(BluetoothPermissionDescriptor* self, jb_Array * value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("optionalServices"), em_Val_from(value));
}


jb_Array BluetoothPermissionDescriptor_optionalManufacturerData(const BluetoothPermissionDescriptor *self) {
    return em_Val_as(jb_Array, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("optionalManufacturerData")));
}


void BluetoothPermissionDescriptor_set_optionalManufacturerData(BluetoothPermissionDescriptor* self, jb_Array * value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("optionalManufacturerData"), em_Val_from(value));
}


bool BluetoothPermissionDescriptor_acceptAllDevices(const BluetoothPermissionDescriptor *self) {
    return em_Val_as(bool, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("acceptAllDevices")));
}


void BluetoothPermissionDescriptor_set_acceptAllDevices(BluetoothPermissionDescriptor* self, bool value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("acceptAllDevices"), em_Val_from(value));
}


BluetoothPermissionDescriptor BluetoothPermissionDescriptor_new() {
    em_Val obj = em_Val_object();
    return BluetoothPermissionDescriptor_from_val(&obj);
}

