#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ChannelMergerOptions */
DECLARE_EMLITE_TYPE(ChannelMergerOptions, AudioNodeOptions);

/** @brief Getter of the numberOfInputs property */
unsigned long ChannelMergerOptions_numberOfInputs(const ChannelMergerOptions *self);

/** @brief Setter of the numberOfInputs property */
void ChannelMergerOptions_set_numberOfInputs(ChannelMergerOptions* self, unsigned long value);

/** @brief Constructor of the ChannelMergerOptions dictionary type */
ChannelMergerOptions ChannelMergerOptions_new();

#ifdef __cplusplus
}
#endif
