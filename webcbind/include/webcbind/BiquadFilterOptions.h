#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type BiquadFilterOptions */
DECLARE_EMLITE_TYPE(BiquadFilterOptions, AudioNodeOptions);

/** @brief Getter of the type property */
BiquadFilterType BiquadFilterOptions_type(const BiquadFilterOptions *self);

/** @brief Setter of the type property */
void BiquadFilterOptions_set_type(BiquadFilterOptions* self, BiquadFilterType * value);

/** @brief Getter of the Q property */
float BiquadFilterOptions_Q(const BiquadFilterOptions *self);

/** @brief Setter of the Q property */
void BiquadFilterOptions_set_Q(BiquadFilterOptions* self, float value);

/** @brief Getter of the detune property */
float BiquadFilterOptions_detune(const BiquadFilterOptions *self);

/** @brief Setter of the detune property */
void BiquadFilterOptions_set_detune(BiquadFilterOptions* self, float value);

/** @brief Getter of the frequency property */
float BiquadFilterOptions_frequency(const BiquadFilterOptions *self);

/** @brief Setter of the frequency property */
void BiquadFilterOptions_set_frequency(BiquadFilterOptions* self, float value);

/** @brief Getter of the gain property */
float BiquadFilterOptions_gain(const BiquadFilterOptions *self);

/** @brief Setter of the gain property */
void BiquadFilterOptions_set_gain(BiquadFilterOptions* self, float value);

/** @brief Constructor of the BiquadFilterOptions dictionary type */
BiquadFilterOptions BiquadFilterOptions_new();

#ifdef __cplusplus
}
#endif
