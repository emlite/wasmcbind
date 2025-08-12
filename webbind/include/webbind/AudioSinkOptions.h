#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AudioSinkOptions */
DECLARE_EMLITE_TYPE(AudioSinkOptions, em_Val);

/** @brief Getter of the type property */
AudioSinkType AudioSinkOptions_type(const AudioSinkOptions *self);

/** @brief Setter of the type property */
void AudioSinkOptions_set_type(AudioSinkOptions* self, AudioSinkType * value);

/** @brief Constructor of the AudioSinkOptions dictionary type */
AudioSinkOptions AudioSinkOptions_new();

#ifdef __cplusplus
}
#endif
