#include <webcbind/AudioEncoderSupport.h>

DEFINE_EMLITE_TYPE(AudioEncoderSupport, em_Val);


bool AudioEncoderSupport_supported(const AudioEncoderSupport *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("supported")));
}


void AudioEncoderSupport_set_supported(AudioEncoderSupport* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("supported"), em_Val_from(value));
}


AudioEncoderConfig AudioEncoderSupport_config(const AudioEncoderSupport *self) {
    return em_Val_as(AudioEncoderConfig, em_Val_get(em_Val_as_val(self->inner), em_Val_from("config")));
}


void AudioEncoderSupport_set_config(AudioEncoderSupport* self, AudioEncoderConfig * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("config"), em_Val_from(value));
}


AudioEncoderSupport AudioEncoderSupport_new() {
    em_Val obj = em_Val_object();
    return AudioEncoderSupport_from_val(&obj);
}

