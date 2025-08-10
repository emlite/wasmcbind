#include <webbind/RsaHashedKeyAlgorithm.h>

DEFINE_EMLITE_TYPE(RsaHashedKeyAlgorithm, RsaKeyAlgorithm);


KeyAlgorithm RsaHashedKeyAlgorithm_hash(const RsaHashedKeyAlgorithm *self) {
    return em_Val_as(KeyAlgorithm, em_Val_get(RsaKeyAlgorithm_as_val(self->inner), em_Val_from("hash")));
}


void RsaHashedKeyAlgorithm_set_hash(RsaHashedKeyAlgorithm* self, KeyAlgorithm * value) {
    em_Val_set(RsaKeyAlgorithm_as_val(self->inner), em_Val_from("hash"), em_Val_from(value));
}


RsaHashedKeyAlgorithm RsaHashedKeyAlgorithm_new() {
    em_Val obj = em_Val_object();
    return RsaHashedKeyAlgorithm_from_val(&obj);
}

