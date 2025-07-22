#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"


typedef struct {
  AudioNode inner;
} MediaStreamTrackAudioSourceNode;


DECLARE_EMLITE_TYPE(MediaStreamTrackAudioSourceNode, AudioNode);

MediaStreamTrackAudioSourceNode MediaStreamTrackAudioSourceNode_new(const AudioContext* context, const jb_Any* options);
