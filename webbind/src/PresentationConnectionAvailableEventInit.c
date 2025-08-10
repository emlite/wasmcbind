#include <webbind/PresentationConnectionAvailableEventInit.h>

#include <webbind/PresentationConnection.h>

DEFINE_EMLITE_TYPE(PresentationConnectionAvailableEventInit, EventInit);


PresentationConnection PresentationConnectionAvailableEventInit_connection(const PresentationConnectionAvailableEventInit *self) {
    return em_Val_as(PresentationConnection, em_Val_get(EventInit_as_val(self->inner), em_Val_from("connection")));
}


void PresentationConnectionAvailableEventInit_set_connection(PresentationConnectionAvailableEventInit* self, PresentationConnection * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("connection"), em_Val_from(value));
}


PresentationConnectionAvailableEventInit PresentationConnectionAvailableEventInit_new() {
    em_Val obj = em_Val_object();
    return PresentationConnectionAvailableEventInit_from_val(&obj);
}

