#include <webbind/AudioBufferOptions.h>

DEFINE_EMLITE_TYPE(AudioBufferOptions, em_Val);


unsigned long AudioBufferOptions_numberOfChannels(const AudioBufferOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("numberOfChannels")));
}


void AudioBufferOptions_set_numberOfChannels(AudioBufferOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("numberOfChannels"), em_Val_from(value));
}


unsigned long AudioBufferOptions_length(const AudioBufferOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


void AudioBufferOptions_set_length(AudioBufferOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("length"), em_Val_from(value));
}


float AudioBufferOptions_sampleRate(const AudioBufferOptions *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sampleRate")));
}


void AudioBufferOptions_set_sampleRate(AudioBufferOptions* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sampleRate"), em_Val_from(value));
}


AudioBufferOptions AudioBufferOptions_new() {
    em_Val obj = em_Val_object();
    return AudioBufferOptions_from_val(&obj);
}

