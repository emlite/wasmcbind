#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AudioBufferOptions */
DECLARE_EMLITE_TYPE(AudioBufferOptions, em_Val);

/** @brief Getter of the numberOfChannels property */
unsigned long AudioBufferOptions_numberOfChannels(const AudioBufferOptions *self);

/** @brief Setter of the numberOfChannels property */
void AudioBufferOptions_set_numberOfChannels(AudioBufferOptions* self, unsigned long value);

/** @brief Getter of the length property */
unsigned long AudioBufferOptions_length(const AudioBufferOptions *self);

/** @brief Setter of the length property */
void AudioBufferOptions_set_length(AudioBufferOptions* self, unsigned long value);

/** @brief Getter of the sampleRate property */
float AudioBufferOptions_sampleRate(const AudioBufferOptions *self);

/** @brief Setter of the sampleRate property */
void AudioBufferOptions_set_sampleRate(AudioBufferOptions* self, float value);

/** @brief Constructor of the AudioBufferOptions dictionary type */
AudioBufferOptions AudioBufferOptions_new();

#ifdef __cplusplus
}
#endif
