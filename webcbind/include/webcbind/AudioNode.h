#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioParam AudioParam;
typedef struct BaseAudioContext BaseAudioContext;


/**
 * @brief Interface AudioNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioNode)
 */
DECLARE_EMLITE_TYPE(AudioNode, EventTarget);

/**
 * @brief Calls the `connect` method. 
*/
jb_Undefined AudioNode_connect0(AudioNode* self , AudioParam * destinationParam);

/**
 * @brief Calls the `connect` method. 
*/
jb_Undefined AudioNode_connect1(AudioNode* self , AudioParam * destinationParam, unsigned long output);

/**
 * @brief Calls the `disconnect` method. 
*/
jb_Undefined AudioNode_disconnect(AudioNode* self , AudioParam * destinationParam, unsigned long output);

/**
 * @brief Gets the `context` property. 
*/
BaseAudioContext AudioNode_context(const AudioNode *self);

/**
 * @brief Gets the `numberOfInputs` property. 
*/
unsigned long AudioNode_numberOfInputs(const AudioNode *self);

/**
 * @brief Gets the `numberOfOutputs` property. 
*/
unsigned long AudioNode_numberOfOutputs(const AudioNode *self);

/**
 * @brief Gets the `channelCount` property. 
*/
unsigned long AudioNode_channelCount(const AudioNode *self);

/**
 * @brief Sets the `channelCount` property. 
*/
void AudioNode_set_channelCount(AudioNode* self, unsigned long value);

/**
 * @brief Gets the `channelCountMode` property. 
*/
ChannelCountMode AudioNode_channelCountMode(const AudioNode *self);

/**
 * @brief Sets the `channelCountMode` property. 
*/
void AudioNode_set_channelCountMode(AudioNode* self, ChannelCountMode * value);

/**
 * @brief Gets the `channelInterpretation` property. 
*/
ChannelInterpretation AudioNode_channelInterpretation(const AudioNode *self);

/**
 * @brief Sets the `channelInterpretation` property. 
*/
void AudioNode_set_channelInterpretation(AudioNode* self, ChannelInterpretation * value);

#ifdef __cplusplus
}
#endif
