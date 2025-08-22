#include <webcbind/XRBoundedReferenceSpace.h>

#include <webcbind/DOMPointReadOnly.h>

DEFINE_EMLITE_TYPE(XRBoundedReferenceSpace, XRReferenceSpace);


jb_Array XRBoundedReferenceSpace_boundsGeometry(const XRBoundedReferenceSpace *self) {
    return em_Val_as(jb_Array, em_Val_get(XRReferenceSpace_as_val(self->inner), em_Val_from("boundsGeometry")));
}

