#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUBindGroupLayout GPUBindGroupLayout;


/**
 * @brief Interface GPUComputePipeline
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUComputePipeline)
 */
DECLARE_EMLITE_TYPE(GPUComputePipeline, em_Val);

/**
 * @brief Gets the `label` property. 
*/
jb_String GPUComputePipeline_label(const GPUComputePipeline *self);

/**
 * @brief Sets the `label` property. 
*/
void GPUComputePipeline_set_label(GPUComputePipeline* self, jb_String * value);

/**
 * @brief Calls the `getBindGroupLayout` method. 
*/
GPUBindGroupLayout GPUComputePipeline_getBindGroupLayout(GPUComputePipeline* self , unsigned long index);

#ifdef __cplusplus
}
#endif
