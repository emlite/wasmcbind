#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct IIRFilterOptions IIRFilterOptions;

DECLARE_EMLITE_TYPE(IIRFilterNode, AudioNode);

IIRFilterNode IIRFilterNode_new(BaseAudioContext * context, IIRFilterOptions * options);

jb_Undefined IIRFilterNode_getFrequencyResponse(IIRFilterNode* self , jb_Float32Array * frequencyHz, jb_Float32Array * magResponse, jb_Float32Array * phaseResponse);

#ifdef __cplusplus
}
#endif
