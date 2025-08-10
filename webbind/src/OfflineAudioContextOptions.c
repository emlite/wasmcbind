#include <webbind/OfflineAudioContextOptions.h>

DEFINE_EMLITE_TYPE(OfflineAudioContextOptions, em_Val);


unsigned long OfflineAudioContextOptions_numberOfChannels(const OfflineAudioContextOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("numberOfChannels")));
}


void OfflineAudioContextOptions_set_numberOfChannels(OfflineAudioContextOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("numberOfChannels"), em_Val_from(value));
}


unsigned long OfflineAudioContextOptions_length(const OfflineAudioContextOptions *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


void OfflineAudioContextOptions_set_length(OfflineAudioContextOptions* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("length"), em_Val_from(value));
}


float OfflineAudioContextOptions_sampleRate(const OfflineAudioContextOptions *self) {
    return em_Val_as(float, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sampleRate")));
}


void OfflineAudioContextOptions_set_sampleRate(OfflineAudioContextOptions* self, float value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sampleRate"), em_Val_from(value));
}


jb_Any OfflineAudioContextOptions_renderSizeHint(const OfflineAudioContextOptions *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("renderSizeHint")));
}


void OfflineAudioContextOptions_set_renderSizeHint(OfflineAudioContextOptions* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("renderSizeHint"), em_Val_from(value));
}


OfflineAudioContextOptions OfflineAudioContextOptions_new() {
    em_Val obj = em_Val_object();
    return OfflineAudioContextOptions_from_val(&obj);
}

