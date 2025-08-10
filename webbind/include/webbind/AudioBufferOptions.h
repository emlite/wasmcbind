#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AudioBufferOptions, em_Val);

unsigned long AudioBufferOptions_numberOfChannels(const AudioBufferOptions *self);

void AudioBufferOptions_set_numberOfChannels(AudioBufferOptions* self, unsigned long value);

unsigned long AudioBufferOptions_length(const AudioBufferOptions *self);

void AudioBufferOptions_set_length(AudioBufferOptions* self, unsigned long value);

float AudioBufferOptions_sampleRate(const AudioBufferOptions *self);

void AudioBufferOptions_set_sampleRate(AudioBufferOptions* self, float value);

AudioBufferOptions AudioBufferOptions_new();

#ifdef __cplusplus
}
#endif
