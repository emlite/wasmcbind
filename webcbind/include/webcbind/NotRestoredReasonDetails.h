#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface NotRestoredReasonDetails
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasonDetails)
 */
DECLARE_EMLITE_TYPE(NotRestoredReasonDetails, em_Val);

/**
 * @brief Gets the `reason` property. 
*/
jb_String NotRestoredReasonDetails_reason(const NotRestoredReasonDetails *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object NotRestoredReasonDetails_toJSON(NotRestoredReasonDetails* self );

#ifdef __cplusplus
}
#endif
