#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSMathValue.h"
#include "enums.h"

typedef struct CSSNumericValue CSSNumericValue;


typedef struct {
  CSSMathValue inner;
} CSSMathNegate;


DECLARE_EMLITE_TYPE(CSSMathNegate, CSSMathValue);

CSSMathNegate CSSMathNegate_new(const jb_Any* arg);

CSSNumericValue CSSMathNegate_value( const CSSMathNegate *self);
