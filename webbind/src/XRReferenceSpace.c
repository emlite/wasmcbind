#include <webbind/XRReferenceSpace.h>
#include <webbind/XRRigidTransform.h>


DEFINE_EMLITE_TYPE(XRReferenceSpace, XRSpace);


XRReferenceSpace XRReferenceSpace_getOffsetReferenceSpace(XRReferenceSpace* self , XRRigidTransform * originOffset) {
    return em_Val_as(XRReferenceSpace, em_Val_call(XRSpace_as_val(self->inner), "getOffsetReferenceSpace", em_Val_from(originOffset)));
}


jb_Any XRReferenceSpace_onreset(const XRReferenceSpace *self) {
    return em_Val_as(jb_Any, em_Val_get(XRSpace_as_val(self->inner), em_Val_from("onreset")));
}


void XRReferenceSpace_set_onreset(XRReferenceSpace* self, jb_Any * value) {
    em_Val_set(XRSpace_as_val(self->inner), em_Val_from("onreset"), em_Val_from(value));
}

