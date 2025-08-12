#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface AudioDestinationNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AudioDestinationNode)
 */
DECLARE_EMLITE_TYPE(AudioDestinationNode, AudioNode);

/**
 * @brief Gets the `maxChannelCount` property. 
*/
unsigned long AudioDestinationNode_maxChannelCount(const AudioDestinationNode *self);

#ifdef __cplusplus
}
#endif
