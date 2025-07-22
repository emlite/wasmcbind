#include <webbind/CSSMathInvert.h>
#include <webbind/CSSNumericValue.h>


DEFINE_EMLITE_TYPE(CSSMathInvert, CSSMathValue);


CSSMathInvert CSSMathInvert_new(const jb_Any* arg) : CSSMathValue(em_Val_global("CSSMathInvert").new_(em_Val_from(arg))) {
        return CSSMathInvert(em_Val_new(em_Val_global("CSSMathInvert", em_Val_from(arg)));
      }


CSSNumericValue CSSMathInvert_value(const CSSMathInvert *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSMathValue_as_val(self->inner), "value"));
}

