#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioEncoderConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AudioEncoderSupport */
DECLARE_EMLITE_TYPE(AudioEncoderSupport, em_Val);

/** @brief Getter of the supported property */
bool AudioEncoderSupport_supported(const AudioEncoderSupport *self);

/** @brief Setter of the supported property */
void AudioEncoderSupport_set_supported(AudioEncoderSupport* self, bool value);

/** @brief Getter of the config property */
AudioEncoderConfig AudioEncoderSupport_config(const AudioEncoderSupport *self);

/** @brief Setter of the config property */
void AudioEncoderSupport_set_config(AudioEncoderSupport* self, AudioEncoderConfig * value);

/** @brief Constructor of the AudioEncoderSupport dictionary type */
AudioEncoderSupport AudioEncoderSupport_new();

#ifdef __cplusplus
}
#endif
