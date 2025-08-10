#include <webbind/VideoDecoder.h>

#include <webbind/VideoDecoderInit.h>
#include <webbind/VideoDecoderConfig.h>
#include <webbind/EncodedVideoChunk.h>
#include <webbind/VideoDecoderSupport.h>

DEFINE_EMLITE_TYPE(VideoDecoder, EventTarget);


VideoDecoder VideoDecoder_new(VideoDecoderInit * init) {
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

