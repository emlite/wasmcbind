#include <webcbind/AudioEncoderConfig.h>

DEFINE_EMLITE_TYPE(AudioEncoderConfig, em_Val);


jb_String AudioEncoderConfig_codec(const AudioEncoderConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("codec")));
}


void AudioEncoderConfig_set_codec(AudioEncoderConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("codec"), em_Val_from(value));
}


unsigned long AudioEncoderConfig_sampleRate(const AudioEncoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sampleRate")));
}


void AudioEncoderConfig_set_sampleRate(AudioEncoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sampleRate"), em_Val_from(value));
}


unsigned long AudioEncoderConfig_numberOfChannels(const AudioEncoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("numberOfChannels")));
}


void AudioEncoderConfig_set_numberOfChannels(AudioEncoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("numberOfChannels"), em_Val_from(value));
}


long long AudioEncoderConfig_bitrate(const AudioEncoderConfig *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bitrate")));
}


void AudioEncoderConfig_set_bitrate(AudioEncoderConfig* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bitrate"), em_Val_from(value));
}


BitrateMode AudioEncoderConfig_bitrateMode(const AudioEncoderConfig *self) {
    return em_Val_as(BitrateMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bitrateMode")));
}


void AudioEncoderConfig_set_bitrateMode(AudioEncoderConfig* self, BitrateMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bitrateMode"), em_Val_from(value));
}


AudioEncoderConfig AudioEncoderConfig_new() {
    em_Val obj = em_Val_object();
    return AudioEncoderConfig_from_val(&obj);
}

