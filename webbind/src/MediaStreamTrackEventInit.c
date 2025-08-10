#include <webbind/MediaStreamTrackEventInit.h>

#include <webbind/MediaStreamTrack.h>

DEFINE_EMLITE_TYPE(MediaStreamTrackEventInit, EventInit);


MediaStreamTrack MediaStreamTrackEventInit_track(const MediaStreamTrackEventInit *self) {
    return em_Val_as(MediaStreamTrack, em_Val_get(EventInit_as_val(self->inner), em_Val_from("track")));
}


void MediaStreamTrackEventInit_set_track(MediaStreamTrackEventInit* self, MediaStreamTrack * value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("track"), em_Val_from(value));
}


MediaStreamTrackEventInit MediaStreamTrackEventInit_new() {
    em_Val obj = em_Val_object();
    return MediaStreamTrackEventInit_from_val(&obj);
}

