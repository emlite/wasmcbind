#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AudioEncoderConfig */
DECLARE_EMLITE_TYPE(AudioEncoderConfig, em_Val);

/** @brief Getter of the codec property */
jb_String AudioEncoderConfig_codec(const AudioEncoderConfig *self);

/** @brief Setter of the codec property */
void AudioEncoderConfig_set_codec(AudioEncoderConfig* self, jb_String * value);

/** @brief Getter of the sampleRate property */
unsigned long AudioEncoderConfig_sampleRate(const AudioEncoderConfig *self);

/** @brief Setter of the sampleRate property */
void AudioEncoderConfig_set_sampleRate(AudioEncoderConfig* self, unsigned long value);

/** @brief Getter of the numberOfChannels property */
unsigned long AudioEncoderConfig_numberOfChannels(const AudioEncoderConfig *self);

/** @brief Setter of the numberOfChannels property */
void AudioEncoderConfig_set_numberOfChannels(AudioEncoderConfig* self, unsigned long value);

/** @brief Getter of the bitrate property */
long long AudioEncoderConfig_bitrate(const AudioEncoderConfig *self);

/** @brief Setter of the bitrate property */
void AudioEncoderConfig_set_bitrate(AudioEncoderConfig* self, long long value);

/** @brief Getter of the bitrateMode property */
BitrateMode AudioEncoderConfig_bitrateMode(const AudioEncoderConfig *self);

/** @brief Setter of the bitrateMode property */
void AudioEncoderConfig_set_bitrateMode(AudioEncoderConfig* self, BitrateMode * value);

/** @brief Constructor of the AudioEncoderConfig dictionary type */
AudioEncoderConfig AudioEncoderConfig_new();

#ifdef __cplusplus
}
#endif
