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
 * @brief Interface CSSMathClamp
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathClamp)
 */
DECLARE_EMLITE_TYPE(CSSMathClamp, CSSMathValue);

/**
 * @brief Creates a new `CSSMathClamp` object. 
*/
CSSMathClamp CSSMathClamp_new(jb_Any * lower, jb_Any * value, jb_Any * upper);

/**
 * @brief Gets the `lower` property. 
*/
CSSNumericValue CSSMathClamp_lower(const CSSMathClamp *self);

/**
 * @brief Gets the `value` property. 
*/
CSSNumericValue CSSMathClamp_value(const CSSMathClamp *self);

/**
 * @brief Gets the `upper` property. 
*/
CSSNumericValue CSSMathClamp_upper(const CSSMathClamp *self);

#ifdef __cplusplus
}
#endif
