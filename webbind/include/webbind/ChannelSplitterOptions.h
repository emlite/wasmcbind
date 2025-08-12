#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ChannelSplitterOptions */
DECLARE_EMLITE_TYPE(ChannelSplitterOptions, AudioNodeOptions);

/** @brief Getter of the numberOfOutputs property */
unsigned long ChannelSplitterOptions_numberOfOutputs(const ChannelSplitterOptions *self);

/** @brief Setter of the numberOfOutputs property */
void ChannelSplitterOptions_set_numberOfOutputs(ChannelSplitterOptions* self, unsigned long value);

/** @brief Constructor of the ChannelSplitterOptions dictionary type */
ChannelSplitterOptions ChannelSplitterOptions_new();

#ifdef __cplusplus
}
#endif
