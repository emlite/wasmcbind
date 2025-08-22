#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioContext AudioContext;
typedef struct MediaElementAudioSourceOptions MediaElementAudioSourceOptions;
typedef struct HTMLMediaElement HTMLMediaElement;


/**
 * @brief Interface MediaElementAudioSourceNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaElementAudioSourceNode)
 */
DECLARE_EMLITE_TYPE(MediaElementAudioSourceNode, AudioNode);

/**
 * @brief Creates a new `MediaElementAudioSourceNode` object. 
*/
MediaElementAudioSourceNode MediaElementAudioSourceNode_new(AudioContext * context, MediaElementAudioSourceOptions * options);

/**
 * @brief Gets the `mediaElement` property. 
*/
HTMLMediaElement MediaElementAudioSourceNode_mediaElement(const MediaElementAudioSourceNode *self);

#ifdef __cplusplus
}
#endif
