#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioScheduledSourceNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct ConstantSourceOptions ConstantSourceOptions;
typedef struct AudioParam AudioParam;


/**
 * @brief Interface ConstantSourceNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ConstantSourceNode)
 */
DECLARE_EMLITE_TYPE(ConstantSourceNode, AudioScheduledSourceNode);

/**
 * @brief Creates a new `ConstantSourceNode` object. 
*/
ConstantSourceNode ConstantSourceNode_new0(BaseAudioContext * context);

/**
 * @brief Creates a new `ConstantSourceNode` object. 
*/
ConstantSourceNode ConstantSourceNode_new1(BaseAudioContext * context, ConstantSourceOptions * options);

/**
 * @brief Gets the `offset` property. 
*/
AudioParam ConstantSourceNode_offset(const ConstantSourceNode *self);

#ifdef __cplusplus
}
#endif
