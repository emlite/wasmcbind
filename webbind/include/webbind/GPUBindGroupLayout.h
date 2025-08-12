#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GPUBindGroupLayout
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUBindGroupLayout)
 */
DECLARE_EMLITE_TYPE(GPUBindGroupLayout, em_Val);

/**
 * @brief Gets the `label` property. 
*/
jb_String GPUBindGroupLayout_label(const GPUBindGroupLayout *self);

/**
 * @brief Sets the `label` property. 
*/
void GPUBindGroupLayout_set_label(GPUBindGroupLayout* self, jb_String * value);

#ifdef __cplusplus
}
#endif
