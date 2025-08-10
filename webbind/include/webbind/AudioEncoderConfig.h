#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AudioEncoderConfig, em_Val);

jb_String AudioEncoderConfig_codec(const AudioEncoderConfig *self);

void AudioEncoderConfig_set_codec(AudioEncoderConfig* self, jb_String * value);

unsigned long AudioEncoderConfig_sampleRate(const AudioEncoderConfig *self);

void AudioEncoderConfig_set_sampleRate(AudioEncoderConfig* self, unsigned long value);

unsigned long AudioEncoderConfig_numberOfChannels(const AudioEncoderConfig *self);

void AudioEncoderConfig_set_numberOfChannels(AudioEncoderConfig* self, unsigned long value);

long long AudioEncoderConfig_bitrate(const AudioEncoderConfig *self);

void AudioEncoderConfig_set_bitrate(AudioEncoderConfig* self, long long value);

BitrateMode AudioEncoderConfig_bitrateMode(const AudioEncoderConfig *self);

void AudioEncoderConfig_set_bitrateMode(AudioEncoderConfig* self, BitrateMode * value);

AudioEncoderConfig AudioEncoderConfig_new();

#ifdef __cplusplus
}
#endif
