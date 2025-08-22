#include <webcbind/HmacKeyAlgorithm.h>

DEFINE_EMLITE_TYPE(HmacKeyAlgorithm, KeyAlgorithm);


KeyAlgorithm HmacKeyAlgorithm_hash(const HmacKeyAlgorithm *self) {
    return em_Val_as(KeyAlgorithm, em_Val_get(KeyAlgorithm_as_val(self->inner), em_Val_from("hash")));
}


void HmacKeyAlgorithm_set_hash(HmacKeyAlgorithm* self, KeyAlgorithm * value) {
    em_Val_set(KeyAlgorithm_as_val(self->inner), em_Val_from("hash"), em_Val_from(value));
}


unsigned long HmacKeyAlgorithm_length(const HmacKeyAlgorithm *self) {
    return em_Val_as(unsigned long, em_Val_get(KeyAlgorithm_as_val(self->inner), em_Val_from("length")));
}


void HmacKeyAlgorithm_set_length(HmacKeyAlgorithm* self, unsigned long value) {
    em_Val_set(KeyAlgorithm_as_val(self->inner), em_Val_from("length"), em_Val_from(value));
}


HmacKeyAlgorithm HmacKeyAlgorithm_new() {
    em_Val obj = em_Val_object();
    return HmacKeyAlgorithm_from_val(&obj);
}

