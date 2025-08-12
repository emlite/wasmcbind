#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WorkletGlobalScope.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface AnimationWorkletGlobalScope
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/AnimationWorkletGlobalScope)
 */
DECLARE_EMLITE_TYPE(AnimationWorkletGlobalScope, WorkletGlobalScope);

/**
 * @brief Calls the `registerAnimator` method. 
*/
jb_Undefined AnimationWorkletGlobalScope_registerAnimator(AnimationWorkletGlobalScope* self , jb_String * name, jb_Function * animatorCtor);

#ifdef __cplusplus
}
#endif
