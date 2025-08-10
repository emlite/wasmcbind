#include <webbind/XRPermissionDescriptor.h>

DEFINE_EMLITE_TYPE(XRPermissionDescriptor, PermissionDescriptor);


XRSessionMode XRPermissionDescriptor_mode(const XRPermissionDescriptor *self) {
    return em_Val_as(XRSessionMode, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("mode")));
}


void XRPermissionDescriptor_set_mode(XRPermissionDescriptor* self, XRSessionMode * value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


jb_Array XRPermissionDescriptor_requiredFeatures(const XRPermissionDescriptor *self) {
    return em_Val_as(jb_Array, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("requiredFeatures")));
}


void XRPermissionDescriptor_set_requiredFeatures(XRPermissionDescriptor* self, jb_Array * value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("requiredFeatures"), em_Val_from(value));
}


jb_Array XRPermissionDescriptor_optionalFeatures(const XRPermissionDescriptor *self) {
    return em_Val_as(jb_Array, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("optionalFeatures")));
}


void XRPermissionDescriptor_set_optionalFeatures(XRPermissionDescriptor* self, jb_Array * value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("optionalFeatures"), em_Val_from(value));
}


XRPermissionDescriptor XRPermissionDescriptor_new() {
    em_Val obj = em_Val_object();
    return XRPermissionDescriptor_from_val(&obj);
}

