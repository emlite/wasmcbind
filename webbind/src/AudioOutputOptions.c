#include <webbind/AudioOutputOptions.h>

DEFINE_EMLITE_TYPE(AudioOutputOptions, em_Val);


jb_String AudioOutputOptions_deviceId(const AudioOutputOptions *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("deviceId")));
}


void AudioOutputOptions_set_deviceId(AudioOutputOptions* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("deviceId"), em_Val_from(value));
}


AudioOutputOptions AudioOutputOptions_new() {
    em_Val obj = em_Val_object();
    return AudioOutputOptions_from_val(&obj);
}

