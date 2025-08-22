#include <webcbind/VideoDecoderInit.h>

DEFINE_EMLITE_TYPE(VideoDecoderInit, em_Val);


jb_Function VideoDecoderInit_output(const VideoDecoderInit *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("output")));
}


void VideoDecoderInit_set_output(VideoDecoderInit* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("output"), em_Val_from(value));
}


jb_Function VideoDecoderInit_error(const VideoDecoderInit *self) {
    return em_Val_as(jb_Function, em_Val_get(em_Val_as_val(self->inner), em_Val_from("error")));
}


void VideoDecoderInit_set_error(VideoDecoderInit* self, jb_Function * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("error"), em_Val_from(value));
}


VideoDecoderInit VideoDecoderInit_new() {
    em_Val obj = em_Val_object();
    return VideoDecoderInit_from_val(&obj);
}

