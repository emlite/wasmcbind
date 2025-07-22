#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSNumericValue.h"
#include "enums.h"


typedef struct {
  CSSNumericValue inner;
} CSSMathValue;


DECLARE_EMLITE_TYPE(CSSMathValue, CSSNumericValue);

CSSMathOperator CSSMathValue_operator_( const CSSMathValue *self);
