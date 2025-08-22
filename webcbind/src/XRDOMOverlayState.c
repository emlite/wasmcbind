#include <webcbind/XRDOMOverlayState.h>

DEFINE_EMLITE_TYPE(XRDOMOverlayState, em_Val);


XRDOMOverlayType XRDOMOverlayState_type(const XRDOMOverlayState *self) {
    return em_Val_as(XRDOMOverlayType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void XRDOMOverlayState_set_type(XRDOMOverlayState* self, XRDOMOverlayType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


XRDOMOverlayState XRDOMOverlayState_new() {
    em_Val obj = em_Val_object();
    return XRDOMOverlayState_from_val(&obj);
}

