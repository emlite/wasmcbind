#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSTransformComponent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSNumericValue CSSNumericValue;


/**
 * @brief Interface CSSSkewY
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSSkewY)
 */
DECLARE_EMLITE_TYPE(CSSSkewY, CSSTransformComponent);

/**
 * @brief Creates a new `CSSSkewY` object. 
*/
CSSSkewY CSSSkewY_new(CSSNumericValue * ay);

/**
 * @brief Gets the `ay` property. 
*/
CSSNumericValue CSSSkewY_ay(const CSSSkewY *self);

/**
 * @brief Sets the `ay` property. 
*/
void CSSSkewY_set_ay(CSSSkewY* self, CSSNumericValue * value);

#ifdef __cplusplus
}
#endif
