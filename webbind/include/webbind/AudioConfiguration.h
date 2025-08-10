#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AudioConfiguration, em_Val);

jb_String AudioConfiguration_contentType(const AudioConfiguration *self);

void AudioConfiguration_set_contentType(AudioConfiguration* self, jb_String * value);

jb_String AudioConfiguration_channels(const AudioConfiguration *self);

void AudioConfiguration_set_channels(AudioConfiguration* self, jb_String * value);

long long AudioConfiguration_bitrate(const AudioConfiguration *self);

void AudioConfiguration_set_bitrate(AudioConfiguration* self, long long value);

unsigned long AudioConfiguration_samplerate(const AudioConfiguration *self);

void AudioConfiguration_set_samplerate(AudioConfiguration* self, unsigned long value);

bool AudioConfiguration_spatialRendering(const AudioConfiguration *self);

void AudioConfiguration_set_spatialRendering(AudioConfiguration* self, bool value);

AudioConfiguration AudioConfiguration_new();

#ifdef __cplusplus
}
#endif
