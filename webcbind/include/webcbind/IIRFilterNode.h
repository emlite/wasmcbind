#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct IIRFilterOptions IIRFilterOptions;


/**
 * @brief Interface IIRFilterNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IIRFilterNode)
 */
DECLARE_EMLITE_TYPE(IIRFilterNode, AudioNode);

/**
 * @brief Creates a new `IIRFilterNode` object. 
*/
IIRFilterNode IIRFilterNode_new(BaseAudioContext * context, IIRFilterOptions * options);

/**
 * @brief Calls the `getFrequencyResponse` method. 
*/
jb_Undefined IIRFilterNode_getFrequencyResponse(IIRFilterNode* self , jb_Float32Array * frequencyHz, jb_Float32Array * magResponse, jb_Float32Array * phaseResponse);

#ifdef __cplusplus
}
#endif
