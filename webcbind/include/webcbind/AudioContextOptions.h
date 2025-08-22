#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AudioContextOptions */
DECLARE_EMLITE_TYPE(AudioContextOptions, em_Val);

/** @brief Getter of the latencyHint property */
jb_Any AudioContextOptions_latencyHint(const AudioContextOptions *self);

/** @brief Setter of the latencyHint property */
void AudioContextOptions_set_latencyHint(AudioContextOptions* self, jb_Any * value);

/** @brief Getter of the sampleRate property */
float AudioContextOptions_sampleRate(const AudioContextOptions *self);

/** @brief Setter of the sampleRate property */
void AudioContextOptions_set_sampleRate(AudioContextOptions* self, float value);

/** @brief Getter of the sinkId property */
jb_Any AudioContextOptions_sinkId(const AudioContextOptions *self);

/** @brief Setter of the sinkId property */
void AudioContextOptions_set_sinkId(AudioContextOptions* self, jb_Any * value);

/** @brief Getter of the renderSizeHint property */
jb_Any AudioContextOptions_renderSizeHint(const AudioContextOptions *self);

/** @brief Setter of the renderSizeHint property */
void AudioContextOptions_set_renderSizeHint(AudioContextOptions* self, jb_Any * value);

/** @brief Constructor of the AudioContextOptions dictionary type */
AudioContextOptions AudioContextOptions_new();

#ifdef __cplusplus
}
#endif
