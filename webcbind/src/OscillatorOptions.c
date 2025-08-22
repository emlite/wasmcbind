#include <webcbind/OscillatorOptions.h>

#include <webcbind/PeriodicWave.h>

DEFINE_EMLITE_TYPE(OscillatorOptions, AudioNodeOptions);


OscillatorType OscillatorOptions_type(const OscillatorOptions *self) {
    return em_Val_as(OscillatorType, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("type")));
}


void OscillatorOptions_set_type(OscillatorOptions* self, OscillatorType * value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


float OscillatorOptions_frequency(const OscillatorOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("frequency")));
}


void OscillatorOptions_set_frequency(OscillatorOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("frequency"), em_Val_from(value));
}


float OscillatorOptions_detune(const OscillatorOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("detune")));
}


void OscillatorOptions_set_detune(OscillatorOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("detune"), em_Val_from(value));
}


PeriodicWave OscillatorOptions_periodicWave(const OscillatorOptions *self) {
    return em_Val_as(PeriodicWave, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("periodicWave")));
}


void OscillatorOptions_set_periodicWave(OscillatorOptions* self, PeriodicWave * value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("periodicWave"), em_Val_from(value));
}


OscillatorOptions OscillatorOptions_new() {
    em_Val obj = em_Val_object();
    return OscillatorOptions_from_val(&obj);
}

