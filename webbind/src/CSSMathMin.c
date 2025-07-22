#include <webbind/CSSMathMin.h>
#include <webbind/CSSNumericArray.h>


DEFINE_EMLITE_TYPE(CSSMathMin, CSSMathValue);


CSSMathMin CSSMathMin_new(const jb_Any* args) : CSSMathValue(em_Val_global("CSSMathMin").new_(em_Val_from(args))) {
        return CSSMathMin(em_Val_new(em_Val_global("CSSMathMin", em_Val_from(args)));
      }


CSSNumericArray CSSMathMin_values(const CSSMathMin *self) {
    return em_Val_as(CSSNumericArray, em_Val_get(CSSMathValue_as_val(self->inner), "values"));
}

