#include <webbind/FocusEventInit.h>

#include <webbind/EventTarget.h>

DEFINE_EMLITE_TYPE(FocusEventInit, UIEventInit);


EventTarget FocusEventInit_relatedTarget(const FocusEventInit *self) {
    return em_Val_as(EventTarget, em_Val_get(UIEventInit_as_val(self->inner), em_Val_from("relatedTarget")));
}


void FocusEventInit_set_relatedTarget(FocusEventInit* self, EventTarget * value) {
    em_Val_set(UIEventInit_as_val(self->inner), em_Val_from("relatedTarget"), em_Val_from(value));
}


FocusEventInit FocusEventInit_new() {
    em_Val obj = em_Val_object();
    return FocusEventInit_from_val(&obj);
}

