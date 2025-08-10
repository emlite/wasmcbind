#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSTransformComponent.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMMatrixReadOnly DOMMatrixReadOnly;
typedef struct CSSMatrixComponentOptions CSSMatrixComponentOptions;
typedef struct DOMMatrix DOMMatrix;

DECLARE_EMLITE_TYPE(CSSMatrixComponent, CSSTransformComponent);

CSSMatrixComponent CSSMatrixComponent_new0(DOMMatrixReadOnly * matrix);

CSSMatrixComponent CSSMatrixComponent_new1(DOMMatrixReadOnly * matrix, CSSMatrixComponentOptions * options);

DOMMatrix CSSMatrixComponent_matrix(const CSSMatrixComponent *self);

void CSSMatrixComponent_set_matrix(CSSMatrixComponent* self, DOMMatrix * value);

#ifdef __cplusplus
}
#endif
