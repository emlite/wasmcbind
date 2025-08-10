#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct DelayOptions DelayOptions;
typedef struct AudioParam AudioParam;

DECLARE_EMLITE_TYPE(DelayNode, AudioNode);

DelayNode DelayNode_new0(BaseAudioContext * context);

DelayNode DelayNode_new1(BaseAudioContext * context, DelayOptions * options);

AudioParam DelayNode_delayTime(const DelayNode *self);

#ifdef __cplusplus
}
#endif
