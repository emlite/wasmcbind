#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AudioDecoderConfig, em_Val);

jb_String AudioDecoderConfig_codec(const AudioDecoderConfig *self);

void AudioDecoderConfig_set_codec(AudioDecoderConfig* self, jb_String * value);

unsigned long AudioDecoderConfig_sampleRate(const AudioDecoderConfig *self);

void AudioDecoderConfig_set_sampleRate(AudioDecoderConfig* self, unsigned long value);

unsigned long AudioDecoderConfig_numberOfChannels(const AudioDecoderConfig *self);

void AudioDecoderConfig_set_numberOfChannels(AudioDecoderConfig* self, unsigned long value);

jb_Any AudioDecoderConfig_description(const AudioDecoderConfig *self);

void AudioDecoderConfig_set_description(AudioDecoderConfig* self, jb_Any * value);

AudioDecoderConfig AudioDecoderConfig_new();

#ifdef __cplusplus
}
#endif
