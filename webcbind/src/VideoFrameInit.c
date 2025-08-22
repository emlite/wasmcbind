#include <webcbind/VideoFrameInit.h>

DEFINE_EMLITE_TYPE(VideoFrameInit, em_Val);


long long VideoFrameInit_duration(const VideoFrameInit *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("duration")));
}


void VideoFrameInit_set_duration(VideoFrameInit* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("duration"), em_Val_from(value));
}


long long VideoFrameInit_timestamp(const VideoFrameInit *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestamp")));
}


void VideoFrameInit_set_timestamp(VideoFrameInit* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timestamp"), em_Val_from(value));
}


AlphaOption VideoFrameInit_alpha(const VideoFrameInit *self) {
    return em_Val_as(AlphaOption, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alpha")));
}


void VideoFrameInit_set_alpha(VideoFrameInit* self, AlphaOption * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}


DOMRectInit VideoFrameInit_visibleRect(const VideoFrameInit *self) {
    return em_Val_as(DOMRectInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("visibleRect")));
}


void VideoFrameInit_set_visibleRect(VideoFrameInit* self, DOMRectInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("visibleRect"), em_Val_from(value));
}


double VideoFrameInit_rotation(const VideoFrameInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rotation")));
}


void VideoFrameInit_set_rotation(VideoFrameInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rotation"), em_Val_from(value));
}


bool VideoFrameInit_flip(const VideoFrameInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("flip")));
}


void VideoFrameInit_set_flip(VideoFrameInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("flip"), em_Val_from(value));
}


unsigned long VideoFrameInit_displayWidth(const VideoFrameInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displayWidth")));
}


void VideoFrameInit_set_displayWidth(VideoFrameInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displayWidth"), em_Val_from(value));
}


unsigned long VideoFrameInit_displayHeight(const VideoFrameInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displayHeight")));
}


void VideoFrameInit_set_displayHeight(VideoFrameInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displayHeight"), em_Val_from(value));
}


VideoFrameMetadata VideoFrameInit_metadata(const VideoFrameInit *self) {
    return em_Val_as(VideoFrameMetadata, em_Val_get(em_Val_as_val(self->inner), em_Val_from("metadata")));
}


void VideoFrameInit_set_metadata(VideoFrameInit* self, VideoFrameMetadata * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("metadata"), em_Val_from(value));
}


VideoFrameInit VideoFrameInit_new() {
    em_Val obj = em_Val_object();
    return VideoFrameInit_from_val(&obj);
}

