#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioContext AudioContext;
typedef struct MediaElementAudioSourceOptions MediaElementAudioSourceOptions;
typedef struct HTMLMediaElement HTMLMediaElement;

DECLARE_EMLITE_TYPE(MediaElementAudioSourceNode, AudioNode);

MediaElementAudioSourceNode MediaElementAudioSourceNode_new(AudioContext * context, MediaElementAudioSourceOptions * options);

HTMLMediaElement MediaElementAudioSourceNode_mediaElement(const MediaElementAudioSourceNode *self);

#ifdef __cplusplus
}
#endif
