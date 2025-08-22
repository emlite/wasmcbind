#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface NavigatorLogin
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NavigatorLogin)
 */
DECLARE_EMLITE_TYPE(NavigatorLogin, em_Val);

/**
 * @brief Calls the `setStatus` method. 
*/
jb_Promise NavigatorLogin_setStatus(NavigatorLogin* self , LoginStatus * status);

#ifdef __cplusplus
}
#endif
