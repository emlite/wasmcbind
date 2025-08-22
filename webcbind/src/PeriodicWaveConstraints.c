#include <webcbind/PeriodicWaveConstraints.h>

DEFINE_EMLITE_TYPE(PeriodicWaveConstraints, em_Val);


bool PeriodicWaveConstraints_disableNormalization(const PeriodicWaveConstraints *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("disableNormalization")));
}


void PeriodicWaveConstraints_set_disableNormalization(PeriodicWaveConstraints* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("disableNormalization"), em_Val_from(value));
}


PeriodicWaveConstraints PeriodicWaveConstraints_new() {
    em_Val obj = em_Val_object();
    return PeriodicWaveConstraints_from_val(&obj);
}

