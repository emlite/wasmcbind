#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AnalyserOptions, AudioNodeOptions);

unsigned long AnalyserOptions_fftSize(const AnalyserOptions *self);

void AnalyserOptions_set_fftSize(AnalyserOptions* self, unsigned long value);

double AnalyserOptions_maxDecibels(const AnalyserOptions *self);

void AnalyserOptions_set_maxDecibels(AnalyserOptions* self, double value);

double AnalyserOptions_minDecibels(const AnalyserOptions *self);

void AnalyserOptions_set_minDecibels(AnalyserOptions* self, double value);

double AnalyserOptions_smoothingTimeConstant(const AnalyserOptions *self);

void AnalyserOptions_set_smoothingTimeConstant(AnalyserOptions* self, double value);

AnalyserOptions AnalyserOptions_new();

#ifdef __cplusplus
}
#endif
