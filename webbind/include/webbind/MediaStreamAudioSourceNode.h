#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioContext AudioContext;
typedef struct MediaStreamAudioSourceOptions MediaStreamAudioSourceOptions;
typedef struct MediaStream MediaStream;

DECLARE_EMLITE_TYPE(MediaStreamAudioSourceNode, AudioNode);

MediaStreamAudioSourceNode MediaStreamAudioSourceNode_new(AudioContext * context, MediaStreamAudioSourceOptions * options);

MediaStream MediaStreamAudioSourceNode_mediaStream(const MediaStreamAudioSourceNode *self);

#ifdef __cplusplus
}
#endif
