#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WorkletGlobalScope.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface PaintWorkletGlobalScope
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PaintWorkletGlobalScope)
 */
DECLARE_EMLITE_TYPE(PaintWorkletGlobalScope, WorkletGlobalScope);

/**
 * @brief Calls the `registerPaint` method. 
*/
jb_Undefined PaintWorkletGlobalScope_registerPaint(PaintWorkletGlobalScope* self , jb_String * name, jb_Function * paintCtor);

/**
 * @brief Gets the `devicePixelRatio` property. 
*/
double PaintWorkletGlobalScope_devicePixelRatio(const PaintWorkletGlobalScope *self);

#ifdef __cplusplus
}
#endif
