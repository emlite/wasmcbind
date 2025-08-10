#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ChannelSplitterOptions, AudioNodeOptions);

unsigned long ChannelSplitterOptions_numberOfOutputs(const ChannelSplitterOptions *self);

void ChannelSplitterOptions_set_numberOfOutputs(ChannelSplitterOptions* self, unsigned long value);

ChannelSplitterOptions ChannelSplitterOptions_new();

#ifdef __cplusplus
}
#endif
