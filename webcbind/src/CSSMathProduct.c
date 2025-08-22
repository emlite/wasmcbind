#include <webcbind/CSSMathProduct.h>

#include <webcbind/CSSNumericArray.h>

DEFINE_EMLITE_TYPE(CSSMathProduct, CSSMathValue);


CSSMathProduct CSSMathProduct_new(jb_Any * args) {
        em_Val vv = em_Val_new(em_Val_global("CSSMathProduct") , em_Val_from(args));
        return CSSMathProduct_from_val(&vv);
      }


CSSNumericArray CSSMathProduct_values(const CSSMathProduct *self) {
    return em_Val_as(CSSNumericArray, em_Val_get(CSSMathValue_as_val(self->inner), em_Val_from("values")));
}

