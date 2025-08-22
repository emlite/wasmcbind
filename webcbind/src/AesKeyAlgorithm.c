#include <webcbind/AesKeyAlgorithm.h>

DEFINE_EMLITE_TYPE(AesKeyAlgorithm, KeyAlgorithm);


unsigned short AesKeyAlgorithm_length(const AesKeyAlgorithm *self) {
    return em_Val_as(unsigned short, em_Val_get(KeyAlgorithm_as_val(self->inner), em_Val_from("length")));
}


void AesKeyAlgorithm_set_length(AesKeyAlgorithm* self, unsigned short value) {
    em_Val_set(KeyAlgorithm_as_val(self->inner), em_Val_from("length"), em_Val_from(value));
}


AesKeyAlgorithm AesKeyAlgorithm_new() {
    em_Val obj = em_Val_object();
    return AesKeyAlgorithm_from_val(&obj);
}

