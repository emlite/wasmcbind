#include <webbind/ExtendableMessageEventInit.h>

#include <webbind/MessagePort.h>

DEFINE_EMLITE_TYPE(ExtendableMessageEventInit, ExtendableEventInit);


jb_Any ExtendableMessageEventInit_data(const ExtendableMessageEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("data")));
}


void ExtendableMessageEventInit_set_data(ExtendableMessageEventInit* self, jb_Any * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


jb_String ExtendableMessageEventInit_origin(const ExtendableMessageEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("origin")));
}


void ExtendableMessageEventInit_set_origin(ExtendableMessageEventInit* self, jb_String * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("origin"), em_Val_from(value));
}


jb_String ExtendableMessageEventInit_lastEventId(const ExtendableMessageEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("lastEventId")));
}


void ExtendableMessageEventInit_set_lastEventId(ExtendableMessageEventInit* self, jb_String * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("lastEventId"), em_Val_from(value));
}


jb_Any ExtendableMessageEventInit_source(const ExtendableMessageEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("source")));
}


void ExtendableMessageEventInit_set_source(ExtendableMessageEventInit* self, jb_Any * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("source"), em_Val_from(value));
}


jb_Array ExtendableMessageEventInit_ports(const ExtendableMessageEventInit *self) {
    return em_Val_as(jb_Array, em_Val_get(ExtendableEventInit_as_val(self->inner), em_Val_from("ports")));
}


void ExtendableMessageEventInit_set_ports(ExtendableMessageEventInit* self, jb_Array * value) {
    em_Val_set(ExtendableEventInit_as_val(self->inner), em_Val_from("ports"), em_Val_from(value));
}


ExtendableMessageEventInit ExtendableMessageEventInit_new() {
    em_Val obj = em_Val_object();
    return ExtendableMessageEventInit_from_val(&obj);
}

