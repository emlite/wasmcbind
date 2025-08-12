#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMMatrix DOMMatrix;


/**
 * @brief Interface CSSTransformComponent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSTransformComponent)
 */
DECLARE_EMLITE_TYPE(CSSTransformComponent, em_Val);

/**
 * @brief Gets the `is2D` property. 
*/
bool CSSTransformComponent_is2D(const CSSTransformComponent *self);

/**
 * @brief Sets the `is2D` property. 
*/
void CSSTransformComponent_set_is2D(CSSTransformComponent* self, bool value);

/**
 * @brief Calls the `toMatrix` method. 
*/
DOMMatrix CSSTransformComponent_toMatrix(CSSTransformComponent* self );

#ifdef __cplusplus
}
#endif
