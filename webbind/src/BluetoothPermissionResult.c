#include <webbind/BluetoothPermissionResult.h>
#include <webbind/BluetoothDevice.h>


DEFINE_EMLITE_TYPE(BluetoothPermissionResult, PermissionStatus);


jb_FrozenArray BluetoothPermissionResult_devices(const BluetoothPermissionResult *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(PermissionStatus_as_val(self->inner), em_Val_from("devices")));
}


void BluetoothPermissionResult_set_devices(BluetoothPermissionResult* self, jb_FrozenArray * value) {
    em_Val_set(PermissionStatus_as_val(self->inner), em_Val_from("devices"), em_Val_from(value));
}

