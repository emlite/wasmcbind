#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface TrustedScriptURL
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TrustedScriptURL)
 */
DECLARE_EMLITE_TYPE(TrustedScriptURL, em_Val);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_String TrustedScriptURL_toJSON(TrustedScriptURL* self );

#ifdef __cplusplus
}
#endif
