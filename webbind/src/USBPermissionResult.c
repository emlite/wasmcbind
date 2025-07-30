#include <webbind/USBPermissionResult.h>
#include <webbind/USBDevice.h>


DEFINE_EMLITE_TYPE(USBPermissionResult, PermissionStatus);


jb_Array USBPermissionResult_devices(const USBPermissionResult *self) {
    return em_Val_as(jb_Array, em_Val_get(PermissionStatus_as_val(self->inner), em_Val_from("devices")));
}


void USBPermissionResult_set_devices(USBPermissionResult* self, jb_Array * value) {
    em_Val_set(PermissionStatus_as_val(self->inner), em_Val_from("devices"), em_Val_from(value));
}

