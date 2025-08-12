#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GPUCompilationMessage
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUCompilationMessage)
 */
DECLARE_EMLITE_TYPE(GPUCompilationMessage, em_Val);

/**
 * @brief Gets the `message` property. 
*/
jb_String GPUCompilationMessage_message(const GPUCompilationMessage *self);

/**
 * @brief Gets the `type` property. 
*/
GPUCompilationMessageType GPUCompilationMessage_type(const GPUCompilationMessage *self);

/**
 * @brief Gets the `lineNum` property. 
*/
long long GPUCompilationMessage_lineNum(const GPUCompilationMessage *self);

/**
 * @brief Gets the `linePos` property. 
*/
long long GPUCompilationMessage_linePos(const GPUCompilationMessage *self);

/**
 * @brief Gets the `offset` property. 
*/
long long GPUCompilationMessage_offset(const GPUCompilationMessage *self);

/**
 * @brief Gets the `length` property. 
*/
long long GPUCompilationMessage_length(const GPUCompilationMessage *self);

#ifdef __cplusplus
}
#endif
