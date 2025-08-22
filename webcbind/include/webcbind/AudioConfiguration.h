#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AudioConfiguration */
DECLARE_EMLITE_TYPE(AudioConfiguration, em_Val);

/** @brief Getter of the contentType property */
jb_String AudioConfiguration_contentType(const AudioConfiguration *self);

/** @brief Setter of the contentType property */
void AudioConfiguration_set_contentType(AudioConfiguration* self, jb_String * value);

/** @brief Getter of the channels property */
jb_String AudioConfiguration_channels(const AudioConfiguration *self);

/** @brief Setter of the channels property */
void AudioConfiguration_set_channels(AudioConfiguration* self, jb_String * value);

/** @brief Getter of the bitrate property */
long long AudioConfiguration_bitrate(const AudioConfiguration *self);

/** @brief Setter of the bitrate property */
void AudioConfiguration_set_bitrate(AudioConfiguration* self, long long value);

/** @brief Getter of the samplerate property */
unsigned long AudioConfiguration_samplerate(const AudioConfiguration *self);

/** @brief Setter of the samplerate property */
void AudioConfiguration_set_samplerate(AudioConfiguration* self, unsigned long value);

/** @brief Getter of the spatialRendering property */
bool AudioConfiguration_spatialRendering(const AudioConfiguration *self);

/** @brief Setter of the spatialRendering property */
void AudioConfiguration_set_spatialRendering(AudioConfiguration* self, bool value);

/** @brief Constructor of the AudioConfiguration dictionary type */
AudioConfiguration AudioConfiguration_new();

#ifdef __cplusplus
}
#endif
