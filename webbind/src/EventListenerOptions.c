#include <webbind/EventListenerOptions.h>

DEFINE_EMLITE_TYPE(EventListenerOptions, em_Val);


bool EventListenerOptions_capture(const EventListenerOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("capture")));
}


void EventListenerOptions_set_capture(EventListenerOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("capture"), em_Val_from(value));
}


EventListenerOptions EventListenerOptions_new() {
    em_Val obj = em_Val_object();
    return EventListenerOptions_from_val(&obj);
}

