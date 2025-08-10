#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PeriodicWave PeriodicWave;

DECLARE_EMLITE_TYPE(OscillatorOptions, AudioNodeOptions);

OscillatorType OscillatorOptions_type(const OscillatorOptions *self);

void OscillatorOptions_set_type(OscillatorOptions* self, OscillatorType * value);

float OscillatorOptions_frequency(const OscillatorOptions *self);

void OscillatorOptions_set_frequency(OscillatorOptions* self, float value);

float OscillatorOptions_detune(const OscillatorOptions *self);

void OscillatorOptions_set_detune(OscillatorOptions* self, float value);

PeriodicWave OscillatorOptions_periodicWave(const OscillatorOptions *self);

void OscillatorOptions_set_periodicWave(OscillatorOptions* self, PeriodicWave * value);

OscillatorOptions OscillatorOptions_new();

#ifdef __cplusplus
}
#endif
