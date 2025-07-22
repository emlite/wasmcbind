#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "AudioNode.h"
#include "enums.h"

typedef struct HTMLMediaElement HTMLMediaElement;
typedef struct AudioContext AudioContext;


typedef struct {
  AudioNode inner;
} MediaElementAudioSourceNode;


DECLARE_EMLITE_TYPE(MediaElementAudioSourceNode, AudioNode);

MediaElementAudioSourceNode MediaElementAudioSourceNode_new(const AudioContext* context, const jb_Any* options);

HTMLMediaElement MediaElementAudioSourceNode_mediaElement( const MediaElementAudioSourceNode *self);
