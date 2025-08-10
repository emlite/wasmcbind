#include <webbind/MessageEventInit.h>

#include <webbind/MessagePort.h>

DEFINE_EMLITE_TYPE(MessageEventInit, EventInit);


jb_Any MessageEventInit_data(const MessageEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(EventInit_as_val(self->inner), em_Val_from("data")));
}


void MessageEventInit_set_data(MessageEventInit* self, jb_Any * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


jb_String MessageEventInit_origin(const MessageEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("origin")));
}


void MessageEventInit_set_origin(MessageEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("origin"), em_Val_from(value));
}


jb_String MessageEventInit_lastEventId(const MessageEventInit *self) {
    return em_Val_as(jb_String, em_Val_get(EventInit_as_val(self->inner), em_Val_from("lastEventId")));
}


void MessageEventInit_set_lastEventId(MessageEventInit* self, jb_String * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("lastEventId"), em_Val_from(value));
}


jb_Any MessageEventInit_source(const MessageEventInit *self) {
    return em_Val_as(jb_Any, em_Val_get(EventInit_as_val(self->inner), em_Val_from("source")));
}


void MessageEventInit_set_source(MessageEventInit* self, jb_Any * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("source"), em_Val_from(value));
}


jb_Array MessageEventInit_ports(const MessageEventInit *self) {
    return em_Val_as(jb_Array, em_Val_get(EventInit_as_val(self->inner), em_Val_from("ports")));
}


void MessageEventInit_set_ports(MessageEventInit* self, jb_Array * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("ports"), em_Val_from(value));
}


MessageEventInit MessageEventInit_new() {
    em_Val obj = em_Val_object();
    return MessageEventInit_from_val(&obj);
}

