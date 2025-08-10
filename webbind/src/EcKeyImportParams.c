#include <webbind/EcKeyImportParams.h>

DEFINE_EMLITE_TYPE(EcKeyImportParams, Algorithm);


jb_Any EcKeyImportParams_namedCurve(const EcKeyImportParams *self) {
    return em_Val_as(jb_Any, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("namedCurve")));
}


void EcKeyImportParams_set_namedCurve(EcKeyImportParams* self, jb_Any * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("namedCurve"), em_Val_from(value));
}


EcKeyImportParams EcKeyImportParams_new() {
    em_Val obj = em_Val_object();
    return EcKeyImportParams_from_val(&obj);
}

