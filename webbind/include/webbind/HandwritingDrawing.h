#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HandwritingStroke HandwritingStroke;
typedef struct HandwritingPrediction HandwritingPrediction;


/**
 * @brief Interface HandwritingDrawing
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingDrawing)
 */
DECLARE_EMLITE_TYPE(HandwritingDrawing, em_Val);

/**
 * @brief Calls the `addStroke` method. 
*/
jb_Undefined HandwritingDrawing_addStroke(HandwritingDrawing* self , HandwritingStroke * stroke);

/**
 * @brief Calls the `removeStroke` method. 
*/
jb_Undefined HandwritingDrawing_removeStroke(HandwritingDrawing* self , HandwritingStroke * stroke);

/**
 * @brief Calls the `clear` method. 
*/
jb_Undefined HandwritingDrawing_clear(HandwritingDrawing* self );

/**
 * @brief Calls the `getStrokes` method. 
*/
jb_Array HandwritingDrawing_getStrokes(HandwritingDrawing* self );

/**
 * @brief Calls the `getPrediction` method. 
*/
jb_Promise HandwritingDrawing_getPrediction(HandwritingDrawing* self );

#ifdef __cplusplus
}
#endif
