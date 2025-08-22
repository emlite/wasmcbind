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
 * @brief Interface CSSSkew
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSSkew)
 */
DECLARE_EMLITE_TYPE(CSSSkew, CSSTransformComponent);

/**
 * @brief Creates a new `CSSSkew` object. 
*/
CSSSkew CSSSkew_new(CSSNumericValue * ax, CSSNumericValue * ay);

/**
 * @brief Gets the `ax` property. 
*/
CSSNumericValue CSSSkew_ax(const CSSSkew *self);

/**
 * @brief Sets the `ax` property. 
*/
void CSSSkew_set_ax(CSSSkew* self, CSSNumericValue * value);

/**
 * @brief Gets the `ay` property. 
*/
CSSNumericValue CSSSkew_ay(const CSSSkew *self);

/**
 * @brief Sets the `ay` property. 
*/
void CSSSkew_set_ay(CSSSkew* self, CSSNumericValue * value);

#ifdef __cplusplus
}
#endif
