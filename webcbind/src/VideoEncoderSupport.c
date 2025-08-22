#include <webcbind/VideoEncoderSupport.h>

DEFINE_EMLITE_TYPE(VideoEncoderSupport, em_Val);


bool VideoEncoderSupport_supported(const VideoEncoderSupport *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("supported")));
}


void VideoEncoderSupport_set_supported(VideoEncoderSupport* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("supported"), em_Val_from(value));
}


VideoEncoderConfig VideoEncoderSupport_config(const VideoEncoderSupport *self) {
    return em_Val_as(VideoEncoderConfig, em_Val_get(em_Val_as_val(self->inner), em_Val_from("config")));
}


void VideoEncoderSupport_set_config(VideoEncoderSupport* self, VideoEncoderConfig * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("config"), em_Val_from(value));
}


VideoEncoderSupport VideoEncoderSupport_new() {
    em_Val obj = em_Val_object();
    return VideoEncoderSupport_from_val(&obj);
}

