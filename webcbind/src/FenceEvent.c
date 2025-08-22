#include <webcbind/FenceEvent.h>

DEFINE_EMLITE_TYPE(FenceEvent, em_Val);


jb_String FenceEvent_eventType(const FenceEvent *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("eventType")));
}


void FenceEvent_set_eventType(FenceEvent* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("eventType"), em_Val_from(value));
}


jb_String FenceEvent_eventData(const FenceEvent *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("eventData")));
}


void FenceEvent_set_eventData(FenceEvent* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("eventData"), em_Val_from(value));
}


jb_Array FenceEvent_destination(const FenceEvent *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("destination")));
}


void FenceEvent_set_destination(FenceEvent* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("destination"), em_Val_from(value));
}


bool FenceEvent_crossOriginExposed(const FenceEvent *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("crossOriginExposed")));
}


void FenceEvent_set_crossOriginExposed(FenceEvent* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("crossOriginExposed"), em_Val_from(value));
}


bool FenceEvent_once(const FenceEvent *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("once")));
}


void FenceEvent_set_once(FenceEvent* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("once"), em_Val_from(value));
}


jb_String FenceEvent_destinationURL(const FenceEvent *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("destinationURL")));
}


void FenceEvent_set_destinationURL(FenceEvent* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("destinationURL"), em_Val_from(value));
}


FenceEvent FenceEvent_new() {
    em_Val obj = em_Val_object();
    return FenceEvent_from_val(&obj);
}

