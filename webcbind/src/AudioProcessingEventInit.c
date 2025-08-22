#include <webcbind/AudioProcessingEventInit.h>

#include <webcbind/AudioBuffer.h>

DEFINE_EMLITE_TYPE(AudioProcessingEventInit, EventInit);


double AudioProcessingEventInit_playbackTime(const AudioProcessingEventInit *self) {
    return em_Val_as(double, em_Val_get(EventInit_as_val(self->inner), em_Val_from("playbackTime")));
}


void AudioProcessingEventInit_set_playbackTime(AudioProcessingEventInit* self, double value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("playbackTime"), em_Val_from(value));
}


AudioBuffer AudioProcessingEventInit_inputBuffer(const AudioProcessingEventInit *self) {
    return em_Val_as(AudioBuffer, em_Val_get(EventInit_as_val(self->inner), em_Val_from("inputBuffer")));
}


void AudioProcessingEventInit_set_inputBuffer(AudioProcessingEventInit* self, AudioBuffer * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("inputBuffer"), em_Val_from(value));
}


AudioBuffer AudioProcessingEventInit_outputBuffer(const AudioProcessingEventInit *self) {
    return em_Val_as(AudioBuffer, em_Val_get(EventInit_as_val(self->inner), em_Val_from("outputBuffer")));
}


void AudioProcessingEventInit_set_outputBuffer(AudioProcessingEventInit* self, AudioBuffer * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("outputBuffer"), em_Val_from(value));
}


AudioProcessingEventInit AudioProcessingEventInit_new() {
    em_Val obj = em_Val_object();
    return AudioProcessingEventInit_from_val(&obj);
}

