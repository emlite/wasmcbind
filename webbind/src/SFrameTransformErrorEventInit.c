#include <webbind/SFrameTransformErrorEventInit.h>

DEFINE_EMLITE_TYPE(SFrameTransformErrorEventInit, EventInit);


SFrameTransformErrorEventType SFrameTransformErrorEventInit_errorType(const SFrameTransformErrorEventInit *self) {
    return em_Val_as(SFrameTransformErrorEventType, em_Val_get(EventInit_as_val(self->inner), em_Val_from("errorType")));
}


void SFrameTransformErrorEventInit_set_errorType(SFrameTransformErrorEventInit* self, SFrameTransformErrorEventType * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("errorType"), em_Val_from(value));
}


jb_Any SFrameTransformErrorEventInit_frame(const SFrameTransformErrorEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(EventInit_as_val(self->inner), em_Val_from("frame")));
}


void SFrameTransformErrorEventInit_set_frame(SFrameTransformErrorEventInit* self, jb_Any * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("frame"), em_Val_from(value));
}


jb_Any SFrameTransformErrorEventInit_keyID(const SFrameTransformErrorEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(EventInit_as_val(self->inner), em_Val_from("keyID")));
}


void SFrameTransformErrorEventInit_set_keyID(SFrameTransformErrorEventInit* self, jb_Any * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("keyID"), em_Val_from(value));
}


SFrameTransformErrorEventInit SFrameTransformErrorEventInit_new() {
    em_Val obj = em_Val_object();
    return SFrameTransformErrorEventInit_from_val(&obj);
}

