#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioScheduledSourceNode.h"
#include "enums.h"

typedef struct AudioParam AudioParam;
typedef struct PeriodicWave PeriodicWave;


typedef struct {
  AudioScheduledSourceNode inner;
} OscillatorNode;


DECLARE_EMLITE_TYPE(OscillatorNode, AudioScheduledSourceNode);

OscillatorNode OscillatorNode_new(const BaseAudioContext* context);

OscillatorNode OscillatorNode_new(const BaseAudioContext* context, const jb_Any* options);

OscillatorType OscillatorNode_type( const OscillatorNode *self);

void OscillatorNode_set_type(OscillatorNode* self, const OscillatorType* value);

AudioParam OscillatorNode_frequency( const OscillatorNode *self);

AudioParam OscillatorNode_detune( const OscillatorNode *self);

jb_Undefined OscillatorNode_setPeriodicWave(OscillatorNode* self , const PeriodicWave* periodicWave);
