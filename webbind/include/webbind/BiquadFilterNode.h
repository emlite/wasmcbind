#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct BiquadFilterOptions BiquadFilterOptions;
typedef struct AudioParam AudioParam;

DECLARE_EMLITE_TYPE(BiquadFilterNode, AudioNode);

BiquadFilterNode BiquadFilterNode_new0(BaseAudioContext * context);

BiquadFilterNode BiquadFilterNode_new1(BaseAudioContext * context, BiquadFilterOptions * options);

BiquadFilterType BiquadFilterNode_type(const BiquadFilterNode *self);

void BiquadFilterNode_set_type(BiquadFilterNode* self, BiquadFilterType * value);

AudioParam BiquadFilterNode_frequency(const BiquadFilterNode *self);

AudioParam BiquadFilterNode_detune(const BiquadFilterNode *self);

AudioParam BiquadFilterNode_Q(const BiquadFilterNode *self);

AudioParam BiquadFilterNode_gain(const BiquadFilterNode *self);

jb_Undefined BiquadFilterNode_getFrequencyResponse(BiquadFilterNode* self , jb_Float32Array * frequencyHz, jb_Float32Array * magResponse, jb_Float32Array * phaseResponse);

#ifdef __cplusplus
}
#endif
