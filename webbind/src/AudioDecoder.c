#include <webbind/AudioDecoder.h>
#include <webbind/EncodedAudioChunk.h>


DEFINE_EMLITE_TYPE(AudioDecoderConfig, em_Val);


jb_DOMString AudioDecoderConfig_codec(const AudioDecoderConfig *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), em_Val_from("codec")));
}


void AudioDecoderConfig_set_codec(AudioDecoderConfig* self, jb_DOMString * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("codec"), em_Val_from(value));
}


unsigned long AudioDecoderConfig_sampleRate(const AudioDecoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sampleRate")));
}


void AudioDecoderConfig_set_sampleRate(AudioDecoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sampleRate"), em_Val_from(value));
}


unsigned long AudioDecoderConfig_numberOfChannels(const AudioDecoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("numberOfChannels")));
}


void AudioDecoderConfig_set_numberOfChannels(AudioDecoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("numberOfChannels"), em_Val_from(value));
}


jb_Any AudioDecoderConfig_description(const AudioDecoderConfig *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("description")));
}


void AudioDecoderConfig_set_description(AudioDecoderConfig* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("description"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(AudioDecoderSupport, em_Val);


bool AudioDecoderSupport_supported(const AudioDecoderSupport *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("supported")));
}


void AudioDecoderSupport_set_supported(AudioDecoderSupport* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("supported"), em_Val_from(value));
}


AudioDecoderConfig AudioDecoderSupport_config(const AudioDecoderSupport *self) {
    return em_Val_as(AudioDecoderConfig, em_Val_get(em_Val_as_val(self->inner), em_Val_from("config")));
}


void AudioDecoderSupport_set_config(AudioDecoderSupport* self, AudioDecoderConfig * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("config"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(AudioDecoder, EventTarget);


AudioDecoder AudioDecoder_new(jb_Any * init) {
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

