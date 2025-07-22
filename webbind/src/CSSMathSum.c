#include <webbind/CSSMathSum.h>
#include <webbind/CSSNumericArray.h>


DEFINE_EMLITE_TYPE(CSSMathSum, CSSMathValue);


CSSMathSum CSSMathSum_new(const jb_Any* args) : CSSMathValue(em_Val_global("CSSMathSum").new_(em_Val_from(args))) {
        return CSSMathSum(em_Val_new(em_Val_global("CSSMathSum", em_Val_from(args)));
      }


CSSNumericArray CSSMathSum_values(const CSSMathSum *self) {
    return em_Val_as(CSSNumericArray, em_Val_get(CSSMathValue_as_val(self->inner), "values"));
}

