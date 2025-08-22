#include <webcbind/PresentationConnectionCloseEventInit.h>

DEFINE_EMLITE_TYPE(PresentationConnectionCloseEventInit, EventInit);


PresentationConnectionCloseReason PresentationConnectionCloseEventInit_reason(const PresentationConnectionCloseEventInit *self) {
    return em_Val_as(PresentationConnectionCloseReason, em_Val_get(EventInit_as_val(self->inner), em_Val_from("reason")));
}


void PresentationConnectionCloseEventInit_set_reason(PresentationConnectionCloseEventInit* self, PresentationConnectionCloseReason * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("reason"), em_Val_from(value));
}


jb_String PresentationConnectionCloseEventInit_message(const PresentationConnectionCloseEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("message")));
}


void PresentationConnectionCloseEventInit_set_message(PresentationConnectionCloseEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("message"), em_Val_from(value));
}


PresentationConnectionCloseEventInit PresentationConnectionCloseEventInit_new() {
    em_Val obj = em_Val_object();
    return PresentationConnectionCloseEventInit_from_val(&obj);
}

