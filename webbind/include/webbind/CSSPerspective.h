#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSTransformComponent.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSPerspective
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSPerspective)
 */
DECLARE_EMLITE_TYPE(CSSPerspective, CSSTransformComponent);

/**
 * @brief Creates a new `CSSPerspective` object. 
*/
CSSPerspective CSSPerspective_new(jb_Any * length);

/**
 * @brief Gets the `length` property. 
*/
jb_Any CSSPerspective_length(const CSSPerspective *self);

/**
 * @brief Sets the `length` property. 
*/
void CSSPerspective_set_length(CSSPerspective* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
