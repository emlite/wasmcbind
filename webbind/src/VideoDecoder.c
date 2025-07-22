#include <webbind/VideoDecoder.h>
#include <webbind/EncodedVideoChunk.h>
#include <webbind/VideoColorSpace.h>


DEFINE_EMLITE_TYPE(VideoDecoderConfig, em_Val);


jb_DOMString VideoDecoderConfig_codec(const VideoDecoderConfig *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("codec")));
}


void VideoDecoderConfig_set_codec(VideoDecoderConfig* self, jb_DOMString * value) {
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

DEFINE_EMLITE_TYPE(VideoDecoder, EventTarget);


VideoDecoder VideoDecoder_new(jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("VideoDecoder") , em_Val_from(init));
        return VideoDecoder_from_val(&vv);
      }


CodecState VideoDecoder_state(const VideoDecoder *self) {
    return em_Val_as(CodecState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("state")));
}


unsigned long VideoDecoder_decodeQueueSize(const VideoDecoder *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("decodeQueueSize")));
}


jb_Any VideoDecoder_ondequeue(const VideoDecoder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondequeue")));
}


void VideoDecoder_set_ondequeue(VideoDecoder* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondequeue"), em_Val_from(value));
}


jb_Undefined VideoDecoder_configure(VideoDecoder* self , VideoDecoderConfig * config) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "configure", em_Val_from(config)));
}


jb_Undefined VideoDecoder_decode(VideoDecoder* self , EncodedVideoChunk * chunk) {
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


jb_Promise VideoDecoder_isConfigSupported(VideoDecoder* self , VideoDecoderConfig * config) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("videodecoder"), "isConfigSupported", em_Val_from(config)));
}

