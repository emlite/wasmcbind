#include <webcbind/XRRay.h>

#include <webcbind/XRRigidTransform.h>
#include <webcbind/DOMPointReadOnly.h>

DEFINE_EMLITE_TYPE(XRRay, em_Val);


XRRay XRRay_new(XRRigidTransform * transform) {
        em_Val vv = em_Val_new(em_Val_global("XRRay") , em_Val_from(transform));
        return XRRay_from_val(&vv);
      }


DOMPointReadOnly XRRay_origin(const XRRay *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("origin")));
}


DOMPointReadOnly XRRay_direction(const XRRay *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("direction")));
}


jb_Float32Array XRRay_matrix(const XRRay *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("matrix")));
}

