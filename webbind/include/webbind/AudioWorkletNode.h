#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

typedef struct AudioParamMap AudioParamMap;
typedef struct MessagePort MessagePort;
typedef struct BaseAudioContext BaseAudioContext;


typedef struct {
  AudioNode inner;
} AudioWorkletNode;


DECLARE_EMLITE_TYPE(AudioWorkletNode, AudioNode);

AudioWorkletNode AudioWorkletNode_new(const BaseAudioContext* context, const jb_DOMString* name);

AudioWorkletNode AudioWorkletNode_new(const BaseAudioContext* context, const jb_DOMString* name, const jb_Any* options);

AudioParamMap AudioWorkletNode_parameters( const AudioWorkletNode *self);

jb_Any AudioWorkletNode_port( const AudioWorkletNode *self);

jb_Any AudioWorkletNode_onprocessorerror( const AudioWorkletNode *self);

void AudioWorkletNode_set_onprocessorerror(AudioWorkletNode* self, const jb_Any* value);
