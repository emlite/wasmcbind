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
 * @brief Interface CSSMathMin
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathMin)
 */
DECLARE_EMLITE_TYPE(CSSMathMin, CSSMathValue);

/**
 * @brief Creates a new `CSSMathMin` object. 
*/
CSSMathMin CSSMathMin_new(jb_Any * args);

/**
 * @brief Gets the `values` property. 
*/
CSSNumericArray CSSMathMin_values(const CSSMathMin *self);

#ifdef __cplusplus
}
#endif
