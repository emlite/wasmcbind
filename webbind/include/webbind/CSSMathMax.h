#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSMathValue.h"
#include "enums.h"

typedef struct CSSNumericArray CSSNumericArray;


typedef struct {
  CSSMathValue inner;
} CSSMathMax;


DECLARE_EMLITE_TYPE(CSSMathMax, CSSMathValue);

CSSMathMax CSSMathMax_new(const jb_Any* args);

CSSNumericArray CSSMathMax_values( const CSSMathMax *self);
