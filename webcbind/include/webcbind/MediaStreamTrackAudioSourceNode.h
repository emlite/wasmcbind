#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioContext AudioContext;
typedef struct MediaStreamTrackAudioSourceOptions MediaStreamTrackAudioSourceOptions;


/**
 * @brief Interface MediaStreamTrackAudioSourceNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrackAudioSourceNode)
 */
DECLARE_EMLITE_TYPE(MediaStreamTrackAudioSourceNode, AudioNode);

/**
 * @brief Creates a new `MediaStreamTrackAudioSourceNode` object. 
*/
MediaStreamTrackAudioSourceNode MediaStreamTrackAudioSourceNode_new(AudioContext * context, MediaStreamTrackAudioSourceOptions * options);

#ifdef __cplusplus
}
#endif
