#include <webcbind/ObservableEventListenerOptions.h>

DEFINE_EMLITE_TYPE(ObservableEventListenerOptions, em_Val);


bool ObservableEventListenerOptions_capture(const ObservableEventListenerOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("capture")));
}


void ObservableEventListenerOptions_set_capture(ObservableEventListenerOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("capture"), em_Val_from(value));
}


bool ObservableEventListenerOptions_passive(const ObservableEventListenerOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("passive")));
}


void ObservableEventListenerOptions_set_passive(ObservableEventListenerOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("passive"), em_Val_from(value));
}


ObservableEventListenerOptions ObservableEventListenerOptions_new() {
    em_Val obj = em_Val_object();
    return ObservableEventListenerOptions_from_val(&obj);
}

