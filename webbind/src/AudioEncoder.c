#include <webbind/AudioEncoder.h>
#include <webbind/AudioData.h>


DEFINE_EMLITE_TYPE(AudioEncoderConfig, em_Val);


jb_String AudioEncoderConfig_codec(const AudioEncoderConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("codec")));
}


void AudioEncoderConfig_set_codec(AudioEncoderConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("codec"), em_Val_from(value));
}


unsigned long AudioEncoderConfig_sampleRate(const AudioEncoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("sampleRate")));
}


void AudioEncoderConfig_set_sampleRate(AudioEncoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("sampleRate"), em_Val_from(value));
}


unsigned long AudioEncoderConfig_numberOfChannels(const AudioEncoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("numberOfChannels")));
}


void AudioEncoderConfig_set_numberOfChannels(AudioEncoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("numberOfChannels"), em_Val_from(value));
}


long long AudioEncoderConfig_bitrate(const AudioEncoderConfig *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bitrate")));
}


void AudioEncoderConfig_set_bitrate(AudioEncoderConfig* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bitrate"), em_Val_from(value));
}


BitrateMode AudioEncoderConfig_bitrateMode(const AudioEncoderConfig *self) {
    return em_Val_as(BitrateMode, em_Val_get(em_Val_as_val(self->inner), em_Val_from("bitrateMode")));
}


void AudioEncoderConfig_set_bitrateMode(AudioEncoderConfig* self, BitrateMode * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("bitrateMode"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(AudioEncoderSupport, em_Val);


bool AudioEncoderSupport_supported(const AudioEncoderSupport *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("supported")));
}


void AudioEncoderSupport_set_supported(AudioEncoderSupport* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("supported"), em_Val_from(value));
}


AudioEncoderConfig AudioEncoderSupport_config(const AudioEncoderSupport *self) {
    return em_Val_as(AudioEncoderConfig, em_Val_get(em_Val_as_val(self->inner), em_Val_from("config")));
}


void AudioEncoderSupport_set_config(AudioEncoderSupport* self, AudioEncoderConfig * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("config"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(AudioEncoder, EventTarget);


AudioEncoder AudioEncoder_new(jb_Any * init) {
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

