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
 * @brief Interface CSSTranslate
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSTranslate)
 */
DECLARE_EMLITE_TYPE(CSSTranslate, CSSTransformComponent);

/**
 * @brief Creates a new `CSSTranslate` object. 
*/
CSSTranslate CSSTranslate_new0(CSSNumericValue * x, CSSNumericValue * y);

/**
 * @brief Creates a new `CSSTranslate` object. 
*/
CSSTranslate CSSTranslate_new1(CSSNumericValue * x, CSSNumericValue * y, CSSNumericValue * z);

/**
 * @brief Gets the `x` property. 
*/
CSSNumericValue CSSTranslate_x(const CSSTranslate *self);

/**
 * @brief Sets the `x` property. 
*/
void CSSTranslate_set_x(CSSTranslate* self, CSSNumericValue * value);

/**
 * @brief Gets the `y` property. 
*/
CSSNumericValue CSSTranslate_y(const CSSTranslate *self);

/**
 * @brief Sets the `y` property. 
*/
void CSSTranslate_set_y(CSSTranslate* self, CSSNumericValue * value);

/**
 * @brief Gets the `z` property. 
*/
CSSNumericValue CSSTranslate_z(const CSSTranslate *self);

/**
 * @brief Sets the `z` property. 
*/
void CSSTranslate_set_z(CSSTranslate* self, CSSNumericValue * value);

#ifdef __cplusplus
}
#endif
