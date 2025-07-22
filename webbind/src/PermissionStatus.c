#include <webbind/PermissionStatus.h>


DEFINE_EMLITE_TYPE(PermissionStatus, EventTarget);


PermissionState PermissionStatus_state(const PermissionStatus *self) {
    return em_Val_as(PermissionState, em_Val_get(EventTarget_as_val(self->inner), "state"));
}


jb_DOMString PermissionStatus_name(const PermissionStatus *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "name"));
}


jb_Any PermissionStatus_onchange(const PermissionStatus *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onchange"));
}


void PermissionStatus_set_onchange(PermissionStatus* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onchange", value);
}

