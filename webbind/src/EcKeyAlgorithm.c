#include <webbind/EcKeyAlgorithm.h>

DEFINE_EMLITE_TYPE(EcKeyAlgorithm, KeyAlgorithm);


jb_Any EcKeyAlgorithm_namedCurve(const EcKeyAlgorithm *self) {
    return em_Val_as(jb_Any, em_Val_get(KeyAlgorithm_as_val(self->inner), em_Val_from("namedCurve")));
}


void EcKeyAlgorithm_set_namedCurve(EcKeyAlgorithm* self, jb_Any * value) {
    em_Val_set(KeyAlgorithm_as_val(self->inner), em_Val_from("namedCurve"), em_Val_from(value));
}


EcKeyAlgorithm EcKeyAlgorithm_new() {
    em_Val obj = em_Val_object();
    return EcKeyAlgorithm_from_val(&obj);
}

