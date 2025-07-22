#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"


typedef struct {
  AudioNode inner;
} ChannelMergerNode;


DECLARE_EMLITE_TYPE(ChannelMergerNode, AudioNode);

ChannelMergerNode ChannelMergerNode_new(const BaseAudioContext* context);

ChannelMergerNode ChannelMergerNode_new(const BaseAudioContext* context, const jb_Any* options);
