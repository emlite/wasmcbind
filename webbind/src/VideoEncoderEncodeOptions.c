#include <webbind/VideoEncoderEncodeOptions.h>

DEFINE_EMLITE_TYPE(VideoEncoderEncodeOptions, em_Val);


bool VideoEncoderEncodeOptions_keyFrame(const VideoEncoderEncodeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keyFrame")));
}


void VideoEncoderEncodeOptions_set_keyFrame(VideoEncoderEncodeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("keyFrame"), em_Val_from(value));
}


VideoEncoderEncodeOptions VideoEncoderEncodeOptions_new() {
    em_Val obj = em_Val_object();
    return VideoEncoderEncodeOptions_from_val(&obj);
}

