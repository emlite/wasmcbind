#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GPUBindGroup
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUBindGroup)
 */
DECLARE_EMLITE_TYPE(GPUBindGroup, em_Val);

/**
 * @brief Gets the `label` property. 
*/
jb_String GPUBindGroup_label(const GPUBindGroup *self);

/**
 * @brief Sets the `label` property. 
*/
void GPUBindGroup_set_label(GPUBindGroup* self, jb_String * value);

#ifdef __cplusplus
}
#endif
