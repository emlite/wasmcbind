#include <webcbind/PeriodicWaveOptions.h>

DEFINE_EMLITE_TYPE(PeriodicWaveOptions, PeriodicWaveConstraints);


jb_Array PeriodicWaveOptions_real(const PeriodicWaveOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(PeriodicWaveConstraints_as_val(self->inner), em_Val_from("real")));
}


void PeriodicWaveOptions_set_real(PeriodicWaveOptions* self, jb_Array * value) {
    em_Val_set(PeriodicWaveConstraints_as_val(self->inner), em_Val_from("real"), em_Val_from(value));
}


jb_Array PeriodicWaveOptions_imag(const PeriodicWaveOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(PeriodicWaveConstraints_as_val(self->inner), em_Val_from("imag")));
}


void PeriodicWaveOptions_set_imag(PeriodicWaveOptions* self, jb_Array * value) {
    em_Val_set(PeriodicWaveConstraints_as_val(self->inner), em_Val_from("imag"), em_Val_from(value));
}


PeriodicWaveOptions PeriodicWaveOptions_new() {
    em_Val obj = em_Val_object();
    return PeriodicWaveOptions_from_val(&obj);
}

