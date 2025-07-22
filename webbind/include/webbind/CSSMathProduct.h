#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSMathValue.h"
#include "enums.h"

typedef struct CSSNumericArray CSSNumericArray;


DECLARE_EMLITE_TYPE(CSSMathProduct, CSSMathValue);

CSSMathProduct CSSMathProduct_new(jb_Any * args);

CSSNumericArray CSSMathProduct_values( const CSSMathProduct *self);
