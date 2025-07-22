#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioScheduledSourceNode.h"
#include "enums.h"

typedef struct AudioBuffer AudioBuffer;
typedef struct AudioParam AudioParam;


typedef struct {
  AudioScheduledSourceNode inner;
} AudioBufferSourceNode;


DECLARE_EMLITE_TYPE(AudioBufferSourceNode, AudioScheduledSourceNode);

AudioBufferSourceNode AudioBufferSourceNode_new(const BaseAudioContext* context);

AudioBufferSourceNode AudioBufferSourceNode_new(const BaseAudioContext* context, const jb_Any* options);

AudioBuffer AudioBufferSourceNode_buffer( const AudioBufferSourceNode *self);

void AudioBufferSourceNode_set_buffer(AudioBufferSourceNode* self, const AudioBuffer* value);

AudioParam AudioBufferSourceNode_playbackRate( const AudioBufferSourceNode *self);

AudioParam AudioBufferSourceNode_detune( const AudioBufferSourceNode *self);

bool AudioBufferSourceNode_loop( const AudioBufferSourceNode *self);

void AudioBufferSourceNode_set_loop(AudioBufferSourceNode* self, bool value);

double AudioBufferSourceNode_loopStart( const AudioBufferSourceNode *self);

void AudioBufferSourceNode_set_loopStart(AudioBufferSourceNode* self, double value);

double AudioBufferSourceNode_loopEnd( const AudioBufferSourceNode *self);

void AudioBufferSourceNode_set_loopEnd(AudioBufferSourceNode* self, double value);

jb_Undefined AudioBufferSourceNode_start(AudioBufferSourceNode* self );

jb_Undefined AudioBufferSourceNode_start(AudioBufferSourceNode* self , double when);

jb_Undefined AudioBufferSourceNode_start(AudioBufferSourceNode* self , double when, double offset);

jb_Undefined AudioBufferSourceNode_start(AudioBufferSourceNode* self , double when, double offset, double duration);
