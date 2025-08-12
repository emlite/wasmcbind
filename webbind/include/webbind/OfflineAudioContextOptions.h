#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type OfflineAudioContextOptions */
DECLARE_EMLITE_TYPE(OfflineAudioContextOptions, em_Val);

/** @brief Getter of the numberOfChannels property */
unsigned long OfflineAudioContextOptions_numberOfChannels(const OfflineAudioContextOptions *self);

/** @brief Setter of the numberOfChannels property */
void OfflineAudioContextOptions_set_numberOfChannels(OfflineAudioContextOptions* self, unsigned long value);

/** @brief Getter of the length property */
unsigned long OfflineAudioContextOptions_length(const OfflineAudioContextOptions *self);

/** @brief Setter of the length property */
void OfflineAudioContextOptions_set_length(OfflineAudioContextOptions* self, unsigned long value);

/** @brief Getter of the sampleRate property */
float OfflineAudioContextOptions_sampleRate(const OfflineAudioContextOptions *self);

/** @brief Setter of the sampleRate property */
void OfflineAudioContextOptions_set_sampleRate(OfflineAudioContextOptions* self, float value);

/** @brief Getter of the renderSizeHint property */
jb_Any OfflineAudioContextOptions_renderSizeHint(const OfflineAudioContextOptions *self);

/** @brief Setter of the renderSizeHint property */
void OfflineAudioContextOptions_set_renderSizeHint(OfflineAudioContextOptions* self, jb_Any * value);

/** @brief Constructor of the OfflineAudioContextOptions dictionary type */
OfflineAudioContextOptions OfflineAudioContextOptions_new();

#ifdef __cplusplus
}
#endif
