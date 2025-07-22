#include <webbind/XRBoundedReferenceSpace.h>
#include <webbind/DOMPointReadOnly.h>


DEFINE_EMLITE_TYPE(XRBoundedReferenceSpace, XRReferenceSpace);


jb_FrozenArray XRBoundedReferenceSpace_boundsGeometry(const XRBoundedReferenceSpace *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(XRReferenceSpace_as_val(self->inner), em_Val_from("boundsGeometry")));
}

