#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface GPUError
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUError)
 */
DECLARE_EMLITE_TYPE(GPUError, em_Val);

/**
 * @brief Gets the `message` property. 
*/
jb_String GPUError_message(const GPUError *self);

#ifdef __cplusplus
}
#endif
