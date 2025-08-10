#include <webbind/MediaElementAudioSourceOptions.h>

#include <webbind/HTMLMediaElement.h>

DEFINE_EMLITE_TYPE(MediaElementAudioSourceOptions, em_Val);


HTMLMediaElement MediaElementAudioSourceOptions_mediaElement(const MediaElementAudioSourceOptions *self) {
    return em_Val_as(HTMLMediaElement, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mediaElement")));
}


void MediaElementAudioSourceOptions_set_mediaElement(MediaElementAudioSourceOptions* self, HTMLMediaElement * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mediaElement"), em_Val_from(value));
}


MediaElementAudioSourceOptions MediaElementAudioSourceOptions_new() {
    em_Val obj = em_Val_object();
    return MediaElementAudioSourceOptions_from_val(&obj);
}

