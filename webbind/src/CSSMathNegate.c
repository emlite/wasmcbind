#include <webbind/CSSMathNegate.h>
#include <webbind/CSSNumericValue.h>


DEFINE_EMLITE_TYPE(CSSMathNegate, CSSMathValue);


CSSMathNegate CSSMathNegate_new(const jb_Any* arg) : CSSMathValue(em_Val_global("CSSMathNegate").new_(em_Val_from(arg))) {
        return CSSMathNegate(em_Val_new(em_Val_global("CSSMathNegate", em_Val_from(arg)));
      }


CSSNumericValue CSSMathNegate_value(const CSSMathNegate *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSMathValue_as_val(self->inner), "value"));
}

