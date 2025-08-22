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
 * @brief Interface CSSMathProduct
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathProduct)
 */
DECLARE_EMLITE_TYPE(CSSMathProduct, CSSMathValue);

/**
 * @brief Creates a new `CSSMathProduct` object. 
*/
CSSMathProduct CSSMathProduct_new(jb_Any * args);

/**
 * @brief Gets the `values` property. 
*/
CSSNumericArray CSSMathProduct_values(const CSSMathProduct *self);

#ifdef __cplusplus
}
#endif
