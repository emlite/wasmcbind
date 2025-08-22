#include <webcbind/CapturedMouseEventInit.h>

DEFINE_EMLITE_TYPE(CapturedMouseEventInit, EventInit);


long CapturedMouseEventInit_surfaceX(const CapturedMouseEventInit *self) {
    return em_Val_as(long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("surfaceX")));
}


void CapturedMouseEventInit_set_surfaceX(CapturedMouseEventInit* self, long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("surfaceX"), em_Val_from(value));
}


long CapturedMouseEventInit_surfaceY(const CapturedMouseEventInit *self) {
    return em_Val_as(long, em_Val_get(EventInit_as_val(self->inner), em_Val_from("surfaceY")));
}


void CapturedMouseEventInit_set_surfaceY(CapturedMouseEventInit* self, long value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("surfaceY"), em_Val_from(value));
}


CapturedMouseEventInit CapturedMouseEventInit_new() {
    em_Val obj = em_Val_object();
    return CapturedMouseEventInit_from_val(&obj);
}

