#include <webcbind/RsaKeyAlgorithm.h>

DEFINE_EMLITE_TYPE(RsaKeyAlgorithm, KeyAlgorithm);


unsigned long RsaKeyAlgorithm_modulusLength(const RsaKeyAlgorithm *self) {
    return em_Val_as(unsigned long, em_Val_get(KeyAlgorithm_as_val(self->inner), em_Val_from("modulusLength")));
}


void RsaKeyAlgorithm_set_modulusLength(RsaKeyAlgorithm* self, unsigned long value) {
    em_Val_set(KeyAlgorithm_as_val(self->inner), em_Val_from("modulusLength"), em_Val_from(value));
}


jb_Any RsaKeyAlgorithm_publicExponent(const RsaKeyAlgorithm *self) {
    return em_Val_as(jb_Any, em_Val_get(KeyAlgorithm_as_val(self->inner), em_Val_from("publicExponent")));
}


void RsaKeyAlgorithm_set_publicExponent(RsaKeyAlgorithm* self, jb_Any * value) {
    em_Val_set(KeyAlgorithm_as_val(self->inner), em_Val_from("publicExponent"), em_Val_from(value));
}


RsaKeyAlgorithm RsaKeyAlgorithm_new() {
    em_Val obj = em_Val_object();
    return RsaKeyAlgorithm_from_val(&obj);
}

