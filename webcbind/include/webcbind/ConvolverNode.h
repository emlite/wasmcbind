#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct ConvolverOptions ConvolverOptions;
typedef struct AudioBuffer AudioBuffer;


/**
 * @brief Interface ConvolverNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ConvolverNode)
 */
DECLARE_EMLITE_TYPE(ConvolverNode, AudioNode);

/**
 * @brief Creates a new `ConvolverNode` object. 
*/
ConvolverNode ConvolverNode_new0(BaseAudioContext * context);

/**
 * @brief Creates a new `ConvolverNode` object. 
*/
ConvolverNode ConvolverNode_new1(BaseAudioContext * context, ConvolverOptions * options);

/**
 * @brief Gets the `buffer` property. 
*/
AudioBuffer ConvolverNode_buffer(const ConvolverNode *self);

/**
 * @brief Sets the `buffer` property. 
*/
void ConvolverNode_set_buffer(ConvolverNode* self, AudioBuffer * value);

/**
 * @brief Gets the `normalize` property. 
*/
bool ConvolverNode_normalize(const ConvolverNode *self);

/**
 * @brief Sets the `normalize` property. 
*/
void ConvolverNode_set_normalize(ConvolverNode* self, bool value);

#ifdef __cplusplus
}
#endif
