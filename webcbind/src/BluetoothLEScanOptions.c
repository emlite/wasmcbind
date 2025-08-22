#include <webcbind/BluetoothLEScanOptions.h>

DEFINE_EMLITE_TYPE(BluetoothLEScanOptions, em_Val);


jb_Array BluetoothLEScanOptions_filters(const BluetoothLEScanOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filters")));
}


void BluetoothLEScanOptions_set_filters(BluetoothLEScanOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("filters"), em_Val_from(value));
}


bool BluetoothLEScanOptions_keepRepeatedDevices(const BluetoothLEScanOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keepRepeatedDevices")));
}


void BluetoothLEScanOptions_set_keepRepeatedDevices(BluetoothLEScanOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("keepRepeatedDevices"), em_Val_from(value));
}


bool BluetoothLEScanOptions_acceptAllAdvertisements(const BluetoothLEScanOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("acceptAllAdvertisements")));
}


void BluetoothLEScanOptions_set_acceptAllAdvertisements(BluetoothLEScanOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("acceptAllAdvertisements"), em_Val_from(value));
}


BluetoothLEScanOptions BluetoothLEScanOptions_new() {
    em_Val obj = em_Val_object();
    return BluetoothLEScanOptions_from_val(&obj);
}

