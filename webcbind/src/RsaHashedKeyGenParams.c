#include <webcbind/RsaHashedKeyGenParams.h>

DEFINE_EMLITE_TYPE(RsaHashedKeyGenParams, RsaKeyGenParams);


jb_Any RsaHashedKeyGenParams_hash(const RsaHashedKeyGenParams *self) {
    return em_Val_as(jb_Any, em_Val_get(RsaKeyGenParams_as_val(self->inner), em_Val_from("hash")));
}


void RsaHashedKeyGenParams_set_hash(RsaHashedKeyGenParams* self, jb_Any * value) {
    em_Val_set(RsaKeyGenParams_as_val(self->inner), em_Val_from("hash"), em_Val_from(value));
}


RsaHashedKeyGenParams RsaHashedKeyGenParams_new() {
    em_Val obj = em_Val_object();
    return RsaHashedKeyGenParams_from_val(&obj);
}

