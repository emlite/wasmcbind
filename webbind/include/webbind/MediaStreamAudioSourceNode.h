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


/**
 * @brief Interface MediaStreamAudioSourceNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamAudioSourceNode)
 */
DECLARE_EMLITE_TYPE(MediaStreamAudioSourceNode, AudioNode);

/**
 * @brief Creates a new `MediaStreamAudioSourceNode` object. 
*/
MediaStreamAudioSourceNode MediaStreamAudioSourceNode_new(AudioContext * context, MediaStreamAudioSourceOptions * options);

/**
 * @brief Gets the `mediaStream` property. 
*/
MediaStream MediaStreamAudioSourceNode_mediaStream(const MediaStreamAudioSourceNode *self);

#ifdef __cplusplus
}
#endif
