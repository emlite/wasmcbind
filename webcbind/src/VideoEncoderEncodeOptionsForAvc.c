#include <webcbind/VideoEncoderEncodeOptionsForAvc.h>

DEFINE_EMLITE_TYPE(VideoEncoderEncodeOptionsForAvc, em_Val);


unsigned short VideoEncoderEncodeOptionsForAvc_quantizer(const VideoEncoderEncodeOptionsForAvc *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("quantizer")));
}


void VideoEncoderEncodeOptionsForAvc_set_quantizer(VideoEncoderEncodeOptionsForAvc* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("quantizer"), em_Val_from(value));
}


VideoEncoderEncodeOptionsForAvc VideoEncoderEncodeOptionsForAvc_new() {
    em_Val obj = em_Val_object();
    return VideoEncoderEncodeOptionsForAvc_from_val(&obj);
}

