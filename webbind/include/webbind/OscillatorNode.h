#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioScheduledSourceNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct OscillatorOptions OscillatorOptions;
typedef struct AudioParam AudioParam;
typedef struct PeriodicWave PeriodicWave;

DECLARE_EMLITE_TYPE(OscillatorNode, AudioScheduledSourceNode);

OscillatorNode OscillatorNode_new0(BaseAudioContext * context);

OscillatorNode OscillatorNode_new1(BaseAudioContext * context, OscillatorOptions * options);

OscillatorType OscillatorNode_type(const OscillatorNode *self);

void OscillatorNode_set_type(OscillatorNode* self, OscillatorType * value);

AudioParam OscillatorNode_frequency(const OscillatorNode *self);

AudioParam OscillatorNode_detune(const OscillatorNode *self);

jb_Undefined OscillatorNode_setPeriodicWave(OscillatorNode* self , PeriodicWave * periodicWave);

#ifdef __cplusplus
}
#endif
