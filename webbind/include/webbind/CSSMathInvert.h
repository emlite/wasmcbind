#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSMathValue.h"
#include "enums.h"

typedef struct CSSNumericValue CSSNumericValue;


typedef struct {
  CSSMathValue inner;
} CSSMathInvert;


DECLARE_EMLITE_TYPE(CSSMathInvert, CSSMathValue);

CSSMathInvert CSSMathInvert_new(const jb_Any* arg);

CSSNumericValue CSSMathInvert_value( const CSSMathInvert *self);
