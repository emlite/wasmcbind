#include <webbind/CSSMathClamp.h>

#include <webbind/CSSNumericValue.h>

DEFINE_EMLITE_TYPE(CSSMathClamp, CSSMathValue);


CSSMathClamp CSSMathClamp_new(jb_Any * lower, jb_Any * value, jb_Any * upper) {
        em_Val vv = em_Val_new(em_Val_global("CSSMathClamp") , em_Val_from(lower), em_Val_from(value), em_Val_from(upper));
        return CSSMathClamp_from_val(&vv);
      }


CSSNumericValue CSSMathClamp_lower(const CSSMathClamp *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSMathValue_as_val(self->inner), em_Val_from("lower")));
}


CSSNumericValue CSSMathClamp_value(const CSSMathClamp *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSMathValue_as_val(self->inner), em_Val_from("value")));
}


CSSNumericValue CSSMathClamp_upper(const CSSMathClamp *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSMathValue_as_val(self->inner), em_Val_from("upper")));
}

