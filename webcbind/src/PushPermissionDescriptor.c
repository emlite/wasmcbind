#include <webcbind/PushPermissionDescriptor.h>

DEFINE_EMLITE_TYPE(PushPermissionDescriptor, PermissionDescriptor);


bool PushPermissionDescriptor_userVisibleOnly(const PushPermissionDescriptor *self) {
    return em_Val_as(bool, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("userVisibleOnly")));
}


void PushPermissionDescriptor_set_userVisibleOnly(PushPermissionDescriptor* self, bool value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("userVisibleOnly"), em_Val_from(value));
}


PushPermissionDescriptor PushPermissionDescriptor_new() {
    em_Val obj = em_Val_object();
    return PushPermissionDescriptor_from_val(&obj);
}

