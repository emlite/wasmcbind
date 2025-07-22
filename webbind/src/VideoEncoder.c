#include <webbind/VideoEncoder.h>
#include <webbind/VideoFrame.h>


DEFINE_EMLITE_TYPE(VideoEncoderConfig, em_Val);


jb_DOMString VideoEncoderConfig_codec(const VideoEncoderConfig *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "codec"));
}


void VideoEncoderConfig_set_codec(VideoEncoderConfig* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "codec", value);
}


unsigned long VideoEncoderConfig_width(const VideoEncoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "width"));
}


void VideoEncoderConfig_set_width(VideoEncoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "width", value);
}


unsigned long VideoEncoderConfig_height(const VideoEncoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "height"));
}


void VideoEncoderConfig_set_height(VideoEncoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "height", value);
}


unsigned long VideoEncoderConfig_displayWidth(const VideoEncoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "displayWidth"));
}


void VideoEncoderConfig_set_displayWidth(VideoEncoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "displayWidth", value);
}


unsigned long VideoEncoderConfig_displayHeight(const VideoEncoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "displayHeight"));
}


void VideoEncoderConfig_set_displayHeight(VideoEncoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "displayHeight", value);
}


long long VideoEncoderConfig_bitrate(const VideoEncoderConfig *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "bitrate"));
}


void VideoEncoderConfig_set_bitrate(VideoEncoderConfig* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "bitrate", value);
}


double VideoEncoderConfig_framerate(const VideoEncoderConfig *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "framerate"));
}


void VideoEncoderConfig_set_framerate(VideoEncoderConfig* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "framerate", value);
}


HardwareAcceleration VideoEncoderConfig_hardwareAcceleration(const VideoEncoderConfig *self) {
    return em_Val_as(HardwareAcceleration, em_Val_get(em_Val_as_val(self->inner), "hardwareAcceleration"));
}


void VideoEncoderConfig_set_hardwareAcceleration(VideoEncoderConfig* self, const HardwareAcceleration* value) {
    em_Val_set(em_Val_as_val(self->inner), "hardwareAcceleration", value);
}


AlphaOption VideoEncoderConfig_alpha(const VideoEncoderConfig *self) {
    return em_Val_as(AlphaOption, em_Val_get(em_Val_as_val(self->inner), "alpha"));
}


void VideoEncoderConfig_set_alpha(VideoEncoderConfig* self, const AlphaOption* value) {
    em_Val_set(em_Val_as_val(self->inner), "alpha", value);
}


jb_DOMString VideoEncoderConfig_scalabilityMode(const VideoEncoderConfig *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "scalabilityMode"));
}


void VideoEncoderConfig_set_scalabilityMode(VideoEncoderConfig* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "scalabilityMode", value);
}


VideoEncoderBitrateMode VideoEncoderConfig_bitrateMode(const VideoEncoderConfig *self) {
    return em_Val_as(VideoEncoderBitrateMode, em_Val_get(em_Val_as_val(self->inner), "bitrateMode"));
}


void VideoEncoderConfig_set_bitrateMode(VideoEncoderConfig* self, const VideoEncoderBitrateMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "bitrateMode", value);
}


LatencyMode VideoEncoderConfig_latencyMode(const VideoEncoderConfig *self) {
    return em_Val_as(LatencyMode, em_Val_get(em_Val_as_val(self->inner), "latencyMode"));
}


void VideoEncoderConfig_set_latencyMode(VideoEncoderConfig* self, const LatencyMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "latencyMode", value);
}


jb_DOMString VideoEncoderConfig_contentHint(const VideoEncoderConfig *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "contentHint"));
}


void VideoEncoderConfig_set_contentHint(VideoEncoderConfig* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "contentHint", value);
}

DEFINE_EMLITE_TYPE(VideoEncoderEncodeOptions, em_Val);


bool VideoEncoderEncodeOptions_keyFrame(const VideoEncoderEncodeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "keyFrame"));
}


void VideoEncoderEncodeOptions_set_keyFrame(VideoEncoderEncodeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "keyFrame", value);
}

DEFINE_EMLITE_TYPE(VideoEncoderSupport, em_Val);


bool VideoEncoderSupport_supported(const VideoEncoderSupport *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "supported"));
}


void VideoEncoderSupport_set_supported(VideoEncoderSupport* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "supported", value);
}


VideoEncoderConfig VideoEncoderSupport_config(const VideoEncoderSupport *self) {
    return em_Val_as(VideoEncoderConfig, em_Val_get(em_Val_as_val(self->inner), "config"));
}


void VideoEncoderSupport_set_config(VideoEncoderSupport* self, const VideoEncoderConfig* value) {
    em_Val_set(em_Val_as_val(self->inner), "config", value);
}

DEFINE_EMLITE_TYPE(VideoEncoder, EventTarget);


VideoEncoder VideoEncoder_new(const jb_Any* init) : EventTarget(em_Val_global("VideoEncoder").new_(em_Val_from(init))) {
        return VideoEncoder(em_Val_new(em_Val_global("VideoEncoder", em_Val_from(init)));
      }


CodecState VideoEncoder_state(const VideoEncoder *self) {
    return em_Val_as(CodecState, em_Val_get(EventTarget_as_val(self->inner), "state"));
}


unsigned long VideoEncoder_encodeQueueSize(const VideoEncoder *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), "encodeQueueSize"));
}


jb_Any VideoEncoder_ondequeue(const VideoEncoder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ondequeue"));
}


void VideoEncoder_set_ondequeue(VideoEncoder* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ondequeue", value);
}


jb_Undefined VideoEncoder_configure(VideoEncoder* self , const VideoEncoderConfig* config) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "configure", em_Val_from(config)));
}


jb_Undefined VideoEncoder_encode(VideoEncoder* self , const VideoFrame* frame) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "encode", em_Val_from(frame)));
}


jb_Undefined VideoEncoder_encode(VideoEncoder* self , const VideoFrame* frame, const VideoEncoderEncodeOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "encode", em_Val_from(frame), em_Val_from(options)));
}


jb_Promise VideoEncoder_flush(VideoEncoder* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "flush"));
}


jb_Undefined VideoEncoder_reset(VideoEncoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "reset"));
}


jb_Undefined VideoEncoder_close(VideoEncoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Promise VideoEncoder_isConfigSupported(VideoEncoder* self , const VideoEncoderConfig* config) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("videoencoder"), "isConfigSupported", em_Val_from(config)));
}

