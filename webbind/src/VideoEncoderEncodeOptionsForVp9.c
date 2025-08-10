#include <webbind/VideoEncoderEncodeOptionsForVp9.h>

DEFINE_EMLITE_TYPE(VideoEncoderEncodeOptionsForVp9, em_Val);


unsigned short VideoEncoderEncodeOptionsForVp9_quantizer(const VideoEncoderEncodeOptionsForVp9 *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("quantizer")));
}


void VideoEncoderEncodeOptionsForVp9_set_quantizer(VideoEncoderEncodeOptionsForVp9* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("quantizer"), em_Val_from(value));
}


VideoEncoderEncodeOptionsForVp9 VideoEncoderEncodeOptionsForVp9_new() {
    em_Val obj = em_Val_object();
    return VideoEncoderEncodeOptionsForVp9_from_val(&obj);
}

