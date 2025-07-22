#include <webbind/CSSMathValue.h>


DEFINE_EMLITE_TYPE(CSSMathValue, CSSNumericValue);


CSSMathOperator CSSMathValue_operator_(const CSSMathValue *self) {
    return em_Val_as(CSSMathOperator, em_Val_get(CSSNumericValue_as_val(self->inner), "operator"));
}

