#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HandwritingPoint HandwritingPoint;


/**
 * @brief Interface HandwritingStroke
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingStroke)
 */
DECLARE_EMLITE_TYPE(HandwritingStroke, em_Val);

/**
 * @brief Creates a new `HandwritingStroke` object. 
*/
HandwritingStroke HandwritingStroke_new();

/**
 * @brief Calls the `addPoint` method. 
*/
jb_Undefined HandwritingStroke_addPoint(HandwritingStroke* self , HandwritingPoint * point);

/**
 * @brief Calls the `getPoints` method. 
*/
jb_Array HandwritingStroke_getPoints(HandwritingStroke* self );

/**
 * @brief Calls the `clear` method. 
*/
jb_Undefined HandwritingStroke_clear(HandwritingStroke* self );

#ifdef __cplusplus
}
#endif
