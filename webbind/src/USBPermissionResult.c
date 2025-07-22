#include <webbind/USBPermissionResult.h>
#include <webbind/USBDevice.h>


DEFINE_EMLITE_TYPE(USBPermissionResult, PermissionStatus);


jb_FrozenArray USBPermissionResult_devices(const USBPermissionResult *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(PermissionStatus_as_val(self->inner), "devices"));
}


void USBPermissionResult_set_devices(USBPermissionResult* self, const jb_FrozenArray* value) {
    em_Val_set(PermissionStatus_as_val(self->inner), "devices", value);
}

