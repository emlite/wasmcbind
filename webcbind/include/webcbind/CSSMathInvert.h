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
 * @brief Interface CSSMathInvert
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathInvert)
 */
DECLARE_EMLITE_TYPE(CSSMathInvert, CSSMathValue);

/**
 * @brief Creates a new `CSSMathInvert` object. 
*/
CSSMathInvert CSSMathInvert_new(jb_Any * arg);

/**
 * @brief Gets the `value` property. 
*/
CSSNumericValue CSSMathInvert_value(const CSSMathInvert *self);

#ifdef __cplusplus
}
#endif
