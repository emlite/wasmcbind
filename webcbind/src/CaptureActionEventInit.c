#include <webcbind/CaptureActionEventInit.h>

DEFINE_EMLITE_TYPE(CaptureActionEventInit, EventInit);


jb_String CaptureActionEventInit_action(const CaptureActionEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("action")));
}


void CaptureActionEventInit_set_action(CaptureActionEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("action"), em_Val_from(value));
}


CaptureActionEventInit CaptureActionEventInit_new() {
    em_Val obj = em_Val_object();
    return CaptureActionEventInit_from_val(&obj);
}

