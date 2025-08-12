#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMRect DOMRect;


/**
 * @brief Interface Viewport
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Viewport)
 */
DECLARE_EMLITE_TYPE(Viewport, em_Val);

/**
 * @brief Gets the `segments` property. 
*/
jb_Array Viewport_segments(const Viewport *self);

#ifdef __cplusplus
}
#endif
