#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioScheduledSourceNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct ConstantSourceOptions ConstantSourceOptions;
typedef struct AudioParam AudioParam;

DECLARE_EMLITE_TYPE(ConstantSourceNode, AudioScheduledSourceNode);

ConstantSourceNode ConstantSourceNode_new0(BaseAudioContext * context);

ConstantSourceNode ConstantSourceNode_new1(BaseAudioContext * context, ConstantSourceOptions * options);

AudioParam ConstantSourceNode_offset(const ConstantSourceNode *self);

#ifdef __cplusplus
}
#endif
