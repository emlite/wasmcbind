#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface TrustedScript
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TrustedScript)
 */
DECLARE_EMLITE_TYPE(TrustedScript, em_Val);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_String TrustedScript_toJSON(TrustedScript* self );

#ifdef __cplusplus
}
#endif
