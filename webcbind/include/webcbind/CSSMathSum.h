#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSMathValue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSNumericArray CSSNumericArray;


/**
 * @brief Interface CSSMathSum
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathSum)
 */
DECLARE_EMLITE_TYPE(CSSMathSum, CSSMathValue);

/**
 * @brief Creates a new `CSSMathSum` object. 
*/
CSSMathSum CSSMathSum_new(jb_Any * args);

/**
 * @brief Gets the `values` property. 
*/
CSSNumericArray CSSMathSum_values(const CSSMathSum *self);

#ifdef __cplusplus
}
#endif
