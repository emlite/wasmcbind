#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSMathValue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSNumericValue CSSNumericValue;


/**
 * @brief Interface CSSMathNegate
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathNegate)
 */
DECLARE_EMLITE_TYPE(CSSMathNegate, CSSMathValue);

/**
 * @brief Creates a new `CSSMathNegate` object. 
*/
CSSMathNegate CSSMathNegate_new(jb_Any * arg);

/**
 * @brief Gets the `value` property. 
*/
CSSNumericValue CSSMathNegate_value(const CSSMathNegate *self);

#ifdef __cplusplus
}
#endif
