#include <webcbind/PromiseRejectionEventInit.h>

DEFINE_EMLITE_TYPE(PromiseRejectionEventInit, EventInit);


jb_Object PromiseRejectionEventInit_promise(const PromiseRejectionEventInit *self) {
    return em_Val_as(jb_Object, em_Val_get(EventInit_as_val(self->inner), em_Val_from("promise")));
}


void PromiseRejectionEventInit_set_promise(PromiseRejectionEventInit* self, jb_Object * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("promise"), em_Val_from(value));
}


jb_Any PromiseRejectionEventInit_reason(const PromiseRejectionEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(EventInit_as_val(self->inner), em_Val_from("reason")));
}


void PromiseRejectionEventInit_set_reason(PromiseRejectionEventInit* self, jb_Any * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("reason"), em_Val_from(value));
}


PromiseRejectionEventInit PromiseRejectionEventInit_new() {
    em_Val obj = em_Val_object();
    return PromiseRejectionEventInit_from_val(&obj);
}

