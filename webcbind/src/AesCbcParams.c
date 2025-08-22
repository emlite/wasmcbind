#include <webcbind/AesCbcParams.h>

DEFINE_EMLITE_TYPE(AesCbcParams, Algorithm);


jb_Any AesCbcParams_iv(const AesCbcParams *self) {
    return em_Val_as(jb_Any, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("iv")));
}


void AesCbcParams_set_iv(AesCbcParams* self, jb_Any * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("iv"), em_Val_from(value));
}


AesCbcParams AesCbcParams_new() {
    em_Val obj = em_Val_object();
    return AesCbcParams_from_val(&obj);
}

