#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ChannelMergerOptions, AudioNodeOptions);

unsigned long ChannelMergerOptions_numberOfInputs(const ChannelMergerOptions *self);

void ChannelMergerOptions_set_numberOfInputs(ChannelMergerOptions* self, unsigned long value);

ChannelMergerOptions ChannelMergerOptions_new();

#ifdef __cplusplus
}
#endif
