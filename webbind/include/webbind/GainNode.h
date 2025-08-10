#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct GainOptions GainOptions;
typedef struct AudioParam AudioParam;

DECLARE_EMLITE_TYPE(GainNode, AudioNode);

GainNode GainNode_new0(BaseAudioContext * context);

GainNode GainNode_new1(BaseAudioContext * context, GainOptions * options);

AudioParam GainNode_gain(const GainNode *self);

#ifdef __cplusplus
}
#endif
