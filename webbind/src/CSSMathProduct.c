#include <webbind/CSSMathProduct.h>
#include <webbind/CSSNumericArray.h>


DEFINE_EMLITE_TYPE(CSSMathProduct, CSSMathValue);


CSSMathProduct CSSMathProduct_new(const jb_Any* args) : CSSMathValue(em_Val_global("CSSMathProduct").new_(em_Val_from(args))) {
        return CSSMathProduct(em_Val_new(em_Val_global("CSSMathProduct", em_Val_from(args)));
      }


CSSNumericArray CSSMathProduct_values(const CSSMathProduct *self) {
    return em_Val_as(CSSNumericArray, em_Val_get(CSSMathValue_as_val(self->inner), "values"));
}

