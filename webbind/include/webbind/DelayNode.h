#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

typedef struct AudioParam AudioParam;


typedef struct {
  AudioNode inner;
} DelayNode;


DECLARE_EMLITE_TYPE(DelayNode, AudioNode);

DelayNode DelayNode_new(const BaseAudioContext* context);

DelayNode DelayNode_new(const BaseAudioContext* context, const jb_Any* options);

AudioParam DelayNode_delayTime( const DelayNode *self);
