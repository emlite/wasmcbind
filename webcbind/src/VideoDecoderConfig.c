#include <webcbind/VideoDecoderConfig.h>

DEFINE_EMLITE_TYPE(VideoDecoderConfig, em_Val);


jb_String VideoDecoderConfig_codec(const VideoDecoderConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("codec")));
}


void VideoDecoderConfig_set_codec(VideoDecoderConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("codec"), em_Val_from(value));
}


jb_Any VideoDecoderConfig_description(const VideoDecoderConfig *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("description")));
}


void VideoDecoderConfig_set_description(VideoDecoderConfig* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("description"), em_Val_from(value));
}


unsigned long VideoDecoderConfig_codedWidth(const VideoDecoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("codedWidth")));
}


void VideoDecoderConfig_set_codedWidth(VideoDecoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("codedWidth"), em_Val_from(value));
}


unsigned long VideoDecoderConfig_codedHeight(const VideoDecoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("codedHeight")));
}


void VideoDecoderConfig_set_codedHeight(VideoDecoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("codedHeight"), em_Val_from(value));
}


unsigned long VideoDecoderConfig_displayAspectWidth(const VideoDecoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displayAspectWidth")));
}


void VideoDecoderConfig_set_displayAspectWidth(VideoDecoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displayAspectWidth"), em_Val_from(value));
}


unsigned long VideoDecoderConfig_displayAspectHeight(const VideoDecoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displayAspectHeight")));
}


void VideoDecoderConfig_set_displayAspectHeight(VideoDecoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displayAspectHeight"), em_Val_from(value));
}


VideoColorSpaceInit VideoDecoderConfig_colorSpace(const VideoDecoderConfig *self) {
    return em_Val_as(VideoColorSpaceInit, em_Val_get(em_Val_as_val(self->inner), em_Val_from("colorSpace")));
}


void VideoDecoderConfig_set_colorSpace(VideoDecoderConfig* self, VideoColorSpaceInit * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("colorSpace"), em_Val_from(value));
}


HardwareAcceleration VideoDecoderConfig_hardwareAcceleration(const VideoDecoderConfig *self) {
    return em_Val_as(HardwareAcceleration, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hardwareAcceleration")));
}


void VideoDecoderConfig_set_hardwareAcceleration(VideoDecoderConfig* self, HardwareAcceleration * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hardwareAcceleration"), em_Val_from(value));
}


bool VideoDecoderConfig_optimizeForLatency(const VideoDecoderConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("optimizeForLatency")));
}


void VideoDecoderConfig_set_optimizeForLatency(VideoDecoderConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("optimizeForLatency"), em_Val_from(value));
}


double VideoDecoderConfig_rotation(const VideoDecoderConfig *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("rotation")));
}


void VideoDecoderConfig_set_rotation(VideoDecoderConfig* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("rotation"), em_Val_from(value));
}


bool VideoDecoderConfig_flip(const VideoDecoderConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("flip")));
}


void VideoDecoderConfig_set_flip(VideoDecoderConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("flip"), em_Val_from(value));
}


VideoDecoderConfig VideoDecoderConfig_new() {
    em_Val obj = em_Val_object();
    return VideoDecoderConfig_from_val(&obj);
}

