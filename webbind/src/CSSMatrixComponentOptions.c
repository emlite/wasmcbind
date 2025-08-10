#include <webbind/CSSMatrixComponentOptions.h>

DEFINE_EMLITE_TYPE(CSSMatrixComponentOptions, em_Val);


bool CSSMatrixComponentOptions_is2D(const CSSMatrixComponentOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("is2D")));
}


void CSSMatrixComponentOptions_set_is2D(CSSMatrixComponentOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("is2D"), em_Val_from(value));
}


CSSMatrixComponentOptions CSSMatrixComponentOptions_new() {
    em_Val obj = em_Val_object();
    return CSSMatrixComponentOptions_from_val(&obj);
}

