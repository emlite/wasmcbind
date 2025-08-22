#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface ScriptProcessorNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ScriptProcessorNode)
 */
DECLARE_EMLITE_TYPE(ScriptProcessorNode, AudioNode);

/**
 * @brief Gets the `onaudioprocess` property. 
*/
jb_Any ScriptProcessorNode_onaudioprocess(const ScriptProcessorNode *self);

/**
 * @brief Sets the `onaudioprocess` property. 
*/
void ScriptProcessorNode_set_onaudioprocess(ScriptProcessorNode* self, jb_Any * value);

/**
 * @brief Gets the `bufferSize` property. 
*/
long ScriptProcessorNode_bufferSize(const ScriptProcessorNode *self);

#ifdef __cplusplus
}
#endif
