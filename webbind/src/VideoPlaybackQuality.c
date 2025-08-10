#include <webbind/VideoPlaybackQuality.h>

DEFINE_EMLITE_TYPE(VideoPlaybackQuality, em_Val);


jb_Any VideoPlaybackQuality_creationTime(const VideoPlaybackQuality *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("creationTime")));
}


unsigned long VideoPlaybackQuality_droppedVideoFrames(const VideoPlaybackQuality *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("droppedVideoFrames")));
}


unsigned long VideoPlaybackQuality_totalVideoFrames(const VideoPlaybackQuality *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("totalVideoFrames")));
}


unsigned long VideoPlaybackQuality_corruptedVideoFrames(const VideoPlaybackQuality *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("corruptedVideoFrames")));
}

