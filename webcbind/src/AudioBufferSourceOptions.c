#include <webcbind/AudioBufferSourceOptions.h>

#include <webcbind/AudioBuffer.h>

DEFINE_EMLITE_TYPE(AudioBufferSourceOptions, em_Val);


AudioBuffer AudioBufferSourceOptions_buffer(const AudioBufferSourceOptions *self) {
    return em_Val_as(AudioBuffer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("buffer")));
}


void AudioBufferSourceOptions_set_buffer(AudioBufferSourceOptions* self, AudioBuffer * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("buffer"), em_Val_from(value));
}


float AudioBufferSourceOptions_detune(const AudioBufferSourceOptions *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("detune")));
}


void AudioBufferSourceOptions_set_detune(AudioBufferSourceOptions* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("detune"), em_Val_from(value));
}


bool AudioBufferSourceOptions_loop(const AudioBufferSourceOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("loop")));
}


void AudioBufferSourceOptions_set_loop(AudioBufferSourceOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("loop"), em_Val_from(value));
}


double AudioBufferSourceOptions_loopEnd(const AudioBufferSourceOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("loopEnd")));
}


void AudioBufferSourceOptions_set_loopEnd(AudioBufferSourceOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("loopEnd"), em_Val_from(value));
}


double AudioBufferSourceOptions_loopStart(const AudioBufferSourceOptions *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("loopStart")));
}


void AudioBufferSourceOptions_set_loopStart(AudioBufferSourceOptions* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("loopStart"), em_Val_from(value));
}


float AudioBufferSourceOptions_playbackRate(const AudioBufferSourceOptions *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("playbackRate")));
}


void AudioBufferSourceOptions_set_playbackRate(AudioBufferSourceOptions* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("playbackRate"), em_Val_from(value));
}


AudioBufferSourceOptions AudioBufferSourceOptions_new() {
    em_Val obj = em_Val_object();
    return AudioBufferSourceOptions_from_val(&obj);
}

