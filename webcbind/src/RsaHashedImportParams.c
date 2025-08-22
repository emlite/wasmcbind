#include <webcbind/RsaHashedImportParams.h>

DEFINE_EMLITE_TYPE(RsaHashedImportParams, Algorithm);


jb_Any RsaHashedImportParams_hash(const RsaHashedImportParams *self) {
    return em_Val_as(jb_Any, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("hash")));
}


void RsaHashedImportParams_set_hash(RsaHashedImportParams* self, jb_Any * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("hash"), em_Val_from(value));
}


RsaHashedImportParams RsaHashedImportParams_new() {
    em_Val obj = em_Val_object();
    return RsaHashedImportParams_from_val(&obj);
}

