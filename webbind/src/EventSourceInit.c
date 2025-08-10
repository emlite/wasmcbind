#include <webbind/EventSourceInit.h>

DEFINE_EMLITE_TYPE(EventSourceInit, em_Val);


bool EventSourceInit_withCredentials(const EventSourceInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("withCredentials")));
}


void EventSourceInit_set_withCredentials(EventSourceInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("withCredentials"), em_Val_from(value));
}


EventSourceInit EventSourceInit_new() {
    em_Val obj = em_Val_object();
    return EventSourceInit_from_val(&obj);
}

