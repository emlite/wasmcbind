#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GPUError.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GPUOutOfMemoryError
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUOutOfMemoryError)
 */
DECLARE_EMLITE_TYPE(GPUOutOfMemoryError, GPUError);

/**
 * @brief Creates a new `GPUOutOfMemoryError` object. 
*/
GPUOutOfMemoryError GPUOutOfMemoryError_new(jb_String * message);

#ifdef __cplusplus
}
#endif
