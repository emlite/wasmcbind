#include <webcbind/VideoEncoder.h>

#include <webcbind/VideoEncoderInit.h>
#include <webcbind/VideoEncoderConfig.h>
#include <webcbind/VideoFrame.h>
#include <webcbind/VideoEncoderEncodeOptions.h>
#include <webcbind/VideoEncoderSupport.h>

DEFINE_EMLITE_TYPE(VideoEncoder, EventTarget);


VideoEncoder VideoEncoder_new(VideoEncoderInit * init) {
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

