#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct AudioWorkletNodeOptions AudioWorkletNodeOptions;
typedef struct AudioParamMap AudioParamMap;
typedef struct MessagePort MessagePort;

DECLARE_EMLITE_TYPE(AudioWorkletNode, AudioNode);

AudioWorkletNode AudioWorkletNode_new0(BaseAudioContext * context, jb_String * name);

AudioWorkletNode AudioWorkletNode_new1(BaseAudioContext * context, jb_String * name, AudioWorkletNodeOptions * options);

AudioParamMap AudioWorkletNode_parameters(const AudioWorkletNode *self);

MessagePort AudioWorkletNode_port(const AudioWorkletNode *self);

jb_Any AudioWorkletNode_onprocessorerror(const AudioWorkletNode *self);

void AudioWorkletNode_set_onprocessorerror(AudioWorkletNode* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
