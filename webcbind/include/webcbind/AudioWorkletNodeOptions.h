#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AudioWorkletNodeOptions */
DECLARE_EMLITE_TYPE(AudioWorkletNodeOptions, AudioNodeOptions);

/** @brief Getter of the numberOfInputs property */
unsigned long AudioWorkletNodeOptions_numberOfInputs(const AudioWorkletNodeOptions *self);

/** @brief Setter of the numberOfInputs property */
void AudioWorkletNodeOptions_set_numberOfInputs(AudioWorkletNodeOptions* self, unsigned long value);

/** @brief Getter of the numberOfOutputs property */
unsigned long AudioWorkletNodeOptions_numberOfOutputs(const AudioWorkletNodeOptions *self);

/** @brief Setter of the numberOfOutputs property */
void AudioWorkletNodeOptions_set_numberOfOutputs(AudioWorkletNodeOptions* self, unsigned long value);

/** @brief Getter of the outputChannelCount property */
jb_Array AudioWorkletNodeOptions_outputChannelCount(const AudioWorkletNodeOptions *self);

/** @brief Setter of the outputChannelCount property */
void AudioWorkletNodeOptions_set_outputChannelCount(AudioWorkletNodeOptions* self, jb_Array * value);

/** @brief Getter of the parameterData property */
jb_Object AudioWorkletNodeOptions_parameterData(const AudioWorkletNodeOptions *self);

/** @brief Setter of the parameterData property */
void AudioWorkletNodeOptions_set_parameterData(AudioWorkletNodeOptions* self, jb_Object * value);

/** @brief Getter of the processorOptions property */
jb_Object AudioWorkletNodeOptions_processorOptions(const AudioWorkletNodeOptions *self);

/** @brief Setter of the processorOptions property */
void AudioWorkletNodeOptions_set_processorOptions(AudioWorkletNodeOptions* self, jb_Object * value);

/** @brief Constructor of the AudioWorkletNodeOptions dictionary type */
AudioWorkletNodeOptions AudioWorkletNodeOptions_new();

#ifdef __cplusplus
}
#endif
