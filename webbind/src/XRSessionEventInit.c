#include <webbind/XRSessionEventInit.h>

#include <webbind/XRSession.h>

DEFINE_EMLITE_TYPE(XRSessionEventInit, EventInit);


XRSession XRSessionEventInit_session(const XRSessionEventInit *self) {
    return em_Val_as(XRSession, em_Val_get(EventInit_as_val(self->inner), em_Val_from("session")));
}


void XRSessionEventInit_set_session(XRSessionEventInit* self, XRSession * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("session"), em_Val_from(value));
}


XRSessionEventInit XRSessionEventInit_new() {
    em_Val obj = em_Val_object();
    return XRSessionEventInit_from_val(&obj);
}

