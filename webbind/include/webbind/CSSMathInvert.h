#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSMathValue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSNumericValue CSSNumericValue;

DECLARE_EMLITE_TYPE(CSSMathInvert, CSSMathValue);

CSSMathInvert CSSMathInvert_new(jb_Any * arg);

CSSNumericValue CSSMathInvert_value(const CSSMathInvert *self);

#ifdef __cplusplus
}
#endif
