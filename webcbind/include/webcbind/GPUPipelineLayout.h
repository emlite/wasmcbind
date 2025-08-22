#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GPUPipelineLayout
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUPipelineLayout)
 */
DECLARE_EMLITE_TYPE(GPUPipelineLayout, em_Val);

/**
 * @brief Gets the `label` property. 
*/
jb_String GPUPipelineLayout_label(const GPUPipelineLayout *self);

/**
 * @brief Sets the `label` property. 
*/
void GPUPipelineLayout_set_label(GPUPipelineLayout* self, jb_String * value);

#ifdef __cplusplus
}
#endif
