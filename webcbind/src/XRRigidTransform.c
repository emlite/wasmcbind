#include <webcbind/XRRigidTransform.h>

#include <webcbind/DOMPointInit.h>
#include <webcbind/DOMPointReadOnly.h>

DEFINE_EMLITE_TYPE(XRRigidTransform, em_Val);


XRRigidTransform XRRigidTransform_new0() {
        em_Val vv = em_Val_new(em_Val_global("XRRigidTransform") );
        return XRRigidTransform_from_val(&vv);
      }


XRRigidTransform XRRigidTransform_new1(DOMPointInit * position) {
        em_Val vv = em_Val_new(em_Val_global("XRRigidTransform") , em_Val_from(position));
        return XRRigidTransform_from_val(&vv);
      }


XRRigidTransform XRRigidTransform_new2(DOMPointInit * position, DOMPointInit * orientation) {
        em_Val vv = em_Val_new(em_Val_global("XRRigidTransform") , em_Val_from(position), em_Val_from(orientation));
        return XRRigidTransform_from_val(&vv);
      }


DOMPointReadOnly XRRigidTransform_position(const XRRigidTransform *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("position")));
}


DOMPointReadOnly XRRigidTransform_orientation(const XRRigidTransform *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(em_Val_as_val(self->inner), em_Val_from("orientation")));
}


jb_Float32Array XRRigidTransform_matrix(const XRRigidTransform *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("matrix")));
}


XRRigidTransform XRRigidTransform_inverse(const XRRigidTransform *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(em_Val_as_val(self->inner), em_Val_from("inverse")));
}

