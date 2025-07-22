#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

typedef struct AudioParam AudioParam;


typedef struct {
  AudioNode inner;
} BiquadFilterNode;


DECLARE_EMLITE_TYPE(BiquadFilterNode, AudioNode);

BiquadFilterNode BiquadFilterNode_new(const BaseAudioContext* context);

BiquadFilterNode BiquadFilterNode_new(const BaseAudioContext* context, const jb_Any* options);

BiquadFilterType BiquadFilterNode_type( const BiquadFilterNode *self);

void BiquadFilterNode_set_type(BiquadFilterNode* self, const BiquadFilterType* value);

AudioParam BiquadFilterNode_frequency( const BiquadFilterNode *self);

AudioParam BiquadFilterNode_detune( const BiquadFilterNode *self);

AudioParam BiquadFilterNode_Q( const BiquadFilterNode *self);

AudioParam BiquadFilterNode_gain( const BiquadFilterNode *self);

jb_Undefined BiquadFilterNode_getFrequencyResponse(BiquadFilterNode* self , const jb_Float32Array* frequencyHz, const jb_Float32Array* magResponse, const jb_Float32Array* phaseResponse);
