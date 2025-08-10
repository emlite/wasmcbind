#include <webbind/EcKeyGenParams.h>

DEFINE_EMLITE_TYPE(EcKeyGenParams, Algorithm);


jb_Any EcKeyGenParams_namedCurve(const EcKeyGenParams *self) {
    return em_Val_as(jb_Any, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("namedCurve")));
}


void EcKeyGenParams_set_namedCurve(EcKeyGenParams* self, jb_Any * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("namedCurve"), em_Val_from(value));
}


EcKeyGenParams EcKeyGenParams_new() {
    em_Val obj = em_Val_object();
    return EcKeyGenParams_from_val(&obj);
}

