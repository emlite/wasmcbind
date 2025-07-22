#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"


typedef struct {
  AudioNode inner;
} ChannelSplitterNode;


DECLARE_EMLITE_TYPE(ChannelSplitterNode, AudioNode);

ChannelSplitterNode ChannelSplitterNode_new(const BaseAudioContext* context);

ChannelSplitterNode ChannelSplitterNode_new(const BaseAudioContext* context, const jb_Any* options);
