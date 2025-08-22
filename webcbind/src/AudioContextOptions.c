#include <webcbind/AudioContextOptions.h>

DEFINE_EMLITE_TYPE(AudioContextOptions, em_Val);


jb_Any AudioContextOptions_latencyHint(const AudioContextOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("latencyHint")));
}


void AudioContextOptions_set_latencyHint(AudioContextOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("latencyHint"), em_Val_from(value));
}


float AudioContextOptions_sampleRate(const AudioContextOptions *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sampleRate")));
}


void AudioContextOptions_set_sampleRate(AudioContextOptions* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sampleRate"), em_Val_from(value));
}


jb_Any AudioContextOptions_sinkId(const AudioContextOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sinkId")));
}


void AudioContextOptions_set_sinkId(AudioContextOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sinkId"), em_Val_from(value));
}


jb_Any AudioContextOptions_renderSizeHint(const AudioContextOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("renderSizeHint")));
}


void AudioContextOptions_set_renderSizeHint(AudioContextOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("renderSizeHint"), em_Val_from(value));
}


AudioContextOptions AudioContextOptions_new() {
    em_Val obj = em_Val_object();
    return AudioContextOptions_from_val(&obj);
}

