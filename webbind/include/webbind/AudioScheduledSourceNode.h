#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"


typedef struct {
  AudioNode inner;
} AudioScheduledSourceNode;


DECLARE_EMLITE_TYPE(AudioScheduledSourceNode, AudioNode);

jb_Any AudioScheduledSourceNode_onended( const AudioScheduledSourceNode *self);

void AudioScheduledSourceNode_set_onended(AudioScheduledSourceNode* self, const jb_Any* value);

jb_Undefined AudioScheduledSourceNode_start(AudioScheduledSourceNode* self );

jb_Undefined AudioScheduledSourceNode_start(AudioScheduledSourceNode* self , double when);

jb_Undefined AudioScheduledSourceNode_stop(AudioScheduledSourceNode* self );

jb_Undefined AudioScheduledSourceNode_stop(AudioScheduledSourceNode* self , double when);
