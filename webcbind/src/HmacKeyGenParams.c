#include <webcbind/HmacKeyGenParams.h>

DEFINE_EMLITE_TYPE(HmacKeyGenParams, Algorithm);


jb_Any HmacKeyGenParams_hash(const HmacKeyGenParams *self) {
    return em_Val_as(jb_Any, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("hash")));
}


void HmacKeyGenParams_set_hash(HmacKeyGenParams* self, jb_Any * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("hash"), em_Val_from(value));
}


unsigned long HmacKeyGenParams_length(const HmacKeyGenParams *self) {
    return em_Val_as(unsigned long, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("length")));
}


void HmacKeyGenParams_set_length(HmacKeyGenParams* self, unsigned long value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("length"), em_Val_from(value));
}


HmacKeyGenParams HmacKeyGenParams_new() {
    em_Val obj = em_Val_object();
    return HmacKeyGenParams_from_val(&obj);
}

