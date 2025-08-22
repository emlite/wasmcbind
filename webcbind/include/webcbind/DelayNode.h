#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct DelayOptions DelayOptions;
typedef struct AudioParam AudioParam;


/**
 * @brief Interface DelayNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DelayNode)
 */
DECLARE_EMLITE_TYPE(DelayNode, AudioNode);

/**
 * @brief Creates a new `DelayNode` object. 
*/
DelayNode DelayNode_new0(BaseAudioContext * context);

/**
 * @brief Creates a new `DelayNode` object. 
*/
DelayNode DelayNode_new1(BaseAudioContext * context, DelayOptions * options);

/**
 * @brief Gets the `delayTime` property. 
*/
AudioParam DelayNode_delayTime(const DelayNode *self);

#ifdef __cplusplus
}
#endif
