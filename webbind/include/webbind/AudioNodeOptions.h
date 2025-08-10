#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AudioNodeOptions, em_Val);

unsigned long AudioNodeOptions_channelCount(const AudioNodeOptions *self);

void AudioNodeOptions_set_channelCount(AudioNodeOptions* self, unsigned long value);

ChannelCountMode AudioNodeOptions_channelCountMode(const AudioNodeOptions *self);

void AudioNodeOptions_set_channelCountMode(AudioNodeOptions* self, ChannelCountMode * value);

ChannelInterpretation AudioNodeOptions_channelInterpretation(const AudioNodeOptions *self);

void AudioNodeOptions_set_channelInterpretation(AudioNodeOptions* self, ChannelInterpretation * value);

AudioNodeOptions AudioNodeOptions_new();

#ifdef __cplusplus
}
#endif
