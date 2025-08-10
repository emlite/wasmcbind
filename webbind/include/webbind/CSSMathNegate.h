#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSMathValue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSNumericValue CSSNumericValue;

DECLARE_EMLITE_TYPE(CSSMathNegate, CSSMathValue);

CSSMathNegate CSSMathNegate_new(jb_Any * arg);

CSSNumericValue CSSMathNegate_value(const CSSMathNegate *self);

#ifdef __cplusplus
}
#endif
