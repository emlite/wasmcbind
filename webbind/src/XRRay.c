#include <webbind/XRRay.h>
#include <webbind/DOMPointReadOnly.h>
#include <webbind/XRRigidTransform.h>


DEFINE_EMLITE_TYPE(XRRay, em_Val);


XRRay XRRay_new(const XRRigidTransform* transform) : em_Val(em_Val_global("XRRay").new_(em_Val_from(transform))) {
        return XRRay(em_Val_new(em_Val_global("XRRay", em_Val_from(transform)));
      }


DOMPointReadOnly XRRay_origin(const XRRay *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(em_Val_as_val(self->inner), "origin"));
}


DOMPointReadOnly XRRay_direction(const XRRay *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(em_Val_as_val(self->inner), "direction"));
}


jb_Float32Array XRRay_matrix(const XRRay *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), "matrix"));
}

