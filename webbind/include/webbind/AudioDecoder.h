#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioDecoderInit AudioDecoderInit;
typedef struct AudioDecoderConfig AudioDecoderConfig;
typedef struct EncodedAudioChunk EncodedAudioChunk;
typedef struct AudioDecoderSupport AudioDecoderSupport;

DECLARE_EMLITE_TYPE(AudioDecoder, EventTarget);

AudioDecoder AudioDecoder_new(AudioDecoderInit * init);

CodecState AudioDecoder_state(const AudioDecoder *self);

unsigned long AudioDecoder_decodeQueueSize(const AudioDecoder *self);

jb_Any AudioDecoder_ondequeue(const AudioDecoder *self);

void AudioDecoder_set_ondequeue(AudioDecoder* self, jb_Any * value);

jb_Undefined AudioDecoder_configure(AudioDecoder* self , AudioDecoderConfig * config);

jb_Undefined AudioDecoder_decode(AudioDecoder* self , EncodedAudioChunk * chunk);

jb_Promise AudioDecoder_flush(AudioDecoder* self );

jb_Undefined AudioDecoder_reset(AudioDecoder* self );

jb_Undefined AudioDecoder_close(AudioDecoder* self );

jb_Promise AudioDecoder_isConfigSupported(AudioDecoder* self , AudioDecoderConfig * config);

#ifdef __cplusplus
}
#endif
