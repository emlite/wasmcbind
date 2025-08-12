#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type AudioNodeOptions */
DECLARE_EMLITE_TYPE(AudioNodeOptions, em_Val);

/** @brief Getter of the channelCount property */
unsigned long AudioNodeOptions_channelCount(const AudioNodeOptions *self);

/** @brief Setter of the channelCount property */
void AudioNodeOptions_set_channelCount(AudioNodeOptions* self, unsigned long value);

/** @brief Getter of the channelCountMode property */
ChannelCountMode AudioNodeOptions_channelCountMode(const AudioNodeOptions *self);

/** @brief Setter of the channelCountMode property */
void AudioNodeOptions_set_channelCountMode(AudioNodeOptions* self, ChannelCountMode * value);

/** @brief Getter of the channelInterpretation property */
ChannelInterpretation AudioNodeOptions_channelInterpretation(const AudioNodeOptions *self);

/** @brief Setter of the channelInterpretation property */
void AudioNodeOptions_set_channelInterpretation(AudioNodeOptions* self, ChannelInterpretation * value);

/** @brief Constructor of the AudioNodeOptions dictionary type */
AudioNodeOptions AudioNodeOptions_new();

#ifdef __cplusplus
}
#endif
