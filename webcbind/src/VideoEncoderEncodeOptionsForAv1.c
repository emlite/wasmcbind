#include <webcbind/VideoEncoderEncodeOptionsForAv1.h>

DEFINE_EMLITE_TYPE(VideoEncoderEncodeOptionsForAv1, em_Val);


unsigned short VideoEncoderEncodeOptionsForAv1_quantizer(const VideoEncoderEncodeOptionsForAv1 *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("quantizer")));
}


void VideoEncoderEncodeOptionsForAv1_set_quantizer(VideoEncoderEncodeOptionsForAv1* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("quantizer"), em_Val_from(value));
}


VideoEncoderEncodeOptionsForAv1 VideoEncoderEncodeOptionsForAv1_new() {
    em_Val obj = em_Val_object();
    return VideoEncoderEncodeOptionsForAv1_from_val(&obj);
}

