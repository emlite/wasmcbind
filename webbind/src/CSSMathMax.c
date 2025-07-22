#include <webbind/CSSMathMax.h>
#include <webbind/CSSNumericArray.h>


DEFINE_EMLITE_TYPE(CSSMathMax, CSSMathValue);


CSSMathMax CSSMathMax_new(const jb_Any* args) : CSSMathValue(em_Val_global("CSSMathMax").new_(em_Val_from(args))) {
        return CSSMathMax(em_Val_new(em_Val_global("CSSMathMax", em_Val_from(args)));
      }


CSSNumericArray CSSMathMax_values(const CSSMathMax *self) {
    return em_Val_as(CSSNumericArray, em_Val_get(CSSMathValue_as_val(self->inner), "values"));
}

