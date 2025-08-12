#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSNumericValue.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSMathValue
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathValue)
 */
DECLARE_EMLITE_TYPE(CSSMathValue, CSSNumericValue);

/**
 * @brief Gets the `operator` property. 
*/
CSSMathOperator CSSMathValue_operator_(const CSSMathValue *self);

#ifdef __cplusplus
}
#endif
