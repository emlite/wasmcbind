#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct AudioWorkletNodeOptions AudioWorkletNodeOptions;
typedef struct AudioParamMap AudioParamMap;
typedef struct MessagePort MessagePort;


/**
 * @brief Interface AudioWorkletNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioWorkletNode)
 */
DECLARE_EMLITE_TYPE(AudioWorkletNode, AudioNode);

/**
 * @brief Creates a new `AudioWorkletNode` object. 
*/
AudioWorkletNode AudioWorkletNode_new0(BaseAudioContext * context, jb_String * name);

/**
 * @brief Creates a new `AudioWorkletNode` object. 
*/
AudioWorkletNode AudioWorkletNode_new1(BaseAudioContext * context, jb_String * name, AudioWorkletNodeOptions * options);

/**
 * @brief Gets the `parameters` property. 
*/
AudioParamMap AudioWorkletNode_parameters(const AudioWorkletNode *self);

/**
 * @brief Gets the `port` property. 
*/
MessagePort AudioWorkletNode_port(const AudioWorkletNode *self);

/**
 * @brief Gets the `onprocessorerror` property. 
*/
jb_Any AudioWorkletNode_onprocessorerror(const AudioWorkletNode *self);

/**
 * @brief Sets the `onprocessorerror` property. 
*/
void AudioWorkletNode_set_onprocessorerror(AudioWorkletNode* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
