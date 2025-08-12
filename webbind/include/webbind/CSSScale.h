#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSTransformComponent.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSScale
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSScale)
 */
DECLARE_EMLITE_TYPE(CSSScale, CSSTransformComponent);

/**
 * @brief Creates a new `CSSScale` object. 
*/
CSSScale CSSScale_new0(jb_Any * x, jb_Any * y);

/**
 * @brief Creates a new `CSSScale` object. 
*/
CSSScale CSSScale_new1(jb_Any * x, jb_Any * y, jb_Any * z);

/**
 * @brief Gets the `x` property. 
*/
jb_Any CSSScale_x(const CSSScale *self);

/**
 * @brief Sets the `x` property. 
*/
void CSSScale_set_x(CSSScale* self, jb_Any * value);

/**
 * @brief Gets the `y` property. 
*/
jb_Any CSSScale_y(const CSSScale *self);

/**
 * @brief Sets the `y` property. 
*/
void CSSScale_set_y(CSSScale* self, jb_Any * value);

/**
 * @brief Gets the `z` property. 
*/
jb_Any CSSScale_z(const CSSScale *self);

/**
 * @brief Sets the `z` property. 
*/
void CSSScale_set_z(CSSScale* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
