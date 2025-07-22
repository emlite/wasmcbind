#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSTransformComponent.h"
#include "enums.h"

typedef struct DOMMatrix DOMMatrix;
typedef struct DOMMatrixReadOnly DOMMatrixReadOnly;


typedef struct {
  CSSTransformComponent inner;
} CSSMatrixComponent;


DECLARE_EMLITE_TYPE(CSSMatrixComponent, CSSTransformComponent);

CSSMatrixComponent CSSMatrixComponent_new(const DOMMatrixReadOnly* matrix);

CSSMatrixComponent CSSMatrixComponent_new(const DOMMatrixReadOnly* matrix, const jb_Any* options);

DOMMatrix CSSMatrixComponent_matrix( const CSSMatrixComponent *self);

void CSSMatrixComponent_set_matrix(CSSMatrixComponent* self, const DOMMatrix* value);
