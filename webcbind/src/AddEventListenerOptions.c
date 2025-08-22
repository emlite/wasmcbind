#include <webcbind/AddEventListenerOptions.h>

#include <webcbind/AbortSignal.h>

DEFINE_EMLITE_TYPE(AddEventListenerOptions, EventListenerOptions);


bool AddEventListenerOptions_passive(const AddEventListenerOptions *self) {
    return em_Val_as(bool, em_Val_get(EventListenerOptions_as_val(self->inner), em_Val_from("passive")));
}


void AddEventListenerOptions_set_passive(AddEventListenerOptions* self, bool value) {
    em_Val_set(EventListenerOptions_as_val(self->inner), em_Val_from("passive"), em_Val_from(value));
}


bool AddEventListenerOptions_once(const AddEventListenerOptions *self) {
    return em_Val_as(bool, em_Val_get(EventListenerOptions_as_val(self->inner), em_Val_from("once")));
}


void AddEventListenerOptions_set_once(AddEventListenerOptions* self, bool value) {
    em_Val_set(EventListenerOptions_as_val(self->inner), em_Val_from("once"), em_Val_from(value));
}


AbortSignal AddEventListenerOptions_signal(const AddEventListenerOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(EventListenerOptions_as_val(self->inner), em_Val_from("signal")));
}


void AddEventListenerOptions_set_signal(AddEventListenerOptions* self, AbortSignal * value) {
    em_Val_set(EventListenerOptions_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}


AddEventListenerOptions AddEventListenerOptions_new() {
    em_Val obj = em_Val_object();
    return AddEventListenerOptions_from_val(&obj);
}

