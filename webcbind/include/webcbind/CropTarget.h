#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;


/**
 * @brief Interface CropTarget
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CropTarget)
 */
DECLARE_EMLITE_TYPE(CropTarget, em_Val);

/**
 * @brief Calls the `fromElement` method. 
*/
jb_Promise CropTarget_fromElement(CropTarget* self , Element * element);

#ifdef __cplusplus
}
#endif
