#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AudioContextOptions, em_Val);

jb_Any AudioContextOptions_latencyHint(const AudioContextOptions *self);

void AudioContextOptions_set_latencyHint(AudioContextOptions* self, jb_Any * value);

float AudioContextOptions_sampleRate(const AudioContextOptions *self);

void AudioContextOptions_set_sampleRate(AudioContextOptions* self, float value);

jb_Any AudioContextOptions_sinkId(const AudioContextOptions *self);

void AudioContextOptions_set_sinkId(AudioContextOptions* self, jb_Any * value);

jb_Any AudioContextOptions_renderSizeHint(const AudioContextOptions *self);

void AudioContextOptions_set_renderSizeHint(AudioContextOptions* self, jb_Any * value);

AudioContextOptions AudioContextOptions_new();

#ifdef __cplusplus
}
#endif
