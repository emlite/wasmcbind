#include <webcbind/GainOptions.h>

DEFINE_EMLITE_TYPE(GainOptions, AudioNodeOptions);


float GainOptions_gain(const GainOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("gain")));
}


void GainOptions_set_gain(GainOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("gain"), em_Val_from(value));
}


GainOptions GainOptions_new() {
    em_Val obj = em_Val_object();
    return GainOptions_from_val(&obj);
}

