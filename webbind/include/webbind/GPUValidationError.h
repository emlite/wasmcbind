#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "GPUError.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GPUValidationError
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUValidationError)
 */
DECLARE_EMLITE_TYPE(GPUValidationError, GPUError);

/**
 * @brief Creates a new `GPUValidationError` object. 
*/
GPUValidationError GPUValidationError_new(jb_String * message);

#ifdef __cplusplus
}
#endif
