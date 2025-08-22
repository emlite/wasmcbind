#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioDecoderConfig.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AudioDecoderSupport */
DECLARE_EMLITE_TYPE(AudioDecoderSupport, em_Val);

/** @brief Getter of the supported property */
bool AudioDecoderSupport_supported(const AudioDecoderSupport *self);

/** @brief Setter of the supported property */
void AudioDecoderSupport_set_supported(AudioDecoderSupport* self, bool value);

/** @brief Getter of the config property */
AudioDecoderConfig AudioDecoderSupport_config(const AudioDecoderSupport *self);

/** @brief Setter of the config property */
void AudioDecoderSupport_set_config(AudioDecoderSupport* self, AudioDecoderConfig * value);

/** @brief Constructor of the AudioDecoderSupport dictionary type */
AudioDecoderSupport AudioDecoderSupport_new();

#ifdef __cplusplus
}
#endif
