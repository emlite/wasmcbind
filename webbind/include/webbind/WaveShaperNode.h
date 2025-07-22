#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"


typedef struct {
  AudioNode inner;
} WaveShaperNode;


DECLARE_EMLITE_TYPE(WaveShaperNode, AudioNode);

WaveShaperNode WaveShaperNode_new(const BaseAudioContext* context);

WaveShaperNode WaveShaperNode_new(const BaseAudioContext* context, const jb_Any* options);

jb_Float32Array WaveShaperNode_curve( const WaveShaperNode *self);

void WaveShaperNode_set_curve(WaveShaperNode* self, const jb_Float32Array* value);

OverSampleType WaveShaperNode_oversample( const WaveShaperNode *self);

void WaveShaperNode_set_oversample(WaveShaperNode* self, const OverSampleType* value);
