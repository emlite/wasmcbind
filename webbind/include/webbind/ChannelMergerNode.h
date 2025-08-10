#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct ChannelMergerOptions ChannelMergerOptions;

DECLARE_EMLITE_TYPE(ChannelMergerNode, AudioNode);

ChannelMergerNode ChannelMergerNode_new0(BaseAudioContext * context);

ChannelMergerNode ChannelMergerNode_new1(BaseAudioContext * context, ChannelMergerOptions * options);

#ifdef __cplusplus
}
#endif
