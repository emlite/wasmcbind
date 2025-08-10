#include <webbind/AudioSinkOptions.h>

DEFINE_EMLITE_TYPE(AudioSinkOptions, em_Val);


AudioSinkType AudioSinkOptions_type(const AudioSinkOptions *self) {
    return em_Val_as(AudioSinkType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void AudioSinkOptions_set_type(AudioSinkOptions* self, AudioSinkType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


AudioSinkOptions AudioSinkOptions_new() {
    em_Val obj = em_Val_object();
    return AudioSinkOptions_from_val(&obj);
}

