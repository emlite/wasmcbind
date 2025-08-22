#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface External
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/External)
 */
DECLARE_EMLITE_TYPE(External, em_Val);

/**
 * @brief Calls the `AddSearchProvider` method. 
*/
jb_Undefined External_AddSearchProvider(External* self );

/**
 * @brief Calls the `IsSearchProviderInstalled` method. 
*/
jb_Undefined External_IsSearchProviderInstalled(External* self );

#ifdef __cplusplus
}
#endif
