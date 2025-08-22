#include <webcbind/VideoEncoderConfig.h>

DEFINE_EMLITE_TYPE(VideoEncoderConfig, em_Val);


jb_String VideoEncoderConfig_codec(const VideoEncoderConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("codec")));
}


void VideoEncoderConfig_set_codec(VideoEncoderConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("codec"), em_Val_from(value));
}


unsigned long VideoEncoderConfig_width(const VideoEncoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


void VideoEncoderConfig_set_width(VideoEncoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


unsigned long VideoEncoderConfig_height(const VideoEncoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("height")));
}


void VideoEncoderConfig_set_height(VideoEncoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


unsigned long VideoEncoderConfig_displayWidth(const VideoEncoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displayWidth")));
}


void VideoEncoderConfig_set_displayWidth(VideoEncoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displayWidth"), em_Val_from(value));
}


unsigned long VideoEncoderConfig_displayHeight(const VideoEncoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("displayHeight")));
}


void VideoEncoderConfig_set_displayHeight(VideoEncoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("displayHeight"), em_Val_from(value));
}


long long VideoEncoderConfig_bitrate(const VideoEncoderConfig *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bitrate")));
}


void VideoEncoderConfig_set_bitrate(VideoEncoderConfig* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bitrate"), em_Val_from(value));
}


double VideoEncoderConfig_framerate(const VideoEncoderConfig *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("framerate")));
}


void VideoEncoderConfig_set_framerate(VideoEncoderConfig* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("framerate"), em_Val_from(value));
}


HardwareAcceleration VideoEncoderConfig_hardwareAcceleration(const VideoEncoderConfig *self) {
    return em_Val_as(HardwareAcceleration, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hardwareAcceleration")));
}


void VideoEncoderConfig_set_hardwareAcceleration(VideoEncoderConfig* self, HardwareAcceleration * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("hardwareAcceleration"), em_Val_from(value));
}


AlphaOption VideoEncoderConfig_alpha(const VideoEncoderConfig *self) {
    return em_Val_as(AlphaOption, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alpha")));
}


void VideoEncoderConfig_set_alpha(VideoEncoderConfig* self, AlphaOption * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alpha"), em_Val_from(value));
}


jb_String VideoEncoderConfig_scalabilityMode(const VideoEncoderConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scalabilityMode")));
}


void VideoEncoderConfig_set_scalabilityMode(VideoEncoderConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scalabilityMode"), em_Val_from(value));
}


VideoEncoderBitrateMode VideoEncoderConfig_bitrateMode(const VideoEncoderConfig *self) {
    return em_Val_as(VideoEncoderBitrateMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bitrateMode")));
}


void VideoEncoderConfig_set_bitrateMode(VideoEncoderConfig* self, VideoEncoderBitrateMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bitrateMode"), em_Val_from(value));
}


LatencyMode VideoEncoderConfig_latencyMode(const VideoEncoderConfig *self) {
    return em_Val_as(LatencyMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("latencyMode")));
}


void VideoEncoderConfig_set_latencyMode(VideoEncoderConfig* self, LatencyMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("latencyMode"), em_Val_from(value));
}


jb_String VideoEncoderConfig_contentHint(const VideoEncoderConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("contentHint")));
}


void VideoEncoderConfig_set_contentHint(VideoEncoderConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("contentHint"), em_Val_from(value));
}


VideoEncoderConfig VideoEncoderConfig_new() {
    em_Val obj = em_Val_object();
    return VideoEncoderConfig_from_val(&obj);
}

