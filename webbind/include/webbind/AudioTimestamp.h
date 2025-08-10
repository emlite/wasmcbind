#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AudioTimestamp, em_Val);

double AudioTimestamp_contextTime(const AudioTimestamp *self);

void AudioTimestamp_set_contextTime(AudioTimestamp* self, double value);

jb_Any AudioTimestamp_performanceTime(const AudioTimestamp *self);

void AudioTimestamp_set_performanceTime(AudioTimestamp* self, jb_Any * value);

AudioTimestamp AudioTimestamp_new();

#ifdef __cplusplus
}
#endif
