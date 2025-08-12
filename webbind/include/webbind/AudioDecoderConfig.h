#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AudioDecoderConfig */
DECLARE_EMLITE_TYPE(AudioDecoderConfig, em_Val);

/** @brief Getter of the codec property */
jb_String AudioDecoderConfig_codec(const AudioDecoderConfig *self);

/** @brief Setter of the codec property */
void AudioDecoderConfig_set_codec(AudioDecoderConfig* self, jb_String * value);

/** @brief Getter of the sampleRate property */
unsigned long AudioDecoderConfig_sampleRate(const AudioDecoderConfig *self);

/** @brief Setter of the sampleRate property */
void AudioDecoderConfig_set_sampleRate(AudioDecoderConfig* self, unsigned long value);

/** @brief Getter of the numberOfChannels property */
unsigned long AudioDecoderConfig_numberOfChannels(const AudioDecoderConfig *self);

/** @brief Setter of the numberOfChannels property */
void AudioDecoderConfig_set_numberOfChannels(AudioDecoderConfig* self, unsigned long value);

/** @brief Getter of the description property */
jb_Any AudioDecoderConfig_description(const AudioDecoderConfig *self);

/** @brief Setter of the description property */
void AudioDecoderConfig_set_description(AudioDecoderConfig* self, jb_Any * value);

/** @brief Constructor of the AudioDecoderConfig dictionary type */
AudioDecoderConfig AudioDecoderConfig_new();

#ifdef __cplusplus
}
#endif
