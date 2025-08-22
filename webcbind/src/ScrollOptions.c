#include <webcbind/ScrollOptions.h>

DEFINE_EMLITE_TYPE(ScrollOptions, em_Val);


ScrollBehavior ScrollOptions_behavior(const ScrollOptions *self) {
    return em_Val_as(ScrollBehavior, em_Val_get(em_Val_as_val(self->inner), em_Val_from("behavior")));
}


void ScrollOptions_set_behavior(ScrollOptions* self, ScrollBehavior * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("behavior"), em_Val_from(value));
}


ScrollOptions ScrollOptions_new() {
    em_Val obj = em_Val_object();
    return ScrollOptions_from_val(&obj);
}

