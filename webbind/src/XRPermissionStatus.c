#include <webbind/XRPermissionStatus.h>


DEFINE_EMLITE_TYPE(XRPermissionStatus, PermissionStatus);


jb_FrozenArray XRPermissionStatus_granted(const XRPermissionStatus *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(PermissionStatus_as_val(self->inner), "granted"));
}


void XRPermissionStatus_set_granted(XRPermissionStatus* self, const jb_FrozenArray* value) {
    em_Val_set(PermissionStatus_as_val(self->inner), "granted", value);
}

