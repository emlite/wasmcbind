#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AudioDataInit */
DECLARE_EMLITE_TYPE(AudioDataInit, em_Val);

/** @brief Getter of the format property */
AudioSampleFormat AudioDataInit_format(const AudioDataInit *self);

/** @brief Setter of the format property */
void AudioDataInit_set_format(AudioDataInit* self, AudioSampleFormat * value);

/** @brief Getter of the sampleRate property */
float AudioDataInit_sampleRate(const AudioDataInit *self);

/** @brief Setter of the sampleRate property */
void AudioDataInit_set_sampleRate(AudioDataInit* self, float value);

/** @brief Getter of the numberOfFrames property */
unsigned long AudioDataInit_numberOfFrames(const AudioDataInit *self);

/** @brief Setter of the numberOfFrames property */
void AudioDataInit_set_numberOfFrames(AudioDataInit* self, unsigned long value);

/** @brief Getter of the numberOfChannels property */
unsigned long AudioDataInit_numberOfChannels(const AudioDataInit *self);

/** @brief Setter of the numberOfChannels property */
void AudioDataInit_set_numberOfChannels(AudioDataInit* self, unsigned long value);

/** @brief Getter of the timestamp property */
long long AudioDataInit_timestamp(const AudioDataInit *self);

/** @brief Setter of the timestamp property */
void AudioDataInit_set_timestamp(AudioDataInit* self, long long value);

/** @brief Getter of the data property */
jb_Any AudioDataInit_data(const AudioDataInit *self);

/** @brief Setter of the data property */
void AudioDataInit_set_data(AudioDataInit* self, jb_Any * value);

/** @brief Getter of the transfer property */
jb_Array AudioDataInit_transfer(const AudioDataInit *self);

/** @brief Setter of the transfer property */
void AudioDataInit_set_transfer(AudioDataInit* self, jb_Array * value);

/** @brief Constructor of the AudioDataInit dictionary type */
AudioDataInit AudioDataInit_new();

#ifdef __cplusplus
}
#endif
