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
 * @brief Interface CSSRotate
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSRotate)
 */
DECLARE_EMLITE_TYPE(CSSRotate, CSSTransformComponent);

/**
 * @brief Creates a new `CSSRotate` object. 
*/
CSSRotate CSSRotate_new(jb_Any * x, jb_Any * y, jb_Any * z, CSSNumericValue * angle);

/**
 * @brief Gets the `x` property. 
*/
jb_Any CSSRotate_x(const CSSRotate *self);

/**
 * @brief Sets the `x` property. 
*/
void CSSRotate_set_x(CSSRotate* self, jb_Any * value);

/**
 * @brief Gets the `y` property. 
*/
jb_Any CSSRotate_y(const CSSRotate *self);

/**
 * @brief Sets the `y` property. 
*/
void CSSRotate_set_y(CSSRotate* self, jb_Any * value);

/**
 * @brief Gets the `z` property. 
*/
jb_Any CSSRotate_z(const CSSRotate *self);

/**
 * @brief Sets the `z` property. 
*/
void CSSRotate_set_z(CSSRotate* self, jb_Any * value);

/**
 * @brief Gets the `angle` property. 
*/
CSSNumericValue CSSRotate_angle(const CSSRotate *self);

/**
 * @brief Sets the `angle` property. 
*/
void CSSRotate_set_angle(CSSRotate* self, CSSNumericValue * value);

#ifdef __cplusplus
}
#endif
