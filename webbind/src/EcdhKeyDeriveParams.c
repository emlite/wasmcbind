#include <webbind/EcdhKeyDeriveParams.h>

#include <webbind/CryptoKey.h>

DEFINE_EMLITE_TYPE(EcdhKeyDeriveParams, Algorithm);


CryptoKey EcdhKeyDeriveParams_public_(const EcdhKeyDeriveParams *self) {
    return em_Val_as(CryptoKey, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("public")));
}


void EcdhKeyDeriveParams_set_public_(EcdhKeyDeriveParams* self, CryptoKey * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("public"), em_Val_from(value));
}


EcdhKeyDeriveParams EcdhKeyDeriveParams_new() {
    em_Val obj = em_Val_object();
    return EcdhKeyDeriveParams_from_val(&obj);
}

