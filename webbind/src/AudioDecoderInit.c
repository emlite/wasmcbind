#include <webbind/AudioDecoderInit.h>

DEFINE_EMLITE_TYPE(AudioDecoderInit, em_Val);


jb_Function AudioDecoderInit_output(const AudioDecoderInit *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output")));
}


void AudioDecoderInit_set_output(AudioDecoderInit* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output"), em_Val_from(value));
}


jb_Function AudioDecoderInit_error(const AudioDecoderInit *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("error")));
}


void AudioDecoderInit_set_error(AudioDecoderInit* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


AudioDecoderInit AudioDecoderInit_new() {
    em_Val obj = em_Val_object();
    return AudioDecoderInit_from_val(&obj);
}

