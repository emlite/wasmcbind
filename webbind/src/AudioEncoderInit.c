#include <webbind/AudioEncoderInit.h>

DEFINE_EMLITE_TYPE(AudioEncoderInit, em_Val);


jb_Function AudioEncoderInit_output(const AudioEncoderInit *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output")));
}


void AudioEncoderInit_set_output(AudioEncoderInit* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output"), em_Val_from(value));
}


jb_Function AudioEncoderInit_error(const AudioEncoderInit *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("error")));
}


void AudioEncoderInit_set_error(AudioEncoderInit* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


AudioEncoderInit AudioEncoderInit_new() {
    em_Val obj = em_Val_object();
    return AudioEncoderInit_from_val(&obj);
}

