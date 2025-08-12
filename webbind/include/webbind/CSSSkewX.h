#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSTransformComponent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSNumericValue CSSNumericValue;


/**
 * @brief Interface CSSSkewX
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSSkewX)
 */
DECLARE_EMLITE_TYPE(CSSSkewX, CSSTransformComponent);

/**
 * @brief Creates a new `CSSSkewX` object. 
*/
CSSSkewX CSSSkewX_new(CSSNumericValue * ax);

/**
 * @brief Gets the `ax` property. 
*/
CSSNumericValue CSSSkewX_ax(const CSSSkewX *self);

/**
 * @brief Sets the `ax` property. 
*/
void CSSSkewX_set_ax(CSSSkewX* self, CSSNumericValue * value);

#ifdef __cplusplus
}
#endif
