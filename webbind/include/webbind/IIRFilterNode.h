#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"


typedef struct {
  AudioNode inner;
} IIRFilterNode;


DECLARE_EMLITE_TYPE(IIRFilterNode, AudioNode);

IIRFilterNode IIRFilterNode_new(const BaseAudioContext* context, const jb_Any* options);

jb_Undefined IIRFilterNode_getFrequencyResponse(IIRFilterNode* self , const jb_Float32Array* frequencyHz, const jb_Float32Array* magResponse, const jb_Float32Array* phaseResponse);
