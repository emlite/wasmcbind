#include <webcbind/MediaStreamTrackAudioSourceOptions.h>

#include <webcbind/MediaStreamTrack.h>

DEFINE_EMLITE_TYPE(MediaStreamTrackAudioSourceOptions, em_Val);


MediaStreamTrack MediaStreamTrackAudioSourceOptions_mediaStreamTrack(const MediaStreamTrackAudioSourceOptions *self) {
    return em_Val_as(MediaStreamTrack, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mediaStreamTrack")));
}


void MediaStreamTrackAudioSourceOptions_set_mediaStreamTrack(MediaStreamTrackAudioSourceOptions* self, MediaStreamTrack * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mediaStreamTrack"), em_Val_from(value));
}


MediaStreamTrackAudioSourceOptions MediaStreamTrackAudioSourceOptions_new() {
    em_Val obj = em_Val_object();
    return MediaStreamTrackAudioSourceOptions_from_val(&obj);
}

