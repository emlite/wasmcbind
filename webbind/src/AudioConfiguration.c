#include <webbind/AudioConfiguration.h>

DEFINE_EMLITE_TYPE(AudioConfiguration, em_Val);


jb_String AudioConfiguration_contentType(const AudioConfiguration *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("contentType")));
}


void AudioConfiguration_set_contentType(AudioConfiguration* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("contentType"), em_Val_from(value));
}


jb_String AudioConfiguration_channels(const AudioConfiguration *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("channels")));
}


void AudioConfiguration_set_channels(AudioConfiguration* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("channels"), em_Val_from(value));
}


long long AudioConfiguration_bitrate(const AudioConfiguration *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bitrate")));
}


void AudioConfiguration_set_bitrate(AudioConfiguration* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bitrate"), em_Val_from(value));
}


unsigned long AudioConfiguration_samplerate(const AudioConfiguration *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("samplerate")));
}


void AudioConfiguration_set_samplerate(AudioConfiguration* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("samplerate"), em_Val_from(value));
}


bool AudioConfiguration_spatialRendering(const AudioConfiguration *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("spatialRendering")));
}


void AudioConfiguration_set_spatialRendering(AudioConfiguration* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("spatialRendering"), em_Val_from(value));
}


AudioConfiguration AudioConfiguration_new() {
    em_Val obj = em_Val_object();
    return AudioConfiguration_from_val(&obj);
}

