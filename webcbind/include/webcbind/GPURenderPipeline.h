#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUBindGroupLayout GPUBindGroupLayout;


/**
 * @brief Interface GPURenderPipeline
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPURenderPipeline)
 */
DECLARE_EMLITE_TYPE(GPURenderPipeline, em_Val);

/**
 * @brief Gets the `label` property. 
*/
jb_String GPURenderPipeline_label(const GPURenderPipeline *self);

/**
 * @brief Sets the `label` property. 
*/
void GPURenderPipeline_set_label(GPURenderPipeline* self, jb_String * value);

/**
 * @brief Calls the `getBindGroupLayout` method. 
*/
GPUBindGroupLayout GPURenderPipeline_getBindGroupLayout(GPURenderPipeline* self , unsigned long index);

#ifdef __cplusplus
}
#endif
