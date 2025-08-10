#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioContext AudioContext;
typedef struct MediaStreamTrackAudioSourceOptions MediaStreamTrackAudioSourceOptions;

DECLARE_EMLITE_TYPE(MediaStreamTrackAudioSourceNode, AudioNode);

MediaStreamTrackAudioSourceNode MediaStreamTrackAudioSourceNode_new(AudioContext * context, MediaStreamTrackAudioSourceOptions * options);

#ifdef __cplusplus
}
#endif
