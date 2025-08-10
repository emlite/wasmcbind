#include <webbind/PrivateNetworkAccessPermissionDescriptor.h>

DEFINE_EMLITE_TYPE(PrivateNetworkAccessPermissionDescriptor, PermissionDescriptor);


jb_String PrivateNetworkAccessPermissionDescriptor_id(const PrivateNetworkAccessPermissionDescriptor *self) {
    return em_Val_as(jb_String, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("id")));
}


void PrivateNetworkAccessPermissionDescriptor_set_id(PrivateNetworkAccessPermissionDescriptor* self, jb_String * value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


PrivateNetworkAccessPermissionDescriptor PrivateNetworkAccessPermissionDescriptor_new() {
    em_Val obj = em_Val_object();
    return PrivateNetworkAccessPermissionDescriptor_from_val(&obj);
}

