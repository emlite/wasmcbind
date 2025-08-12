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


/**
 * @brief Interface MediaStreamAudioDestinationNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamAudioDestinationNode)
 */
DECLARE_EMLITE_TYPE(MediaStreamAudioDestinationNode, AudioNode);

/**
 * @brief Creates a new `MediaStreamAudioDestinationNode` object. 
*/
MediaStreamAudioDestinationNode MediaStreamAudioDestinationNode_new0(AudioContext * context);

/**
 * @brief Creates a new `MediaStreamAudioDestinationNode` object. 
*/
MediaStreamAudioDestinationNode MediaStreamAudioDestinationNode_new1(AudioContext * context, AudioNodeOptions * options);

/**
 * @brief Gets the `stream` property. 
*/
MediaStream MediaStreamAudioDestinationNode_stream(const MediaStreamAudioDestinationNode *self);

#ifdef __cplusplus
}
#endif
