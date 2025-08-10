#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioEncoderInit AudioEncoderInit;
typedef struct AudioEncoderConfig AudioEncoderConfig;
typedef struct AudioData AudioData;
typedef struct AudioEncoderSupport AudioEncoderSupport;

DECLARE_EMLITE_TYPE(AudioEncoder, EventTarget);

AudioEncoder AudioEncoder_new(AudioEncoderInit * init);

CodecState AudioEncoder_state(const AudioEncoder *self);

unsigned long AudioEncoder_encodeQueueSize(const AudioEncoder *self);

jb_Any AudioEncoder_ondequeue(const AudioEncoder *self);

void AudioEncoder_set_ondequeue(AudioEncoder* self, jb_Any * value);

jb_Undefined AudioEncoder_configure(AudioEncoder* self , AudioEncoderConfig * config);

jb_Undefined AudioEncoder_encode(AudioEncoder* self , AudioData * data);

jb_Promise AudioEncoder_flush(AudioEncoder* self );

jb_Undefined AudioEncoder_reset(AudioEncoder* self );

jb_Undefined AudioEncoder_close(AudioEncoder* self );

jb_Promise AudioEncoder_isConfigSupported(AudioEncoder* self , AudioEncoderConfig * config);

#ifdef __cplusplus
}
#endif
