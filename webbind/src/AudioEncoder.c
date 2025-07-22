#include <webbind/AudioEncoder.h>
#include <webbind/AudioData.h>


DEFINE_EMLITE_TYPE(AudioEncoderConfig, em_Val);


jb_DOMString AudioEncoderConfig_codec(const AudioEncoderConfig *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "codec"));
}


void AudioEncoderConfig_set_codec(AudioEncoderConfig* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "codec", value);
}


unsigned long AudioEncoderConfig_sampleRate(const AudioEncoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "sampleRate"));
}


void AudioEncoderConfig_set_sampleRate(AudioEncoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "sampleRate", value);
}


unsigned long AudioEncoderConfig_numberOfChannels(const AudioEncoderConfig *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "numberOfChannels"));
}


void AudioEncoderConfig_set_numberOfChannels(AudioEncoderConfig* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "numberOfChannels", value);
}


long long AudioEncoderConfig_bitrate(const AudioEncoderConfig *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), "bitrate"));
}


void AudioEncoderConfig_set_bitrate(AudioEncoderConfig* self, long long value) {
    em_Val_set(em_Val_as_val(self->inner), "bitrate", value);
}


BitrateMode AudioEncoderConfig_bitrateMode(const AudioEncoderConfig *self) {
    return em_Val_as(BitrateMode, em_Val_get(em_Val_as_val(self->inner), "bitrateMode"));
}


void AudioEncoderConfig_set_bitrateMode(AudioEncoderConfig* self, const BitrateMode* value) {
    em_Val_set(em_Val_as_val(self->inner), "bitrateMode", value);
}

DEFINE_EMLITE_TYPE(AudioEncoderSupport, em_Val);


bool AudioEncoderSupport_supported(const AudioEncoderSupport *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "supported"));
}


void AudioEncoderSupport_set_supported(AudioEncoderSupport* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "supported", value);
}


AudioEncoderConfig AudioEncoderSupport_config(const AudioEncoderSupport *self) {
    return em_Val_as(AudioEncoderConfig, em_Val_get(em_Val_as_val(self->inner), "config"));
}


void AudioEncoderSupport_set_config(AudioEncoderSupport* self, const AudioEncoderConfig* value) {
    em_Val_set(em_Val_as_val(self->inner), "config", value);
}

DEFINE_EMLITE_TYPE(AudioEncoder, EventTarget);


AudioEncoder AudioEncoder_new(const jb_Any* init) : EventTarget(em_Val_global("AudioEncoder").new_(em_Val_from(init))) {
        return AudioEncoder(em_Val_new(em_Val_global("AudioEncoder", em_Val_from(init)));
      }


CodecState AudioEncoder_state(const AudioEncoder *self) {
    return em_Val_as(CodecState, em_Val_get(EventTarget_as_val(self->inner), "state"));
}


unsigned long AudioEncoder_encodeQueueSize(const AudioEncoder *self) {
    return em_Val_as(unsigned long, em_Val_get(EventTarget_as_val(self->inner), "encodeQueueSize"));
}


jb_Any AudioEncoder_ondequeue(const AudioEncoder *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "ondequeue"));
}


void AudioEncoder_set_ondequeue(AudioEncoder* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "ondequeue", value);
}


jb_Undefined AudioEncoder_configure(AudioEncoder* self , const AudioEncoderConfig* config) {
    return em_Val_as(jb_Undefined, em_Val_call(EventTarget_as_val(self->inner), "configure", em_Val_from(config)));
}


jb_Undefined AudioEncoder_encode(AudioEncoder* self , const AudioData* data) {
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


jb_Promise AudioEncoder_isConfigSupported(AudioEncoder* self , const AudioEncoderConfig* config) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("audioencoder"), "isConfigSupported", em_Val_from(config)));
}

