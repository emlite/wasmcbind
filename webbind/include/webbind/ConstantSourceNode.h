#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioScheduledSourceNode.h"
#include "enums.h"

typedef struct AudioParam AudioParam;


typedef struct {
  AudioScheduledSourceNode inner;
} ConstantSourceNode;


DECLARE_EMLITE_TYPE(ConstantSourceNode, AudioScheduledSourceNode);

ConstantSourceNode ConstantSourceNode_new(const BaseAudioContext* context);

ConstantSourceNode ConstantSourceNode_new(const BaseAudioContext* context, const jb_Any* options);

AudioParam ConstantSourceNode_offset( const ConstantSourceNode *self);
