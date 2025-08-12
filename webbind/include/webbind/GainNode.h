#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct GainOptions GainOptions;
typedef struct AudioParam AudioParam;


/**
 * @brief Interface GainNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GainNode)
 */
DECLARE_EMLITE_TYPE(GainNode, AudioNode);

/**
 * @brief Creates a new `GainNode` object. 
*/
GainNode GainNode_new0(BaseAudioContext * context);

/**
 * @brief Creates a new `GainNode` object. 
*/
GainNode GainNode_new1(BaseAudioContext * context, GainOptions * options);

/**
 * @brief Gets the `gain` property. 
*/
AudioParam GainNode_gain(const GainNode *self);

#ifdef __cplusplus
}
#endif
