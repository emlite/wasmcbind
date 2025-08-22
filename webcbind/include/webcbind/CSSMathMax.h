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
 * @brief Interface CSSMathMax
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSMathMax)
 */
DECLARE_EMLITE_TYPE(CSSMathMax, CSSMathValue);

/**
 * @brief Creates a new `CSSMathMax` object. 
*/
CSSMathMax CSSMathMax_new(jb_Any * args);

/**
 * @brief Gets the `values` property. 
*/
CSSNumericArray CSSMathMax_values(const CSSMathMax *self);

#ifdef __cplusplus
}
#endif
