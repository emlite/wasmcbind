#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioBuffer AudioBuffer;

/** @brief Dictionary type AudioProcessingEventInit */
DECLARE_EMLITE_TYPE(AudioProcessingEventInit, EventInit);

/** @brief Getter of the playbackTime property */
double AudioProcessingEventInit_playbackTime(const AudioProcessingEventInit *self);

/** @brief Setter of the playbackTime property */
void AudioProcessingEventInit_set_playbackTime(AudioProcessingEventInit* self, double value);

/** @brief Getter of the inputBuffer property */
AudioBuffer AudioProcessingEventInit_inputBuffer(const AudioProcessingEventInit *self);

/** @brief Setter of the inputBuffer property */
void AudioProcessingEventInit_set_inputBuffer(AudioProcessingEventInit* self, AudioBuffer * value);

/** @brief Getter of the outputBuffer property */
AudioBuffer AudioProcessingEventInit_outputBuffer(const AudioProcessingEventInit *self);

/** @brief Setter of the outputBuffer property */
void AudioProcessingEventInit_set_outputBuffer(AudioProcessingEventInit* self, AudioBuffer * value);

/** @brief Constructor of the AudioProcessingEventInit dictionary type */
AudioProcessingEventInit AudioProcessingEventInit_new();

#ifdef __cplusplus
}
#endif
