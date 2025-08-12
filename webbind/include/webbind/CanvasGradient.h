#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CanvasGradient
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CanvasGradient)
 */
DECLARE_EMLITE_TYPE(CanvasGradient, em_Val);

/**
 * @brief Calls the `addColorStop` method. 
*/
jb_Undefined CanvasGradient_addColorStop(CanvasGradient* self , double offset, jb_String * color);

#ifdef __cplusplus
}
#endif
