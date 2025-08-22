#include <webcbind/VideoEncoderEncodeOptionsForHevc.h>

DEFINE_EMLITE_TYPE(VideoEncoderEncodeOptionsForHevc, em_Val);


unsigned short VideoEncoderEncodeOptionsForHevc_quantizer(const VideoEncoderEncodeOptionsForHevc *self) {
    return em_Val_as(unsigned short, em_Val_get(em_Val_as_val(self->inner), em_Val_from("quantizer")));
}


void VideoEncoderEncodeOptionsForHevc_set_quantizer(VideoEncoderEncodeOptionsForHevc* self, unsigned short value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("quantizer"), em_Val_from(value));
}


VideoEncoderEncodeOptionsForHevc VideoEncoderEncodeOptionsForHevc_new() {
    em_Val obj = em_Val_object();
    return VideoEncoderEncodeOptionsForHevc_from_val(&obj);
}

