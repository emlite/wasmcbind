#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUCompilationInfo GPUCompilationInfo;


/**
 * @brief Interface GPUShaderModule
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUShaderModule)
 */
DECLARE_EMLITE_TYPE(GPUShaderModule, em_Val);

/**
 * @brief Calls the `getCompilationInfo` method. 
*/
jb_Promise GPUShaderModule_getCompilationInfo(GPUShaderModule* self );

/**
 * @brief Gets the `label` property. 
*/
jb_String GPUShaderModule_label(const GPUShaderModule *self);

/**
 * @brief Sets the `label` property. 
*/
void GPUShaderModule_set_label(GPUShaderModule* self, jb_String * value);

#ifdef __cplusplus
}
#endif
