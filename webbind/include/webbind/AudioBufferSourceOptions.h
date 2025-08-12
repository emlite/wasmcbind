#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioBuffer AudioBuffer;

/** @brief Dictionary type AudioBufferSourceOptions */
DECLARE_EMLITE_TYPE(AudioBufferSourceOptions, em_Val);

/** @brief Getter of the buffer property */
AudioBuffer AudioBufferSourceOptions_buffer(const AudioBufferSourceOptions *self);

/** @brief Setter of the buffer property */
void AudioBufferSourceOptions_set_buffer(AudioBufferSourceOptions* self, AudioBuffer * value);

/** @brief Getter of the detune property */
float AudioBufferSourceOptions_detune(const AudioBufferSourceOptions *self);

/** @brief Setter of the detune property */
void AudioBufferSourceOptions_set_detune(AudioBufferSourceOptions* self, float value);

/** @brief Getter of the loop property */
bool AudioBufferSourceOptions_loop(const AudioBufferSourceOptions *self);

/** @brief Setter of the loop property */
void AudioBufferSourceOptions_set_loop(AudioBufferSourceOptions* self, bool value);

/** @brief Getter of the loopEnd property */
double AudioBufferSourceOptions_loopEnd(const AudioBufferSourceOptions *self);

/** @brief Setter of the loopEnd property */
void AudioBufferSourceOptions_set_loopEnd(AudioBufferSourceOptions* self, double value);

/** @brief Getter of the loopStart property */
double AudioBufferSourceOptions_loopStart(const AudioBufferSourceOptions *self);

/** @brief Setter of the loopStart property */
void AudioBufferSourceOptions_set_loopStart(AudioBufferSourceOptions* self, double value);

/** @brief Getter of the playbackRate property */
float AudioBufferSourceOptions_playbackRate(const AudioBufferSourceOptions *self);

/** @brief Setter of the playbackRate property */
void AudioBufferSourceOptions_set_playbackRate(AudioBufferSourceOptions* self, float value);

/** @brief Constructor of the AudioBufferSourceOptions dictionary type */
AudioBufferSourceOptions AudioBufferSourceOptions_new();

#ifdef __cplusplus
}
#endif
