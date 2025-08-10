#include <webbind/TransitionEventInit.h>

DEFINE_EMLITE_TYPE(TransitionEventInit, EventInit);


jb_String TransitionEventInit_propertyName(const TransitionEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("propertyName")));
}


void TransitionEventInit_set_propertyName(TransitionEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("propertyName"), em_Val_from(value));
}


double TransitionEventInit_elapsedTime(const TransitionEventInit *self) {
    return em_Val_as(double, em_Val_get(EventInit_as_val(self->inner), em_Val_from("elapsedTime")));
}


void TransitionEventInit_set_elapsedTime(TransitionEventInit* self, double value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("elapsedTime"), em_Val_from(value));
}


jb_String TransitionEventInit_pseudoElement(const TransitionEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("pseudoElement")));
}


void TransitionEventInit_set_pseudoElement(TransitionEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("pseudoElement"), em_Val_from(value));
}


TransitionEventInit TransitionEventInit_new() {
    em_Val obj = em_Val_object();
    return TransitionEventInit_from_val(&obj);
}

