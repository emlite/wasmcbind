#include <webcbind/DeferredRequestInit.h>

DEFINE_EMLITE_TYPE(DeferredRequestInit, RequestInit);


jb_Any DeferredRequestInit_activateAfter(const DeferredRequestInit *self) {
    return em_Val_as(jb_Any, em_Val_get(RequestInit_as_val(self->inner), em_Val_from("activateAfter")));
}


void DeferredRequestInit_set_activateAfter(DeferredRequestInit* self, jb_Any * value) {
    em_Val_set(RequestInit_as_val(self->inner), em_Val_from("activateAfter"), em_Val_from(value));
}


DeferredRequestInit DeferredRequestInit_new() {
    em_Val obj = em_Val_object();
    return DeferredRequestInit_from_val(&obj);
}

