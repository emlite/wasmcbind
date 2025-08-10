#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AudioWorkletNodeOptions, AudioNodeOptions);

unsigned long AudioWorkletNodeOptions_numberOfInputs(const AudioWorkletNodeOptions *self);

void AudioWorkletNodeOptions_set_numberOfInputs(AudioWorkletNodeOptions* self, unsigned long value);

unsigned long AudioWorkletNodeOptions_numberOfOutputs(const AudioWorkletNodeOptions *self);

void AudioWorkletNodeOptions_set_numberOfOutputs(AudioWorkletNodeOptions* self, unsigned long value);

jb_Array AudioWorkletNodeOptions_outputChannelCount(const AudioWorkletNodeOptions *self);

void AudioWorkletNodeOptions_set_outputChannelCount(AudioWorkletNodeOptions* self, jb_Array * value);

jb_Object AudioWorkletNodeOptions_parameterData(const AudioWorkletNodeOptions *self);

void AudioWorkletNodeOptions_set_parameterData(AudioWorkletNodeOptions* self, jb_Object * value);

jb_Object AudioWorkletNodeOptions_processorOptions(const AudioWorkletNodeOptions *self);

void AudioWorkletNodeOptions_set_processorOptions(AudioWorkletNodeOptions* self, jb_Object * value);

AudioWorkletNodeOptions AudioWorkletNodeOptions_new();

#ifdef __cplusplus
}
#endif
