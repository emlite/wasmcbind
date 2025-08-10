#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct ChannelSplitterOptions ChannelSplitterOptions;

DECLARE_EMLITE_TYPE(ChannelSplitterNode, AudioNode);

ChannelSplitterNode ChannelSplitterNode_new0(BaseAudioContext * context);

ChannelSplitterNode ChannelSplitterNode_new1(BaseAudioContext * context, ChannelSplitterOptions * options);

#ifdef __cplusplus
}
#endif
