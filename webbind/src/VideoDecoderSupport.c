#include <webbind/VideoDecoderSupport.h>

DEFINE_EMLITE_TYPE(VideoDecoderSupport, em_Val);


bool VideoDecoderSupport_supported(const VideoDecoderSupport *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("supported")));
}


void VideoDecoderSupport_set_supported(VideoDecoderSupport* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("supported"), em_Val_from(value));
}


VideoDecoderConfig VideoDecoderSupport_config(const VideoDecoderSupport *self) {
    return em_Val_as(VideoDecoderConfig, em_Val_get(em_Val_as_val(self->inner), em_Val_from("config")));
}


void VideoDecoderSupport_set_config(VideoDecoderSupport* self, VideoDecoderConfig * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("config"), em_Val_from(value));
}


VideoDecoderSupport VideoDecoderSupport_new() {
    em_Val obj = em_Val_object();
    return VideoDecoderSupport_from_val(&obj);
}

