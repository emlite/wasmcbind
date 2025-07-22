#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct AudioDecoderConfig AudioDecoderConfig;
typedef struct EncodedAudioChunk EncodedAudioChunk;
typedef struct AudioDecoderSupport AudioDecoderSupport;


typedef struct {
  em_Val inner;
} AudioDecoderConfig;


DECLARE_EMLITE_TYPE(AudioDecoderConfig, em_Val);

jb_DOMString AudioDecoderConfig_codec( const AudioDecoderConfig *self);

void AudioDecoderConfig_set_codec(AudioDecoderConfig* self, const jb_DOMString* value);

unsigned long AudioDecoderConfig_sampleRate( const AudioDecoderConfig *self);

void AudioDecoderConfig_set_sampleRate(AudioDecoderConfig* self, unsigned long value);

unsigned long AudioDecoderConfig_numberOfChannels( const AudioDecoderConfig *self);

void AudioDecoderConfig_set_numberOfChannels(AudioDecoderConfig* self, unsigned long value);

jb_Any AudioDecoderConfig_description( const AudioDecoderConfig *self);

void AudioDecoderConfig_set_description(AudioDecoderConfig* self, const jb_Any* value);
typedef struct {
  em_Val inner;
} AudioDecoderSupport;


DECLARE_EMLITE_TYPE(AudioDecoderSupport, em_Val);

bool AudioDecoderSupport_supported( const AudioDecoderSupport *self);

void AudioDecoderSupport_set_supported(AudioDecoderSupport* self, bool value);

AudioDecoderConfig AudioDecoderSupport_config( const AudioDecoderSupport *self);

void AudioDecoderSupport_set_config(AudioDecoderSupport* self, const AudioDecoderConfig* value);
typedef struct {
  EventTarget inner;
} AudioDecoder;


DECLARE_EMLITE_TYPE(AudioDecoder, EventTarget);

AudioDecoder AudioDecoder_new(const jb_Any* init);

CodecState AudioDecoder_state( const AudioDecoder *self);

unsigned long AudioDecoder_decodeQueueSize( const AudioDecoder *self);

jb_Any AudioDecoder_ondequeue( const AudioDecoder *self);

void AudioDecoder_set_ondequeue(AudioDecoder* self, const jb_Any* value);

jb_Undefined AudioDecoder_configure(AudioDecoder* self , const AudioDecoderConfig* config);

jb_Undefined AudioDecoder_decode(AudioDecoder* self , const EncodedAudioChunk* chunk);

jb_Promise AudioDecoder_flush(AudioDecoder* self );

jb_Undefined AudioDecoder_reset(AudioDecoder* self );

jb_Undefined AudioDecoder_close(AudioDecoder* self );

jb_Promise AudioDecoder_isConfigSupported(AudioDecoder* self , const AudioDecoderConfig* config);
