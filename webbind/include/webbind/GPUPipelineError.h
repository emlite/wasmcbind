#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "DOMException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUPipelineErrorInit GPUPipelineErrorInit;


/**
 * @brief Interface GPUPipelineError
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUPipelineError)
 */
DECLARE_EMLITE_TYPE(GPUPipelineError, DOMException);

/**
 * @brief Creates a new `GPUPipelineError` object. 
*/
GPUPipelineError GPUPipelineError_new0();

/**
 * @brief Creates a new `GPUPipelineError` object. 
*/
GPUPipelineError GPUPipelineError_new1(jb_String * message);

/**
 * @brief Creates a new `GPUPipelineError` object. 
*/
GPUPipelineError GPUPipelineError_new2(jb_String * message, GPUPipelineErrorInit * options);

/**
 * @brief Gets the `reason` property. 
*/
GPUPipelineErrorReason GPUPipelineError_reason(const GPUPipelineError *self);

#ifdef __cplusplus
}
#endif
