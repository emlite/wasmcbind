#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GPUCommandBuffer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUCommandBuffer)
 */
DECLARE_EMLITE_TYPE(GPUCommandBuffer, em_Val);

/**
 * @brief Gets the `label` property. 
*/
jb_String GPUCommandBuffer_label(const GPUCommandBuffer *self);

/**
 * @brief Sets the `label` property. 
*/
void GPUCommandBuffer_set_label(GPUCommandBuffer* self, jb_String * value);

#ifdef __cplusplus
}
#endif
