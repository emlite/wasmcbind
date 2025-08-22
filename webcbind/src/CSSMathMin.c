#include <webcbind/CSSMathMin.h>

#include <webcbind/CSSNumericArray.h>

DEFINE_EMLITE_TYPE(CSSMathMin, CSSMathValue);


CSSMathMin CSSMathMin_new(jb_Any * args) {
        em_Val vv = em_Val_new(em_Val_global("CSSMathMin") , em_Val_from(args));
        return CSSMathMin_from_val(&vv);
      }


CSSNumericArray CSSMathMin_values(const CSSMathMin *self) {
    return em_Val_as(CSSNumericArray, em_Val_get(CSSMathValue_as_val(self->inner), em_Val_from("values")));
}

