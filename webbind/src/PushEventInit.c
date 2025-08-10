#include <webbind/PushEventInit.h>

DEFINE_EMLITE_TYPE(PushEventInit, ExtendableEventInit);


jb_Any PushEventInit_data(const PushEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("data")));
}


void PushEventInit_set_data(PushEventInit* self, jb_Any * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


PushEventInit PushEventInit_new() {
    em_Val obj = em_Val_object();
    return PushEventInit_from_val(&obj);
}

