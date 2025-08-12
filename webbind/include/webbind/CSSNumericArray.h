#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSNumericValue CSSNumericValue;


/**
 * @brief Interface CSSNumericArray
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSNumericArray)
 */
DECLARE_EMLITE_TYPE(CSSNumericArray, em_Val);

/**
 * @brief Gets the `length` property. 
*/
unsigned long CSSNumericArray_length(const CSSNumericArray *self);

#ifdef __cplusplus
}
#endif
