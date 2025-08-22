#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WorkletAnimationEffect WorkletAnimationEffect;


/**
 * @brief Interface WorkletGroupEffect
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WorkletGroupEffect)
 */
DECLARE_EMLITE_TYPE(WorkletGroupEffect, em_Val);

/**
 * @brief Calls the `getChildren` method. 
*/
jb_Array WorkletGroupEffect_getChildren(WorkletGroupEffect* self );

#ifdef __cplusplus
}
#endif
