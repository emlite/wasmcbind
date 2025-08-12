#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WorkletGlobalScope.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface LayoutWorkletGlobalScope
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/LayoutWorkletGlobalScope)
 */
DECLARE_EMLITE_TYPE(LayoutWorkletGlobalScope, WorkletGlobalScope);

/**
 * @brief Calls the `registerLayout` method. 
*/
jb_Undefined LayoutWorkletGlobalScope_registerLayout(LayoutWorkletGlobalScope* self , jb_String * name, jb_Function * layoutCtor);

#ifdef __cplusplus
}
#endif
