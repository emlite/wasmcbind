#include <webbind/EcdsaParams.h>

DEFINE_EMLITE_TYPE(EcdsaParams, Algorithm);


jb_Any EcdsaParams_hash(const EcdsaParams *self) {
    return em_Val_as(jb_Any, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("hash")));
}


void EcdsaParams_set_hash(EcdsaParams* self, jb_Any * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("hash"), em_Val_from(value));
}


EcdsaParams EcdsaParams_new() {
    em_Val obj = em_Val_object();
    return EcdsaParams_from_val(&obj);
}

