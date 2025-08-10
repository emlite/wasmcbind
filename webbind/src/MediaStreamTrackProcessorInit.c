#include <webbind/MediaStreamTrackProcessorInit.h>

#include <webbind/MediaStreamTrack.h>

DEFINE_EMLITE_TYPE(MediaStreamTrackProcessorInit, em_Val);


MediaStreamTrack MediaStreamTrackProcessorInit_track(const MediaStreamTrackProcessorInit *self) {
    return em_Val_as(MediaStreamTrack, em_Val_get(em_Val_as_val(self->inner), em_Val_from("track")));
}


void MediaStreamTrackProcessorInit_set_track(MediaStreamTrackProcessorInit* self, MediaStreamTrack * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("track"), em_Val_from(value));
}


unsigned short MediaStreamTrackProcessorInit_maxBufferSize(const MediaStreamTrackProcessorInit *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("maxBufferSize")));
}


void MediaStreamTrackProcessorInit_set_maxBufferSize(MediaStreamTrackProcessorInit* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("maxBufferSize"), em_Val_from(value));
}


MediaStreamTrackProcessorInit MediaStreamTrackProcessorInit_new() {
    em_Val obj = em_Val_object();
    return MediaStreamTrackProcessorInit_from_val(&obj);
}

