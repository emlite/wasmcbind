#include <webcbind/AudioDecoderConfig.h>

DEFINE_EMLITE_TYPE(AudioDecoderConfig, em_Val);


jb_String AudioDecoderConfig_codec(const AudioDecoderConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("codec")));
}


void AudioDecoderConfig_set_codec(AudioDecoderConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("codec"), em_Val_from(value));
}


unsigned long AudioDecoderConfig_sampleRate(const AudioDecoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sampleRate")));
}


void AudioDecoderConfig_set_sampleRate(AudioDecoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sampleRate"), em_Val_from(value));
}


unsigned long AudioDecoderConfig_numberOfChannels(const AudioDecoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("numberOfChannels")));
}


void AudioDecoderConfig_set_numberOfChannels(AudioDecoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("numberOfChannels"), em_Val_from(value));
}


jb_Any AudioDecoderConfig_description(const AudioDecoderConfig *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("description")));
}


void AudioDecoderConfig_set_description(AudioDecoderConfig* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("description"), em_Val_from(value));
}


AudioDecoderConfig AudioDecoderConfig_new() {
    em_Val obj = em_Val_object();
    return AudioDecoderConfig_from_val(&obj);
}

