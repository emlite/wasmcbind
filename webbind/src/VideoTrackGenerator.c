#include <webbind/VideoTrackGenerator.h>
#include <webbind/WritableStream.h>
#include <webbind/MediaStreamTrack.h>


DEFINE_EMLITE_TYPE(VideoTrackGenerator, em_Val);


VideoTrackGenerator VideoTrackGenerator_new() {
        em_Val vv = em_Val_new(em_Val_global("VideoTrackGenerator") );
        return VideoTrackGenerator_from_val(&vv);
      }


WritableStream VideoTrackGenerator_writable(const VideoTrackGenerator *self) {
    return em_Val_as(WritableStream, em_Val_get(em_Val_as_val(self->inner), em_Val_from("writable")));
}


bool VideoTrackGenerator_muted(const VideoTrackGenerator *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("muted")));
}


void VideoTrackGenerator_set_muted(VideoTrackGenerator* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("muted"), em_Val_from(value));
}


MediaStreamTrack VideoTrackGenerator_track(const VideoTrackGenerator *self) {
    return em_Val_as(MediaStreamTrack, em_Val_get(em_Val_as_val(self->inner), em_Val_from("track")));
}

