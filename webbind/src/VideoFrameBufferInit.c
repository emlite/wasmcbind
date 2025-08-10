#include <webbind/VideoFrameBufferInit.h>

DEFINE_EMLITE_TYPE(VideoFrameBufferInit, em_Val);


VideoPixelFormat VideoFrameBufferInit_format(const VideoFrameBufferInit *self) {
    return em_Val_as(VideoPixelFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void VideoFrameBufferInit_set_format(VideoFrameBufferInit* self, VideoPixelFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


unsigned long VideoFrameBufferInit_codedWidth(const VideoFrameBufferInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("codedWidth")));
}


void VideoFrameBufferInit_set_codedWidth(VideoFrameBufferInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("codedWidth"), em_Val_from(value));
}


unsigned long VideoFrameBufferInit_codedHeight(const VideoFrameBufferInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("codedHeight")));
}


void VideoFrameBufferInit_set_codedHeight(VideoFrameBufferInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("codedHeight"), em_Val_from(value));
}


long long VideoFrameBufferInit_timestamp(const VideoFrameBufferInit *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("timestamp")));
}


void VideoFrameBufferInit_set_timestamp(VideoFrameBufferInit* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("timestamp"), em_Val_from(value));
}


long long VideoFrameBufferInit_duration(const VideoFrameBufferInit *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("duration")));
}


void VideoFrameBufferInit_set_duration(VideoFrameBufferInit* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("duration"), em_Val_from(value));
}


jb_Array VideoFrameBufferInit_layout(const VideoFrameBufferInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("layout")));
}


void VideoFrameBufferInit_set_layout(VideoFrameBufferInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


DOMRectInit VideoFrameBufferInit_visibleRect(const VideoFrameBufferInit *self) {
    return em_Val_as(DOMRectInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("visibleRect")));
}


void VideoFrameBufferInit_set_visibleRect(VideoFrameBufferInit* self, DOMRectInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("visibleRect"), em_Val_from(value));
}


double VideoFrameBufferInit_rotation(const VideoFrameBufferInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rotation")));
}


void VideoFrameBufferInit_set_rotation(VideoFrameBufferInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rotation"), em_Val_from(value));
}


bool VideoFrameBufferInit_flip(const VideoFrameBufferInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("flip")));
}


void VideoFrameBufferInit_set_flip(VideoFrameBufferInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("flip"), em_Val_from(value));
}


unsigned long VideoFrameBufferInit_displayWidth(const VideoFrameBufferInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displayWidth")));
}


void VideoFrameBufferInit_set_displayWidth(VideoFrameBufferInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displayWidth"), em_Val_from(value));
}


unsigned long VideoFrameBufferInit_displayHeight(const VideoFrameBufferInit *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displayHeight")));
}


void VideoFrameBufferInit_set_displayHeight(VideoFrameBufferInit* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displayHeight"), em_Val_from(value));
}


VideoColorSpaceInit VideoFrameBufferInit_colorSpace(const VideoFrameBufferInit *self) {
    return em_Val_as(VideoColorSpaceInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorSpace")));
}


void VideoFrameBufferInit_set_colorSpace(VideoFrameBufferInit* self, VideoColorSpaceInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("colorSpace"), em_Val_from(value));
}


jb_Array VideoFrameBufferInit_transfer(const VideoFrameBufferInit *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("transfer")));
}


void VideoFrameBufferInit_set_transfer(VideoFrameBufferInit* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("transfer"), em_Val_from(value));
}


VideoFrameMetadata VideoFrameBufferInit_metadata(const VideoFrameBufferInit *self) {
    return em_Val_as(VideoFrameMetadata, em_Val_get(em_Val_as_val(self->inner), em_Val_from("metadata")));
}


void VideoFrameBufferInit_set_metadata(VideoFrameBufferInit* self, VideoFrameMetadata * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("metadata"), em_Val_from(value));
}


VideoFrameBufferInit VideoFrameBufferInit_new() {
    em_Val obj = em_Val_object();
    return VideoFrameBufferInit_from_val(&obj);
}

