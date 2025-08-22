#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSTransformComponent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMMatrixReadOnly DOMMatrixReadOnly;
typedef struct CSSMatrixComponentOptions CSSMatrixComponentOptions;
typedef struct DOMMatrix DOMMatrix;


/**
 * @brief Interface CSSMatrixComponent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSMatrixComponent)
 */
DECLARE_EMLITE_TYPE(CSSMatrixComponent, CSSTransformComponent);

/**
 * @brief Creates a new `CSSMatrixComponent` object. 
*/
CSSMatrixComponent CSSMatrixComponent_new0(DOMMatrixReadOnly * matrix);

/**
 * @brief Creates a new `CSSMatrixComponent` object. 
*/
CSSMatrixComponent CSSMatrixComponent_new1(DOMMatrixReadOnly * matrix, CSSMatrixComponentOptions * options);

/**
 * @brief Gets the `matrix` property. 
*/
DOMMatrix CSSMatrixComponent_matrix(const CSSMatrixComponent *self);

/**
 * @brief Sets the `matrix` property. 
*/
void CSSMatrixComponent_set_matrix(CSSMatrixComponent* self, DOMMatrix * value);

#ifdef __cplusplus
}
#endif
