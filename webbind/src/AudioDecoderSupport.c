#include <webbind/AudioDecoderSupport.h>

DEFINE_EMLITE_TYPE(AudioDecoderSupport, em_Val);


bool AudioDecoderSupport_supported(const AudioDecoderSupport *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("supported")));
}


void AudioDecoderSupport_set_supported(AudioDecoderSupport* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("supported"), em_Val_from(value));
}


AudioDecoderConfig AudioDecoderSupport_config(const AudioDecoderSupport *self) {
    return em_Val_as(AudioDecoderConfig, em_Val_get(em_Val_as_val(self->inner), em_Val_from("config")));
}


void AudioDecoderSupport_set_config(AudioDecoderSupport* self, AudioDecoderConfig * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("config"), em_Val_from(value));
}


AudioDecoderSupport AudioDecoderSupport_new() {
    em_Val obj = em_Val_object();
    return AudioDecoderSupport_from_val(&obj);
}

