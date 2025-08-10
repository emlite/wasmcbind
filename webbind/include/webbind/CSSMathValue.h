#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSNumericValue.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CSSMathValue, CSSNumericValue);

CSSMathOperator CSSMathValue_operator_(const CSSMathValue *self);

#ifdef __cplusplus
}
#endif
