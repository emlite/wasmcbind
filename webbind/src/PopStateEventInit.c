#include <webbind/PopStateEventInit.h>

DEFINE_EMLITE_TYPE(PopStateEventInit, EventInit);


jb_Any PopStateEventInit_state(const PopStateEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(EventInit_as_val(self->inner), em_Val_from("state")));
}


void PopStateEventInit_set_state(PopStateEventInit* self, jb_Any * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("state"), em_Val_from(value));
}


bool PopStateEventInit_hasUAVisualTransition(const PopStateEventInit *self) {
    return em_Val_as(bool, em_Val_get(EventInit_as_val(self->inner), em_Val_from("hasUAVisualTransition")));
}


void PopStateEventInit_set_hasUAVisualTransition(PopStateEventInit* self, bool value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("hasUAVisualTransition"), em_Val_from(value));
}


PopStateEventInit PopStateEventInit_new() {
    em_Val obj = em_Val_object();
    return PopStateEventInit_from_val(&obj);
}

