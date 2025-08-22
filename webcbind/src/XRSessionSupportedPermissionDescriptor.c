#include <webcbind/XRSessionSupportedPermissionDescriptor.h>

DEFINE_EMLITE_TYPE(XRSessionSupportedPermissionDescriptor, PermissionDescriptor);


XRSessionMode XRSessionSupportedPermissionDescriptor_mode(const XRSessionSupportedPermissionDescriptor *self) {
    return em_Val_as(XRSessionMode, em_Val_get(PermissionDescriptor_as_val(self->inner), em_Val_from("mode")));
}


void XRSessionSupportedPermissionDescriptor_set_mode(XRSessionSupportedPermissionDescriptor* self, XRSessionMode * value) {
    em_Val_set(PermissionDescriptor_as_val(self->inner), em_Val_from("mode"), em_Val_from(value));
}


XRSessionSupportedPermissionDescriptor XRSessionSupportedPermissionDescriptor_new() {
    em_Val obj = em_Val_object();
    return XRSessionSupportedPermissionDescriptor_from_val(&obj);
}

