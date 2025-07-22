#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

typedef struct AudioBuffer AudioBuffer;


typedef struct {
  AudioNode inner;
} ConvolverNode;


DECLARE_EMLITE_TYPE(ConvolverNode, AudioNode);

ConvolverNode ConvolverNode_new(const BaseAudioContext* context);

ConvolverNode ConvolverNode_new(const BaseAudioContext* context, const jb_Any* options);

AudioBuffer ConvolverNode_buffer( const ConvolverNode *self);

void ConvolverNode_set_buffer(ConvolverNode* self, const AudioBuffer* value);

bool ConvolverNode_normalize( const ConvolverNode *self);

void ConvolverNode_set_normalize(ConvolverNode* self, bool value);
