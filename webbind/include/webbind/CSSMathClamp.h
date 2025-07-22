#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSMathValue.h"
#include "enums.h"

typedef struct CSSNumericValue CSSNumericValue;


typedef struct {
  CSSMathValue inner;
} CSSMathClamp;


DECLARE_EMLITE_TYPE(CSSMathClamp, CSSMathValue);

CSSMathClamp CSSMathClamp_new(const jb_Any* lower, const jb_Any* value, const jb_Any* upper);

CSSNumericValue CSSMathClamp_lower( const CSSMathClamp *self);

CSSNumericValue CSSMathClamp_value( const CSSMathClamp *self);

CSSNumericValue CSSMathClamp_upper( const CSSMathClamp *self);
