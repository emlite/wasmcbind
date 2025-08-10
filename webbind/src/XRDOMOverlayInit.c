#include <webbind/XRDOMOverlayInit.h>

#include <webbind/Element.h>

DEFINE_EMLITE_TYPE(XRDOMOverlayInit, em_Val);


Element XRDOMOverlayInit_root(const XRDOMOverlayInit *self) {
    return em_Val_as(Element, em_Val_get(em_Val_as_val(self->inner), em_Val_from("root")));
}


void XRDOMOverlayInit_set_root(XRDOMOverlayInit* self, Element * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("root"), em_Val_from(value));
}


XRDOMOverlayInit XRDOMOverlayInit_new() {
    em_Val obj = em_Val_object();
    return XRDOMOverlayInit_from_val(&obj);
}

