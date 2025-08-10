#include <webbind/PressureObserverOptions.h>

DEFINE_EMLITE_TYPE(PressureObserverOptions, em_Val);


unsigned long PressureObserverOptions_sampleInterval(const PressureObserverOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sampleInterval")));
}


void PressureObserverOptions_set_sampleInterval(PressureObserverOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sampleInterval"), em_Val_from(value));
}


PressureObserverOptions PressureObserverOptions_new() {
    em_Val obj = em_Val_object();
    return PressureObserverOptions_from_val(&obj);
}

