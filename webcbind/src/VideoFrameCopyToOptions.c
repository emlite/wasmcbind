#include <webcbind/VideoFrameCopyToOptions.h>

DEFINE_EMLITE_TYPE(VideoFrameCopyToOptions, em_Val);


DOMRectInit VideoFrameCopyToOptions_rect(const VideoFrameCopyToOptions *self) {
    return em_Val_as(DOMRectInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rect")));
}


void VideoFrameCopyToOptions_set_rect(VideoFrameCopyToOptions* self, DOMRectInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rect"), em_Val_from(value));
}


jb_Array VideoFrameCopyToOptions_layout(const VideoFrameCopyToOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("layout")));
}


void VideoFrameCopyToOptions_set_layout(VideoFrameCopyToOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("layout"), em_Val_from(value));
}


VideoPixelFormat VideoFrameCopyToOptions_format(const VideoFrameCopyToOptions *self) {
    return em_Val_as(VideoPixelFormat, em_Val_get(em_Val_as_val(self->inner), em_Val_from("format")));
}


void VideoFrameCopyToOptions_set_format(VideoFrameCopyToOptions* self, VideoPixelFormat * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("format"), em_Val_from(value));
}


PredefinedColorSpace VideoFrameCopyToOptions_colorSpace(const VideoFrameCopyToOptions *self) {
    return em_Val_as(PredefinedColorSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorSpace")));
}


void VideoFrameCopyToOptions_set_colorSpace(VideoFrameCopyToOptions* self, PredefinedColorSpace * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("colorSpace"), em_Val_from(value));
}


VideoFrameCopyToOptions VideoFrameCopyToOptions_new() {
    em_Val obj = em_Val_object();
    return VideoFrameCopyToOptions_from_val(&obj);
}

