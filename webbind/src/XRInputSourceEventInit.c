#include <webbind/XRInputSourceEventInit.h>

#include <webbind/XRFrame.h>
#include <webbind/XRInputSource.h>

DEFINE_EMLITE_TYPE(XRInputSourceEventInit, EventInit);


XRFrame XRInputSourceEventInit_frame(const XRInputSourceEventInit *self) {
    return em_Val_as(XRFrame, em_Val_get(EventInit_as_val(self->inner), em_Val_from("frame")));
}


void XRInputSourceEventInit_set_frame(XRInputSourceEventInit* self, XRFrame * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("frame"), em_Val_from(value));
}


XRInputSource XRInputSourceEventInit_inputSource(const XRInputSourceEventInit *self) {
    return em_Val_as(XRInputSource, em_Val_get(EventInit_as_val(self->inner), em_Val_from("inputSource")));
}


void XRInputSourceEventInit_set_inputSource(XRInputSourceEventInit* self, XRInputSource * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("inputSource"), em_Val_from(value));
}


XRInputSourceEventInit XRInputSourceEventInit_new() {
    em_Val obj = em_Val_object();
    return XRInputSourceEventInit_from_val(&obj);
}

