#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AudioDataCopyToOptions */
DECLARE_EMLITE_TYPE(AudioDataCopyToOptions, em_Val);

/** @brief Getter of the planeIndex property */
unsigned long AudioDataCopyToOptions_planeIndex(const AudioDataCopyToOptions *self);

/** @brief Setter of the planeIndex property */
void AudioDataCopyToOptions_set_planeIndex(AudioDataCopyToOptions* self, unsigned long value);

/** @brief Getter of the frameOffset property */
unsigned long AudioDataCopyToOptions_frameOffset(const AudioDataCopyToOptions *self);

/** @brief Setter of the frameOffset property */
void AudioDataCopyToOptions_set_frameOffset(AudioDataCopyToOptions* self, unsigned long value);

/** @brief Getter of the frameCount property */
unsigned long AudioDataCopyToOptions_frameCount(const AudioDataCopyToOptions *self);

/** @brief Setter of the frameCount property */
void AudioDataCopyToOptions_set_frameCount(AudioDataCopyToOptions* self, unsigned long value);

/** @brief Getter of the format property */
AudioSampleFormat AudioDataCopyToOptions_format(const AudioDataCopyToOptions *self);

/** @brief Setter of the format property */
void AudioDataCopyToOptions_set_format(AudioDataCopyToOptions* self, AudioSampleFormat * value);

/** @brief Constructor of the AudioDataCopyToOptions dictionary type */
AudioDataCopyToOptions AudioDataCopyToOptions_new();

#ifdef __cplusplus
}
#endif
