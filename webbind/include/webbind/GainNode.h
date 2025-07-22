#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

typedef struct AudioParam AudioParam;


typedef struct {
  AudioNode inner;
} GainNode;


DECLARE_EMLITE_TYPE(GainNode, AudioNode);

GainNode GainNode_new(const BaseAudioContext* context);

GainNode GainNode_new(const BaseAudioContext* context, const jb_Any* options);

AudioParam GainNode_gain( const GainNode *self);
