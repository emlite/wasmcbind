#include <webbind/VideoEncoderInit.h>

DEFINE_EMLITE_TYPE(VideoEncoderInit, em_Val);


jb_Function VideoEncoderInit_output(const VideoEncoderInit *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output")));
}


void VideoEncoderInit_set_output(VideoEncoderInit* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output"), em_Val_from(value));
}


jb_Function VideoEncoderInit_error(const VideoEncoderInit *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("error")));
}


void VideoEncoderInit_set_error(VideoEncoderInit* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


VideoEncoderInit VideoEncoderInit_new() {
    em_Val obj = em_Val_object();
    return VideoEncoderInit_from_val(&obj);
}

