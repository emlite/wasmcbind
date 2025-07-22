#include <webbind/AudioDecoder.h>
#include <webbind/EncodedAudioChunk.h>


DEFINE_EMLITE_TYPE(AudioDecoderConfig, em_Val);


jb_DOMString AudioDecoderConfig_codec(const AudioDecoderConfig *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "codec"));
}


void AudioDecoderConfig_set_codec(AudioDecoderConfig* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "codec", value);
}


unsigned long AudioDecoderConfig_sampleRate(const AudioDecoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "sampleRate"));
}


void AudioDecoderConfig_set_sampleRate(AudioDecoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "sampleRate", value);
}


unsigned long AudioDecoderConfig_numberOfChannels(const AudioDecoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "numberOfChannels"));
}


void AudioDecoderConfig_set_numberOfChannels(AudioDecoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "numberOfChannels", value);
}


jb_Any AudioDecoderConfig_description(const AudioDecoderConfig *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "description"));
}


void AudioDecoderConfig_set_description(AudioDecoderConfig* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "description", value);
}

DEFINE_EMLITE_TYPE(AudioDecoderSupport, em_Val);


bool AudioDecoderSupport_supported(const AudioDecoderSupport *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "supported"));
}


void AudioDecoderSupport_set_supported(AudioDecoderSupport* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "supported", value);
}


AudioDecoderConfig AudioDecoderSupport_config(const AudioDecoderSupport *self) {
    return em_Val_as(AudioDecoderConfig, em_Val_get(em_Val_as_val(self->inner), "config"));
}


void AudioDecoderSupport_set_config(AudioDecoderSupport* self, const AudioDecoderConfig* value) {
    em_Val_set(em_Val_as_val(self->inner), "config", value);
}

DEFINE_EMLITE_TYPE(AudioDecoder, EventTarget);


AudioDecoder AudioDecoder_new(const jb_Any* init) : EventTarget(em_Val_global("AudioDecoder").new_(em_Val_from(init))) {
        return AudioDecoder(em_Val_new(em_Val_global("AudioDecoder", em_Val_from(init)));
      }


CodecState AudioDecoder_state(const AudioDecoder *self) {
    return em_Val_as(CodecState, em_Val_get(EventTarget_as_val(self->inner), "state"));
}


unsigned long AudioDecoder_decodeQueueSize(const AudioDecoder *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), "decodeQueueSize"));
}


jb_Any AudioDecoder_ondequeue(const AudioDecoder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ondequeue"));
}


void AudioDecoder_set_ondequeue(AudioDecoder* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ondequeue", value);
}


jb_Undefined AudioDecoder_configure(AudioDecoder* self , const AudioDecoderConfig* config) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "configure", em_Val_from(config)));
}


jb_Undefined AudioDecoder_decode(AudioDecoder* self , const EncodedAudioChunk* chunk) {
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


jb_Promise AudioDecoder_isConfigSupported(AudioDecoder* self , const AudioDecoderConfig* config) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("audiodecoder"), "isConfigSupported", em_Val_from(config)));
}

