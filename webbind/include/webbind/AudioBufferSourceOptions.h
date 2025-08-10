#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioBuffer AudioBuffer;

DECLARE_EMLITE_TYPE(AudioBufferSourceOptions, em_Val);

AudioBuffer AudioBufferSourceOptions_buffer(const AudioBufferSourceOptions *self);

void AudioBufferSourceOptions_set_buffer(AudioBufferSourceOptions* self, AudioBuffer * value);

float AudioBufferSourceOptions_detune(const AudioBufferSourceOptions *self);

void AudioBufferSourceOptions_set_detune(AudioBufferSourceOptions* self, float value);

bool AudioBufferSourceOptions_loop(const AudioBufferSourceOptions *self);

void AudioBufferSourceOptions_set_loop(AudioBufferSourceOptions* self, bool value);

double AudioBufferSourceOptions_loopEnd(const AudioBufferSourceOptions *self);

void AudioBufferSourceOptions_set_loopEnd(AudioBufferSourceOptions* self, double value);

double AudioBufferSourceOptions_loopStart(const AudioBufferSourceOptions *self);

void AudioBufferSourceOptions_set_loopStart(AudioBufferSourceOptions* self, double value);

float AudioBufferSourceOptions_playbackRate(const AudioBufferSourceOptions *self);

void AudioBufferSourceOptions_set_playbackRate(AudioBufferSourceOptions* self, float value);

AudioBufferSourceOptions AudioBufferSourceOptions_new();

#ifdef __cplusplus
}
#endif
