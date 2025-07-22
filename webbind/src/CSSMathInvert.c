#include <webbind/CSSMathInvert.h>
#include <webbind/CSSNumericValue.h>


DEFINE_EMLITE_TYPE(CSSMathInvert, CSSMathValue);


CSSMathInvert CSSMathInvert_new(jb_Any * arg) {
        em_Val vv = em_Val_new(em_Val_global("CSSMathInvert") , em_Val_from(arg));
        return CSSMathInvert_from_val(&vv);
      }


CSSNumericValue CSSMathInvert_value(const CSSMathInvert *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSMathValue_as_val(self->inner), em_Val_from("value")));
}

