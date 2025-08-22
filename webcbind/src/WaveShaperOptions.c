#include <webcbind/WaveShaperOptions.h>

DEFINE_EMLITE_TYPE(WaveShaperOptions, AudioNodeOptions);


jb_Array WaveShaperOptions_curve(const WaveShaperOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("curve")));
}


void WaveShaperOptions_set_curve(WaveShaperOptions* self, jb_Array * value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("curve"), em_Val_from(value));
}


OverSampleType WaveShaperOptions_oversample(const WaveShaperOptions *self) {
    return em_Val_as(OverSampleType, em_Val_get(AudioNodeOptions_as_val(self->inner), em_Val_from("oversample")));
}


void WaveShaperOptions_set_oversample(WaveShaperOptions* self, OverSampleType * value) {
    em_Val_set(AudioNodeOptions_as_val(self->inner), em_Val_from("oversample"), em_Val_from(value));
}


WaveShaperOptions WaveShaperOptions_new() {
    em_Val obj = em_Val_object();
    return WaveShaperOptions_from_val(&obj);
}

