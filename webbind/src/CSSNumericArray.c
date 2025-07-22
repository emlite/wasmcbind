#include <webbind/CSSNumericArray.h>
#include <webbind/CSSNumericValue.h>


DEFINE_EMLITE_TYPE(CSSNumericArray, em_Val);


unsigned long CSSNumericArray_length(const CSSNumericArray *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "length"));
}

