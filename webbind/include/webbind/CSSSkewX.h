#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSTransformComponent.h"
#include "enums.h"

typedef struct CSSNumericValue CSSNumericValue;


typedef struct {
  CSSTransformComponent inner;
} CSSSkewX;


DECLARE_EMLITE_TYPE(CSSSkewX, CSSTransformComponent);

CSSSkewX CSSSkewX_new(const CSSNumericValue* ax);

CSSNumericValue CSSSkewX_ax( const CSSSkewX *self);

void CSSSkewX_set_ax(CSSSkewX* self, const CSSNumericValue* value);
