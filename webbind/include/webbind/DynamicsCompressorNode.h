#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct DynamicsCompressorOptions DynamicsCompressorOptions;
typedef struct AudioParam AudioParam;

DECLARE_EMLITE_TYPE(DynamicsCompressorNode, AudioNode);

DynamicsCompressorNode DynamicsCompressorNode_new0(BaseAudioContext * context);

DynamicsCompressorNode DynamicsCompressorNode_new1(BaseAudioContext * context, DynamicsCompressorOptions * options);

AudioParam DynamicsCompressorNode_threshold(const DynamicsCompressorNode *self);

AudioParam DynamicsCompressorNode_knee(const DynamicsCompressorNode *self);

AudioParam DynamicsCompressorNode_ratio(const DynamicsCompressorNode *self);

float DynamicsCompressorNode_reduction(const DynamicsCompressorNode *self);

AudioParam DynamicsCompressorNode_attack(const DynamicsCompressorNode *self);

AudioParam DynamicsCompressorNode_release(const DynamicsCompressorNode *self);

#ifdef __cplusplus
}
#endif
