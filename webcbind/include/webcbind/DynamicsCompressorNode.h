#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct DynamicsCompressorOptions DynamicsCompressorOptions;
typedef struct AudioParam AudioParam;


/**
 * @brief Interface DynamicsCompressorNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DynamicsCompressorNode)
 */
DECLARE_EMLITE_TYPE(DynamicsCompressorNode, AudioNode);

/**
 * @brief Creates a new `DynamicsCompressorNode` object. 
*/
DynamicsCompressorNode DynamicsCompressorNode_new0(BaseAudioContext * context);

/**
 * @brief Creates a new `DynamicsCompressorNode` object. 
*/
DynamicsCompressorNode DynamicsCompressorNode_new1(BaseAudioContext * context, DynamicsCompressorOptions * options);

/**
 * @brief Gets the `threshold` property. 
*/
AudioParam DynamicsCompressorNode_threshold(const DynamicsCompressorNode *self);

/**
 * @brief Gets the `knee` property. 
*/
AudioParam DynamicsCompressorNode_knee(const DynamicsCompressorNode *self);

/**
 * @brief Gets the `ratio` property. 
*/
AudioParam DynamicsCompressorNode_ratio(const DynamicsCompressorNode *self);

/**
 * @brief Gets the `reduction` property. 
*/
float DynamicsCompressorNode_reduction(const DynamicsCompressorNode *self);

/**
 * @brief Gets the `attack` property. 
*/
AudioParam DynamicsCompressorNode_attack(const DynamicsCompressorNode *self);

/**
 * @brief Gets the `release` property. 
*/
AudioParam DynamicsCompressorNode_release(const DynamicsCompressorNode *self);

#ifdef __cplusplus
}
#endif
