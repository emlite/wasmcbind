#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HighlightHitResult HighlightHitResult;
typedef struct HighlightsFromPointOptions HighlightsFromPointOptions;


/**
 * @brief Interface HighlightRegistry
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HighlightRegistry)
 */
DECLARE_EMLITE_TYPE(HighlightRegistry, em_Val);

/**
 * @brief Calls the `highlightsFromPoint` method. 
*/
jb_Array HighlightRegistry_highlightsFromPoint0(HighlightRegistry* self , float x, float y);

/**
 * @brief Calls the `highlightsFromPoint` method. 
*/
jb_Array HighlightRegistry_highlightsFromPoint1(HighlightRegistry* self , float x, float y, HighlightsFromPointOptions * options);

#ifdef __cplusplus
}
#endif
