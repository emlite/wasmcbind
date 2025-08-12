#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct BiquadFilterOptions BiquadFilterOptions;
typedef struct AudioParam AudioParam;


/**
 * @brief Interface BiquadFilterNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/BiquadFilterNode)
 */
DECLARE_EMLITE_TYPE(BiquadFilterNode, AudioNode);

/**
 * @brief Creates a new `BiquadFilterNode` object. 
*/
BiquadFilterNode BiquadFilterNode_new0(BaseAudioContext * context);

/**
 * @brief Creates a new `BiquadFilterNode` object. 
*/
BiquadFilterNode BiquadFilterNode_new1(BaseAudioContext * context, BiquadFilterOptions * options);

/**
 * @brief Gets the `type` property. 
*/
BiquadFilterType BiquadFilterNode_type(const BiquadFilterNode *self);

/**
 * @brief Sets the `type` property. 
*/
void BiquadFilterNode_set_type(BiquadFilterNode* self, BiquadFilterType * value);

/**
 * @brief Gets the `frequency` property. 
*/
AudioParam BiquadFilterNode_frequency(const BiquadFilterNode *self);

/**
 * @brief Gets the `detune` property. 
*/
AudioParam BiquadFilterNode_detune(const BiquadFilterNode *self);

/**
 * @brief Gets the `Q` property. 
*/
AudioParam BiquadFilterNode_Q(const BiquadFilterNode *self);

/**
 * @brief Gets the `gain` property. 
*/
AudioParam BiquadFilterNode_gain(const BiquadFilterNode *self);

/**
 * @brief Calls the `getFrequencyResponse` method. 
*/
jb_Undefined BiquadFilterNode_getFrequencyResponse(BiquadFilterNode* self , jb_Float32Array * frequencyHz, jb_Float32Array * magResponse, jb_Float32Array * phaseResponse);

#ifdef __cplusplus
}
#endif
