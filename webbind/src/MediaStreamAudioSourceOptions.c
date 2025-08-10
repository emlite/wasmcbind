#include <webbind/MediaStreamAudioSourceOptions.h>

#include <webbind/MediaStream.h>

DEFINE_EMLITE_TYPE(MediaStreamAudioSourceOptions, em_Val);


MediaStream MediaStreamAudioSourceOptions_mediaStream(const MediaStreamAudioSourceOptions *self) {
    return em_Val_as(MediaStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mediaStream")));
}


void MediaStreamAudioSourceOptions_set_mediaStream(MediaStreamAudioSourceOptions* self, MediaStream * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mediaStream"), em_Val_from(value));
}


MediaStreamAudioSourceOptions MediaStreamAudioSourceOptions_new() {
    em_Val obj = em_Val_object();
    return MediaStreamAudioSourceOptions_from_val(&obj);
}

