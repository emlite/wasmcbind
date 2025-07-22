#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

typedef struct MediaStream MediaStream;


typedef struct {
  AudioNode inner;
} MediaStreamAudioSourceNode;


DECLARE_EMLITE_TYPE(MediaStreamAudioSourceNode, AudioNode);

MediaStreamAudioSourceNode MediaStreamAudioSourceNode_new(const AudioContext* context, const jb_Any* options);

MediaStream MediaStreamAudioSourceNode_mediaStream( const MediaStreamAudioSourceNode *self);
