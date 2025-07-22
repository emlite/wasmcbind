#include <webbind/XRRigidTransform.h>
#include <webbind/DOMPointReadOnly.h>


DEFINE_EMLITE_TYPE(XRRigidTransform, em_Val);


XRRigidTransform XRRigidTransform_new() : em_Val(em_Val_global("XRRigidTransform").new_()) {
        return XRRigidTransform(em_Val_new(em_Val_global("XRRigidTransform", ));
      }


XRRigidTransform XRRigidTransform_new(const DOMPointInit* position) : em_Val(em_Val_global("XRRigidTransform").new_(em_Val_from(position))) {
        return XRRigidTransform(em_Val_new(em_Val_global("XRRigidTransform", em_Val_from(position)));
      }


XRRigidTransform XRRigidTransform_new(const DOMPointInit* position, const DOMPointInit* orientation) : em_Val(em_Val_global("XRRigidTransform").new_(em_Val_from(position), em_Val_from(orientation))) {
        return XRRigidTransform(em_Val_new(em_Val_global("XRRigidTransform", em_Val_from(position), em_Val_from(orientation)));
      }


DOMPointReadOnly XRRigidTransform_position(const XRRigidTransform *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(em_Val_as_val(self->inner), "position"));
}


DOMPointReadOnly XRRigidTransform_orientation(const XRRigidTransform *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(em_Val_as_val(self->inner), "orientation"));
}


jb_Float32Array XRRigidTransform_matrix(const XRRigidTransform *self) {
    return em_Val_as(jb_Float32Array, em_Val_get(em_Val_as_val(self->inner), "matrix"));
}


XRRigidTransform XRRigidTransform_inverse(const XRRigidTransform *self) {
    return em_Val_as(XRRigidTransform, em_Val_get(em_Val_as_val(self->inner), "inverse"));
}

