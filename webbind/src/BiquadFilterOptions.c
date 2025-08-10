#include <webbind/BiquadFilterOptions.h>

DEFINE_EMLITE_TYPE(BiquadFilterOptions, AudioNodeOptions);


BiquadFilterType BiquadFilterOptions_type(const BiquadFilterOptions *self) {
    return em_Val_as(BiquadFilterType, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("type")));
}


void BiquadFilterOptions_set_type(BiquadFilterOptions* self, BiquadFilterType * value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


float BiquadFilterOptions_Q(const BiquadFilterOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("Q")));
}


void BiquadFilterOptions_set_Q(BiquadFilterOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("Q"), em_Val_from(value));
}


float BiquadFilterOptions_detune(const BiquadFilterOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("detune")));
}


void BiquadFilterOptions_set_detune(BiquadFilterOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("detune"), em_Val_from(value));
}


float BiquadFilterOptions_frequency(const BiquadFilterOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("frequency")));
}


void BiquadFilterOptions_set_frequency(BiquadFilterOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("frequency"), em_Val_from(value));
}


float BiquadFilterOptions_gain(const BiquadFilterOptions *self) {
    return em_Val_as(float, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("gain")));
}


void BiquadFilterOptions_set_gain(BiquadFilterOptions* self, float value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("gain"), em_Val_from(value));
}


BiquadFilterOptions BiquadFilterOptions_new() {
    em_Val obj = em_Val_object();
    return BiquadFilterOptions_from_val(&obj);
}

