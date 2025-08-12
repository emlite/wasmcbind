#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HandwritingDrawing HandwritingDrawing;
typedef struct HandwritingHints HandwritingHints;


/**
 * @brief Interface HandwritingRecognizer
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HandwritingRecognizer)
 */
DECLARE_EMLITE_TYPE(HandwritingRecognizer, em_Val);

/**
 * @brief Calls the `startDrawing` method. 
*/
HandwritingDrawing HandwritingRecognizer_startDrawing0(HandwritingRecognizer* self );

/**
 * @brief Calls the `startDrawing` method. 
*/
HandwritingDrawing HandwritingRecognizer_startDrawing1(HandwritingRecognizer* self , HandwritingHints * hints);

/**
 * @brief Calls the `finish` method. 
*/
jb_Undefined HandwritingRecognizer_finish(HandwritingRecognizer* self );

#ifdef __cplusplus
}
#endif
