#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "GPUError.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GPUInternalError
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUInternalError)
 */
DECLARE_EMLITE_TYPE(GPUInternalError, GPUError);

/**
 * @brief Creates a new `GPUInternalError` object. 
*/
GPUInternalError GPUInternalError_new(jb_String * message);

#ifdef __cplusplus
}
#endif
