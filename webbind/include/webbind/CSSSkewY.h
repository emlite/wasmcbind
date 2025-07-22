#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSTransformComponent.h"
#include "enums.h"

typedef struct CSSNumericValue CSSNumericValue;


typedef struct {
  CSSTransformComponent inner;
} CSSSkewY;


DECLARE_EMLITE_TYPE(CSSSkewY, CSSTransformComponent);

CSSSkewY CSSSkewY_new(const CSSNumericValue* ay);

CSSNumericValue CSSSkewY_ay( const CSSSkewY *self);

void CSSSkewY_set_ay(CSSSkewY* self, const CSSNumericValue* value);
