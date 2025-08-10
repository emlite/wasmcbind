#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(OfflineAudioContextOptions, em_Val);

unsigned long OfflineAudioContextOptions_numberOfChannels(const OfflineAudioContextOptions *self);

void OfflineAudioContextOptions_set_numberOfChannels(OfflineAudioContextOptions* self, unsigned long value);

unsigned long OfflineAudioContextOptions_length(const OfflineAudioContextOptions *self);

void OfflineAudioContextOptions_set_length(OfflineAudioContextOptions* self, unsigned long value);

float OfflineAudioContextOptions_sampleRate(const OfflineAudioContextOptions *self);

void OfflineAudioContextOptions_set_sampleRate(OfflineAudioContextOptions* self, float value);

jb_Any OfflineAudioContextOptions_renderSizeHint(const OfflineAudioContextOptions *self);

void OfflineAudioContextOptions_set_renderSizeHint(OfflineAudioContextOptions* self, jb_Any * value);

OfflineAudioContextOptions OfflineAudioContextOptions_new();

#ifdef __cplusplus
}
#endif
