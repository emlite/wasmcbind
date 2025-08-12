#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AnalyserOptions */
DECLARE_EMLITE_TYPE(AnalyserOptions, AudioNodeOptions);

/** @brief Getter of the fftSize property */
unsigned long AnalyserOptions_fftSize(const AnalyserOptions *self);

/** @brief Setter of the fftSize property */
void AnalyserOptions_set_fftSize(AnalyserOptions* self, unsigned long value);

/** @brief Getter of the maxDecibels property */
double AnalyserOptions_maxDecibels(const AnalyserOptions *self);

/** @brief Setter of the maxDecibels property */
void AnalyserOptions_set_maxDecibels(AnalyserOptions* self, double value);

/** @brief Getter of the minDecibels property */
double AnalyserOptions_minDecibels(const AnalyserOptions *self);

/** @brief Setter of the minDecibels property */
void AnalyserOptions_set_minDecibels(AnalyserOptions* self, double value);

/** @brief Getter of the smoothingTimeConstant property */
double AnalyserOptions_smoothingTimeConstant(const AnalyserOptions *self);

/** @brief Setter of the smoothingTimeConstant property */
void AnalyserOptions_set_smoothingTimeConstant(AnalyserOptions* self, double value);

/** @brief Constructor of the AnalyserOptions dictionary type */
AnalyserOptions AnalyserOptions_new();

#ifdef __cplusplus
}
#endif
