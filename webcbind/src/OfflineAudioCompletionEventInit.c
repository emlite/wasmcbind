#include <webcbind/OfflineAudioCompletionEventInit.h>

#include <webcbind/AudioBuffer.h>

DEFINE_EMLITE_TYPE(OfflineAudioCompletionEventInit, EventInit);


AudioBuffer OfflineAudioCompletionEventInit_renderedBuffer(const OfflineAudioCompletionEventInit *self) {
    return em_Val_as(AudioBuffer, em_Val_get(EventInit_as_val(self->inner), em_Val_from("renderedBuffer")));
}


void OfflineAudioCompletionEventInit_set_renderedBuffer(OfflineAudioCompletionEventInit* self, AudioBuffer * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("renderedBuffer"), em_Val_from(value));
}


OfflineAudioCompletionEventInit OfflineAudioCompletionEventInit_new() {
    em_Val obj = em_Val_object();
    return OfflineAudioCompletionEventInit_from_val(&obj);
}

