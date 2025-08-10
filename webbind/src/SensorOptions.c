#include <webbind/SensorOptions.h>

DEFINE_EMLITE_TYPE(SensorOptions, em_Val);


double SensorOptions_frequency(const SensorOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("frequency")));
}


void SensorOptions_set_frequency(SensorOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("frequency"), em_Val_from(value));
}


SensorOptions SensorOptions_new() {
    em_Val obj = em_Val_object();
    return SensorOptions_from_val(&obj);
}

