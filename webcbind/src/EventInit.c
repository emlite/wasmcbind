#include <webcbind/EventInit.h>

DEFINE_EMLITE_TYPE(EventInit, em_Val);


bool EventInit_bubbles(const EventInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bubbles")));
}


void EventInit_set_bubbles(EventInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bubbles"), em_Val_from(value));
}


bool EventInit_cancelable(const EventInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cancelable")));
}


void EventInit_set_cancelable(EventInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cancelable"), em_Val_from(value));
}


bool EventInit_composed(const EventInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("composed")));
}


void EventInit_set_composed(EventInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("composed"), em_Val_from(value));
}


EventInit EventInit_new() {
    em_Val obj = em_Val_object();
    return EventInit_from_val(&obj);
}

