#include <webbind/CSSMathSum.h>

#include <webbind/CSSNumericArray.h>

DEFINE_EMLITE_TYPE(CSSMathSum, CSSMathValue);


CSSMathSum CSSMathSum_new(jb_Any * args) {
        em_Val vv = em_Val_new(em_Val_global("CSSMathSum") , em_Val_from(args));
        return CSSMathSum_from_val(&vv);
      }


CSSNumericArray CSSMathSum_values(const CSSMathSum *self) {
    return em_Val_as(CSSNumericArray, em_Val_get(CSSMathValue_as_val(self->inner), em_Val_from("values")));
}

