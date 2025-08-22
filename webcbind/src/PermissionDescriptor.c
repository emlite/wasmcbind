#include <webcbind/PermissionDescriptor.h>

DEFINE_EMLITE_TYPE(PermissionDescriptor, em_Val);


jb_String PermissionDescriptor_name(const PermissionDescriptor *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void PermissionDescriptor_set_name(PermissionDescriptor* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


PermissionDescriptor PermissionDescriptor_new() {
    em_Val obj = em_Val_object();
    return PermissionDescriptor_from_val(&obj);
}

