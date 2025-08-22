#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface TrustedHTML
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TrustedHTML)
 */
DECLARE_EMLITE_TYPE(TrustedHTML, em_Val);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_String TrustedHTML_toJSON(TrustedHTML* self );

#ifdef __cplusplus
}
#endif
