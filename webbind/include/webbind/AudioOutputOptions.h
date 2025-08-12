#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AudioOutputOptions */
DECLARE_EMLITE_TYPE(AudioOutputOptions, em_Val);

/** @brief Getter of the deviceId property */
jb_String AudioOutputOptions_deviceId(const AudioOutputOptions *self);

/** @brief Setter of the deviceId property */
void AudioOutputOptions_set_deviceId(AudioOutputOptions* self, jb_String * value);

/** @brief Constructor of the AudioOutputOptions dictionary type */
AudioOutputOptions AudioOutputOptions_new();

#ifdef __cplusplus
}
#endif
