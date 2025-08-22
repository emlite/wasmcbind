#include <webcbind/CSSMathNegate.h>

#include <webcbind/CSSNumericValue.h>

DEFINE_EMLITE_TYPE(CSSMathNegate, CSSMathValue);


CSSMathNegate CSSMathNegate_new(jb_Any * arg) {
        em_Val vv = em_Val_new(em_Val_global("CSSMathNegate") , em_Val_from(arg));
        return CSSMathNegate_from_val(&vv);
      }


CSSNumericValue CSSMathNegate_value(const CSSMathNegate *self) {
    return em_Val_as(CSSNumericValue, em_Val_get(CSSMathValue_as_val(self->inner), em_Val_from("value")));
}

