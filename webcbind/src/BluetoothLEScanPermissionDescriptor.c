#include <webcbind/BluetoothLEScanPermissionDescriptor.h>

DEFINE_EMLITE_TYPE(BluetoothLEScanPermissionDescriptor, PermissionDescriptor);


jb_Array BluetoothLEScanPermissionDescriptor_filters(const BluetoothLEScanPermissionDescriptor *self) {
    return em_Val_as(jb_Array, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("filters")));
}


void BluetoothLEScanPermissionDescriptor_set_filters(BluetoothLEScanPermissionDescriptor* self, jb_Array * value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("filters"), em_Val_from(value));
}


bool BluetoothLEScanPermissionDescriptor_keepRepeatedDevices(const BluetoothLEScanPermissionDescriptor *self) {
    return em_Val_as(bool, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("keepRepeatedDevices")));
}


void BluetoothLEScanPermissionDescriptor_set_keepRepeatedDevices(BluetoothLEScanPermissionDescriptor* self, bool value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("keepRepeatedDevices"), em_Val_from(value));
}


bool BluetoothLEScanPermissionDescriptor_acceptAllAdvertisements(const BluetoothLEScanPermissionDescriptor *self) {
    return em_Val_as(bool, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("acceptAllAdvertisements")));
}


void BluetoothLEScanPermissionDescriptor_set_acceptAllAdvertisements(BluetoothLEScanPermissionDescriptor* self, bool value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("acceptAllAdvertisements"), em_Val_from(value));
}


BluetoothLEScanPermissionDescriptor BluetoothLEScanPermissionDescriptor_new() {
    em_Val obj = em_Val_object();
    return BluetoothLEScanPermissionDescriptor_from_val(&obj);
}

