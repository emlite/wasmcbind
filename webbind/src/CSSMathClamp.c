#include <webbind/CSSMathClamp.h>
#include <webbind/CSSNumericValue.h>


DEFINE_EMLITE_TYPE(CSSMathClamp, CSSMathValue);


CSSMathClamp CSSMathClamp_new(const jb_Any* lower, const jb_Any* value, const jb_Any* upper) : CSSMathValue(em_Val_global("CSSMathClamp").new_(em_Val_from(lower), em_Val_from(value), em_Val_from(upper))) {
        return CSSMathClamp(em_Val_new(em_Val_global("CSSMathClamp", em_Val_from(lower), em_Val_from(value), em_Val_from(upper)));
      }


CSSNumericValue CSSMathClamp_lower(const CSSMathClamp *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSMathValue_as_val(self->inner), "lower"));
}


CSSNumericValue CSSMathClamp_value(const CSSMathClamp *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSMathValue_as_val(self->inner), "value"));
}


CSSNumericValue CSSMathClamp_upper(const CSSMathClamp *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSMathValue_as_val(self->inner), "upper"));
}

