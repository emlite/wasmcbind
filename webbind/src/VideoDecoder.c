#include <webbind/VideoDecoder.h>
#include <webbind/EncodedVideoChunk.h>
#include <webbind/VideoColorSpace.h>


DEFINE_EMLITE_TYPE(VideoDecoderConfig, em_Val);


jb_DOMString VideoDecoderConfig_codec(const VideoDecoderConfig *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "codec"));
}


void VideoDecoderConfig_set_codec(VideoDecoderConfig* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "codec", value);
}


jb_Any VideoDecoderConfig_description(const VideoDecoderConfig *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "description"));
}


void VideoDecoderConfig_set_description(VideoDecoderConfig* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "description", value);
}


unsigned long VideoDecoderConfig_codedWidth(const VideoDecoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "codedWidth"));
}


void VideoDecoderConfig_set_codedWidth(VideoDecoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "codedWidth", value);
}


unsigned long VideoDecoderConfig_codedHeight(const VideoDecoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "codedHeight"));
}


void VideoDecoderConfig_set_codedHeight(VideoDecoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "codedHeight", value);
}


unsigned long VideoDecoderConfig_displayAspectWidth(const VideoDecoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "displayAspectWidth"));
}


void VideoDecoderConfig_set_displayAspectWidth(VideoDecoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "displayAspectWidth", value);
}


unsigned long VideoDecoderConfig_displayAspectHeight(const VideoDecoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "displayAspectHeight"));
}


void VideoDecoderConfig_set_displayAspectHeight(VideoDecoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "displayAspectHeight", value);
}


VideoColorSpaceInit VideoDecoderConfig_colorSpace(const VideoDecoderConfig *self) {
    return em_Val_as(VideoColorSpaceInit, em_Val_get(em_Val_as_val(self->inner), "colorSpace"));
}


void VideoDecoderConfig_set_colorSpace(VideoDecoderConfig* self, const VideoColorSpaceInit* value) {
    em_Val_set(em_Val_as_val(self->inner), "colorSpace", value);
}


HardwareAcceleration VideoDecoderConfig_hardwareAcceleration(const VideoDecoderConfig *self) {
    return em_Val_as(HardwareAcceleration, em_Val_get(em_Val_as_val(self->inner), "hardwareAcceleration"));
}


void VideoDecoderConfig_set_hardwareAcceleration(VideoDecoderConfig* self, const HardwareAcceleration* value) {
    em_Val_set(em_Val_as_val(self->inner), "hardwareAcceleration", value);
}


bool VideoDecoderConfig_optimizeForLatency(const VideoDecoderConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "optimizeForLatency"));
}


void VideoDecoderConfig_set_optimizeForLatency(VideoDecoderConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "optimizeForLatency", value);
}


double VideoDecoderConfig_rotation(const VideoDecoderConfig *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "rotation"));
}


void VideoDecoderConfig_set_rotation(VideoDecoderConfig* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "rotation", value);
}


bool VideoDecoderConfig_flip(const VideoDecoderConfig *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "flip"));
}


void VideoDecoderConfig_set_flip(VideoDecoderConfig* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "flip", value);
}

DEFINE_EMLITE_TYPE(VideoDecoderSupport, em_Val);


bool VideoDecoderSupport_supported(const VideoDecoderSupport *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "supported"));
}


void VideoDecoderSupport_set_supported(VideoDecoderSupport* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "supported", value);
}


VideoDecoderConfig VideoDecoderSupport_config(const VideoDecoderSupport *self) {
    return em_Val_as(VideoDecoderConfig, em_Val_get(em_Val_as_val(self->inner), "config"));
}


void VideoDecoderSupport_set_config(VideoDecoderSupport* self, const VideoDecoderConfig* value) {
    em_Val_set(em_Val_as_val(self->inner), "config", value);
}

DEFINE_EMLITE_TYPE(VideoDecoder, EventTarget);


VideoDecoder VideoDecoder_new(const jb_Any* init) : EventTarget(em_Val_global("VideoDecoder").new_(em_Val_from(init))) {
        return VideoDecoder(em_Val_new(em_Val_global("VideoDecoder", em_Val_from(init)));
      }


CodecState VideoDecoder_state(const VideoDecoder *self) {
    return em_Val_as(CodecState, em_Val_get(EventTarget_as_val(self->inner), "state"));
}


unsigned long VideoDecoder_decodeQueueSize(const VideoDecoder *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), "decodeQueueSize"));
}


jb_Any VideoDecoder_ondequeue(const VideoDecoder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ondequeue"));
}


void VideoDecoder_set_ondequeue(VideoDecoder* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ondequeue", value);
}


jb_Undefined VideoDecoder_configure(VideoDecoder* self , const VideoDecoderConfig* config) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "configure", em_Val_from(config)));
}


jb_Undefined VideoDecoder_decode(VideoDecoder* self , const EncodedVideoChunk* chunk) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "decode", em_Val_from(chunk)));
}


jb_Promise VideoDecoder_flush(VideoDecoder* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "flush"));
}


jb_Undefined VideoDecoder_reset(VideoDecoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "reset"));
}


jb_Undefined VideoDecoder_close(VideoDecoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Promise VideoDecoder_isConfigSupported(VideoDecoder* self , const VideoDecoderConfig* config) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("videodecoder"), "isConfigSupported", em_Val_from(config)));
}

