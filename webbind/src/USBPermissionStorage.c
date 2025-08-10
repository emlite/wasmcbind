#include <webbind/USBPermissionStorage.h>

DEFINE_EMLITE_TYPE(USBPermissionStorage, em_Val);


jb_Array USBPermissionStorage_allowedDevices(const USBPermissionStorage *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("allowedDevices")));
}


void USBPermissionStorage_set_allowedDevices(USBPermissionStorage* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("allowedDevices"), em_Val_from(value));
}


USBPermissionStorage USBPermissionStorage_new() {
    em_Val obj = em_Val_object();
    return USBPermissionStorage_from_val(&obj);
}

