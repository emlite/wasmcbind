#include <webbind/BluetoothPermissionStorage.h>

DEFINE_EMLITE_TYPE(BluetoothPermissionStorage, em_Val);


jb_Array BluetoothPermissionStorage_allowedDevices(const BluetoothPermissionStorage *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("allowedDevices")));
}


void BluetoothPermissionStorage_set_allowedDevices(BluetoothPermissionStorage* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("allowedDevices"), em_Val_from(value));
}


BluetoothPermissionStorage BluetoothPermissionStorage_new() {
    em_Val obj = em_Val_object();
    return BluetoothPermissionStorage_from_val(&obj);
}

