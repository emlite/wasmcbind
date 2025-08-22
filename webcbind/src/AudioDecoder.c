#include <webcbind/AudioDecoder.h>

#include <webcbind/AudioDecoderInit.h>
#include <webcbind/AudioDecoderConfig.h>
#include <webcbind/EncodedAudioChunk.h>
#include <webcbind/AudioDecoderSupport.h>

DEFINE_EMLITE_TYPE(AudioDecoder, EventTarget);


AudioDecoder AudioDecoder_new(AudioDecoderInit * init) {
        em_Val vv = em_Val_new(em_Val_global("AudioDecoder") , em_Val_from(init));
        return AudioDecoder_from_val(&vv);
      }


CodecState AudioDecoder_state(const AudioDecoder *self) {
    return em_Val_as(CodecState, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("state")));
}


unsigned long AudioDecoder_decodeQueueSize(const AudioDecoder *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("decodeQueueSize")));
}


jb_Any AudioDecoder_ondequeue(const AudioDecoder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("ondequeue")));
}


void AudioDecoder_set_ondequeue(AudioDecoder* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("ondequeue"), em_Val_from(value));
}


jb_Undefined AudioDecoder_configure(AudioDecoder* self , AudioDecoderConfig * config) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "configure", em_Val_from(config)));
}


jb_Undefined AudioDecoder_decode(AudioDecoder* self , EncodedAudioChunk * chunk) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "decode", em_Val_from(chunk)));
}


jb_Promise AudioDecoder_flush(AudioDecoder* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "flush"));
}


jb_Undefined AudioDecoder_reset(AudioDecoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "reset"));
}


jb_Undefined AudioDecoder_close(AudioDecoder* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "close"));
}


jb_Promise AudioDecoder_isConfigSupported(AudioDecoder* self , AudioDecoderConfig * config) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("audiodecoder"), "isConfigSupported", em_Val_from(config)));
}

