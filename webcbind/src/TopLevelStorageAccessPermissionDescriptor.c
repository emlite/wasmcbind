#include <webcbind/TopLevelStorageAccessPermissionDescriptor.h>

DEFINE_EMLITE_TYPE(TopLevelStorageAccessPermissionDescriptor, PermissionDescriptor);


jb_String TopLevelStorageAccessPermissionDescriptor_requestedOrigin(const TopLevelStorageAccessPermissionDescriptor *self) {
    return em_Val_as(jb_String, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("requestedOrigin")));
}


void TopLevelStorageAccessPermissionDescriptor_set_requestedOrigin(TopLevelStorageAccessPermissionDescriptor* self, jb_String * value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("requestedOrigin"), em_Val_from(value));
}


TopLevelStorageAccessPermissionDescriptor TopLevelStorageAccessPermissionDescriptor_new() {
    em_Val obj = em_Val_object();
    return TopLevelStorageAccessPermissionDescriptor_from_val(&obj);
}

