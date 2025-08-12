#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface AudioScheduledSourceNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioScheduledSourceNode)
 */
DECLARE_EMLITE_TYPE(AudioScheduledSourceNode, AudioNode);

/**
 * @brief Gets the `onended` property. 
*/
jb_Any AudioScheduledSourceNode_onended(const AudioScheduledSourceNode *self);

/**
 * @brief Sets the `onended` property. 
*/
void AudioScheduledSourceNode_set_onended(AudioScheduledSourceNode* self, jb_Any * value);

/**
 * @brief Calls the `start` method. 
*/
jb_Undefined AudioScheduledSourceNode_start0(AudioScheduledSourceNode* self );

/**
 * @brief Calls the `start` method. 
*/
jb_Undefined AudioScheduledSourceNode_start1(AudioScheduledSourceNode* self , double when);

/**
 * @brief Calls the `stop` method. 
*/
jb_Undefined AudioScheduledSourceNode_stop0(AudioScheduledSourceNode* self );

/**
 * @brief Calls the `stop` method. 
*/
jb_Undefined AudioScheduledSourceNode_stop1(AudioScheduledSourceNode* self , double when);

#ifdef __cplusplus
}
#endif
