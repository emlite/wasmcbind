#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface ProtectedAudience
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ProtectedAudience)
 */
DECLARE_EMLITE_TYPE(ProtectedAudience, em_Val);

/**
 * @brief Calls the `queryFeatureSupport` method. 
*/
jb_Any ProtectedAudience_queryFeatureSupport(ProtectedAudience* self , jb_String * feature);

#ifdef __cplusplus
}
#endif
