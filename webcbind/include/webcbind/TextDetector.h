#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DetectedText DetectedText;


/**
 * @brief Interface TextDetector
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TextDetector)
 */
DECLARE_EMLITE_TYPE(TextDetector, em_Val);

/**
 * @brief Creates a new `TextDetector` object. 
*/
TextDetector TextDetector_new();

/**
 * @brief Calls the `detect` method. 
*/
jb_Promise TextDetector_detect(TextDetector* self , jb_Any * image);

#ifdef __cplusplus
}
#endif
