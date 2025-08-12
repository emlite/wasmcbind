#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;


/**
 * @brief Interface RestrictionTarget
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/RestrictionTarget)
 */
DECLARE_EMLITE_TYPE(RestrictionTarget, em_Val);

/**
 * @brief Calls the `fromElement` method. 
*/
jb_Promise RestrictionTarget_fromElement(RestrictionTarget* self , Element * element);

#ifdef __cplusplus
}
#endif
