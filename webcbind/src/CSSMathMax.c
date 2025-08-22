#include <webcbind/CSSMathMax.h>

#include <webcbind/CSSNumericArray.h>

DEFINE_EMLITE_TYPE(CSSMathMax, CSSMathValue);


CSSMathMax CSSMathMax_new(jb_Any * args) {
        em_Val vv = em_Val_new(em_Val_global("CSSMathMax") , em_Val_from(args));
        return CSSMathMax_from_val(&vv);
      }


CSSNumericArray CSSMathMax_values(const CSSMathMax *self) {
    return em_Val_as(CSSNumericArray, em_Val_get(CSSMathValue_as_val(self->inner), em_Val_from("values")));
}

