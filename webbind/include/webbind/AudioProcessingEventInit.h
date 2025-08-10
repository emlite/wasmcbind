#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioBuffer AudioBuffer;

DECLARE_EMLITE_TYPE(AudioProcessingEventInit, EventInit);

double AudioProcessingEventInit_playbackTime(const AudioProcessingEventInit *self);

void AudioProcessingEventInit_set_playbackTime(AudioProcessingEventInit* self, double value);

AudioBuffer AudioProcessingEventInit_inputBuffer(const AudioProcessingEventInit *self);

void AudioProcessingEventInit_set_inputBuffer(AudioProcessingEventInit* self, AudioBuffer * value);

AudioBuffer AudioProcessingEventInit_outputBuffer(const AudioProcessingEventInit *self);

void AudioProcessingEventInit_set_outputBuffer(AudioProcessingEventInit* self, AudioBuffer * value);

AudioProcessingEventInit AudioProcessingEventInit_new();

#ifdef __cplusplus
}
#endif
