#include <webbind/AudioEncoder.h>

#include <webbind/AudioEncoderInit.h>
#include <webbind/AudioEncoderConfig.h>
#include <webbind/AudioData.h>
#include <webbind/AudioEncoderSupport.h>

DEFINE_EMLITE_TYPE(AudioEncoder, EventTarget);


AudioEncoder AudioEncoder_new(AudioEncoderInit * init) {
        em_Val vv = em_Val_new(em_Val_global("AudioEncoder") , em_Val_from(init));
        return AudioEncoder_from_val(&vv);
      }


CodecState AudioEncoder_state(const AudioEncoder *self) {
    return em_Val_as(CodecState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("state")));
}


unsigned long AudioEncoder_encodeQueueSize(const AudioEncoder *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("encodeQueueSize")));
}


jb_Any AudioEncoder_ondequeue(const AudioEncoder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondequeue")));
}


void AudioEncoder_set_ondequeue(AudioEncoder* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondequeue"), em_Val_from(value));
}


jb_Undefined AudioEncoder_configure(AudioEncoder* self , AudioEncoderConfig * config) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "configure", em_Val_from(config)));
}


jb_Undefined AudioEncoder_encode(AudioEncoder* self , AudioData * data) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "encode", em_Val_from(data)));
}


jb_Promise AudioEncoder_flush(AudioEncoder* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "flush"));
}


jb_Undefined AudioEncoder_reset(AudioEncoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "reset"));
}


jb_Undefined AudioEncoder_close(AudioEncoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Promise AudioEncoder_isConfigSupported(AudioEncoder* self , AudioEncoderConfig * config) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("audioencoder"), "isConfigSupported", em_Val_from(config)));
}

