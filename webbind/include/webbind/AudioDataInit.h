#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AudioDataInit, em_Val);

AudioSampleFormat AudioDataInit_format(const AudioDataInit *self);

void AudioDataInit_set_format(AudioDataInit* self, AudioSampleFormat * value);

float AudioDataInit_sampleRate(const AudioDataInit *self);

void AudioDataInit_set_sampleRate(AudioDataInit* self, float value);

unsigned long AudioDataInit_numberOfFrames(const AudioDataInit *self);

void AudioDataInit_set_numberOfFrames(AudioDataInit* self, unsigned long value);

unsigned long AudioDataInit_numberOfChannels(const AudioDataInit *self);

void AudioDataInit_set_numberOfChannels(AudioDataInit* self, unsigned long value);

long long AudioDataInit_timestamp(const AudioDataInit *self);

void AudioDataInit_set_timestamp(AudioDataInit* self, long long value);

jb_Any AudioDataInit_data(const AudioDataInit *self);

void AudioDataInit_set_data(AudioDataInit* self, jb_Any * value);

jb_Array AudioDataInit_transfer(const AudioDataInit *self);

void AudioDataInit_set_transfer(AudioDataInit* self, jb_Array * value);

AudioDataInit AudioDataInit_new();

#ifdef __cplusplus
}
#endif
