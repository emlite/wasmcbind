#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WEBGL_lose_context
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_lose_context)
 */
DECLARE_EMLITE_TYPE(WEBGL_lose_context, em_Val);

/**
 * @brief Calls the `loseContext` method. 
*/
jb_Undefined WEBGL_lose_context_loseContext(WEBGL_lose_context* self );

/**
 * @brief Calls the `restoreContext` method. 
*/
jb_Undefined WEBGL_lose_context_restoreContext(WEBGL_lose_context* self );

#ifdef __cplusplus
}
#endif
