#include <webbind/AudioDataInit.h>

DEFINE_EMLITE_TYPE(AudioDataInit, em_Val);


AudioSampleFormat AudioDataInit_format(const AudioDataInit *self) {
    return em_Val_as(AudioSampleFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void AudioDataInit_set_format(AudioDataInit* self, AudioSampleFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


float AudioDataInit_sampleRate(const AudioDataInit *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sampleRate")));
}


void AudioDataInit_set_sampleRate(AudioDataInit* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sampleRate"), em_Val_from(value));
}


unsigned long AudioDataInit_numberOfFrames(const AudioDataInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("numberOfFrames")));
}


void AudioDataInit_set_numberOfFrames(AudioDataInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("numberOfFrames"), em_Val_from(value));
}


unsigned long AudioDataInit_numberOfChannels(const AudioDataInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("numberOfChannels")));
}


void AudioDataInit_set_numberOfChannels(AudioDataInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("numberOfChannels"), em_Val_from(value));
}


long long AudioDataInit_timestamp(const AudioDataInit *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestamp")));
}


void AudioDataInit_set_timestamp(AudioDataInit* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timestamp"), em_Val_from(value));
}


jb_Any AudioDataInit_data(const AudioDataInit *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("data")));
}


void AudioDataInit_set_data(AudioDataInit* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("data"), em_Val_from(value));
}


jb_Array AudioDataInit_transfer(const AudioDataInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transfer")));
}


void AudioDataInit_set_transfer(AudioDataInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("transfer"), em_Val_from(value));
}


AudioDataInit AudioDataInit_new() {
    em_Val obj = em_Val_object();
    return AudioDataInit_from_val(&obj);
}

