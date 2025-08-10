#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioContext AudioContext;
typedef struct AudioNodeOptions AudioNodeOptions;
typedef struct MediaStream MediaStream;

DECLARE_EMLITE_TYPE(MediaStreamAudioDestinationNode, AudioNode);

MediaStreamAudioDestinationNode MediaStreamAudioDestinationNode_new0(AudioContext * context);

MediaStreamAudioDestinationNode MediaStreamAudioDestinationNode_new1(AudioContext * context, AudioNodeOptions * options);

MediaStream MediaStreamAudioDestinationNode_stream(const MediaStreamAudioDestinationNode *self);

#ifdef __cplusplus
}
#endif
