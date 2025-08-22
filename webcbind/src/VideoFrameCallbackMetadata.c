#include <webcbind/VideoFrameCallbackMetadata.h>

DEFINE_EMLITE_TYPE(VideoFrameCallbackMetadata, em_Val);


jb_Any VideoFrameCallbackMetadata_presentationTime(const VideoFrameCallbackMetadata *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("presentationTime")));
}


void VideoFrameCallbackMetadata_set_presentationTime(VideoFrameCallbackMetadata* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("presentationTime"), em_Val_from(value));
}


jb_Any VideoFrameCallbackMetadata_expectedDisplayTime(const VideoFrameCallbackMetadata *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("expectedDisplayTime")));
}


void VideoFrameCallbackMetadata_set_expectedDisplayTime(VideoFrameCallbackMetadata* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("expectedDisplayTime"), em_Val_from(value));
}


unsigned long VideoFrameCallbackMetadata_width(const VideoFrameCallbackMetadata *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


void VideoFrameCallbackMetadata_set_width(VideoFrameCallbackMetadata* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


unsigned long VideoFrameCallbackMetadata_height(const VideoFrameCallbackMetadata *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}


void VideoFrameCallbackMetadata_set_height(VideoFrameCallbackMetadata* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


double VideoFrameCallbackMetadata_mediaTime(const VideoFrameCallbackMetadata *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mediaTime")));
}


void VideoFrameCallbackMetadata_set_mediaTime(VideoFrameCallbackMetadata* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("mediaTime"), em_Val_from(value));
}


unsigned long VideoFrameCallbackMetadata_presentedFrames(const VideoFrameCallbackMetadata *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("presentedFrames")));
}


void VideoFrameCallbackMetadata_set_presentedFrames(VideoFrameCallbackMetadata* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("presentedFrames"), em_Val_from(value));
}


double VideoFrameCallbackMetadata_processingDuration(const VideoFrameCallbackMetadata *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("processingDuration")));
}


void VideoFrameCallbackMetadata_set_processingDuration(VideoFrameCallbackMetadata* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("processingDuration"), em_Val_from(value));
}


jb_Any VideoFrameCallbackMetadata_captureTime(const VideoFrameCallbackMetadata *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("captureTime")));
}


void VideoFrameCallbackMetadata_set_captureTime(VideoFrameCallbackMetadata* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("captureTime"), em_Val_from(value));
}


jb_Any VideoFrameCallbackMetadata_receiveTime(const VideoFrameCallbackMetadata *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("receiveTime")));
}


void VideoFrameCallbackMetadata_set_receiveTime(VideoFrameCallbackMetadata* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("receiveTime"), em_Val_from(value));
}


unsigned long VideoFrameCallbackMetadata_rtpTimestamp(const VideoFrameCallbackMetadata *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rtpTimestamp")));
}


void VideoFrameCallbackMetadata_set_rtpTimestamp(VideoFrameCallbackMetadata* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rtpTimestamp"), em_Val_from(value));
}


VideoFrameCallbackMetadata VideoFrameCallbackMetadata_new() {
    em_Val obj = em_Val_object();
    return VideoFrameCallbackMetadata_from_val(&obj);
}

