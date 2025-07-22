#include <webbind/VideoEncoder.h>
#include <webbind/VideoFrame.h>


DEFINE_EMLITE_TYPE(VideoEncoderConfig, em_Val);


jb_DOMString VideoEncoderConfig_codec(const VideoEncoderConfig *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("codec")));
}


void VideoEncoderConfig_set_codec(VideoEncoderConfig* self, jb_DOMString * value) {
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


jb_DOMString VideoEncoderConfig_scalabilityMode(const VideoEncoderConfig *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scalabilityMode")));
}


void VideoEncoderConfig_set_scalabilityMode(VideoEncoderConfig* self, jb_DOMString * value) {
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


jb_DOMString VideoEncoderConfig_contentHint(const VideoEncoderConfig *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("contentHint")));
}


void VideoEncoderConfig_set_contentHint(VideoEncoderConfig* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("contentHint"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(VideoEncoderEncodeOptions, em_Val);


bool VideoEncoderEncodeOptions_keyFrame(const VideoEncoderEncodeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("keyFrame")));
}


void VideoEncoderEncodeOptions_set_keyFrame(VideoEncoderEncodeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("keyFrame"), em_Val_from(value));
}

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

DEFINE_EMLITE_TYPE(VideoEncoder, EventTarget);


VideoEncoder VideoEncoder_new(jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("VideoEncoder") , em_Val_from(init));
        return VideoEncoder_from_val(&vv);
      }


CodecState VideoEncoder_state(const VideoEncoder *self) {
    return em_Val_as(CodecState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("state")));
}


unsigned long VideoEncoder_encodeQueueSize(const VideoEncoder *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("encodeQueueSize")));
}


jb_Any VideoEncoder_ondequeue(const VideoEncoder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondequeue")));
}


void VideoEncoder_set_ondequeue(VideoEncoder* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondequeue"), em_Val_from(value));
}


jb_Undefined VideoEncoder_configure(VideoEncoder* self , VideoEncoderConfig * config) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "configure", em_Val_from(config)));
}


jb_Undefined VideoEncoder_encode0(VideoEncoder* self , VideoFrame * frame) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "encode", em_Val_from(frame)));
}


jb_Undefined VideoEncoder_encode1(VideoEncoder* self , VideoFrame * frame, VideoEncoderEncodeOptions * options) {
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


jb_Promise VideoEncoder_isConfigSupported(VideoEncoder* self , VideoEncoderConfig * config) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("videoencoder"), "isConfigSupported", em_Val_from(config)));
}

