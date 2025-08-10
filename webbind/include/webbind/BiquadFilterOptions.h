#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(BiquadFilterOptions, AudioNodeOptions);

BiquadFilterType BiquadFilterOptions_type(const BiquadFilterOptions *self);

void BiquadFilterOptions_set_type(BiquadFilterOptions* self, BiquadFilterType * value);

float BiquadFilterOptions_Q(const BiquadFilterOptions *self);

void BiquadFilterOptions_set_Q(BiquadFilterOptions* self, float value);

float BiquadFilterOptions_detune(const BiquadFilterOptions *self);

void BiquadFilterOptions_set_detune(BiquadFilterOptions* self, float value);

float BiquadFilterOptions_frequency(const BiquadFilterOptions *self);

void BiquadFilterOptions_set_frequency(BiquadFilterOptions* self, float value);

float BiquadFilterOptions_gain(const BiquadFilterOptions *self);

void BiquadFilterOptions_set_gain(BiquadFilterOptions* self, float value);

BiquadFilterOptions BiquadFilterOptions_new();

#ifdef __cplusplus
}
#endif
