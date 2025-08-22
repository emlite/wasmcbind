#include <webcbind/BluetoothLEScanPermissionResult.h>

#include <webcbind/BluetoothLEScan.h>

DEFINE_EMLITE_TYPE(BluetoothLEScanPermissionResult, PermissionStatus);


jb_Array BluetoothLEScanPermissionResult_scans(const BluetoothLEScanPermissionResult *self) {
    return em_Val_as(jb_Array, em_Val_get(PermissionStatus_as_val(self->inner), em_Val_from("scans")));
}


void BluetoothLEScanPermissionResult_set_scans(BluetoothLEScanPermissionResult* self, jb_Array * value) {
    em_Val_set(PermissionStatus_as_val(self->inner), em_Val_from("scans"), em_Val_from(value));
}

