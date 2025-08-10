#include <webbind/RsaKeyGenParams.h>

DEFINE_EMLITE_TYPE(RsaKeyGenParams, Algorithm);


unsigned long RsaKeyGenParams_modulusLength(const RsaKeyGenParams *self) {
    return em_Val_as(unsigned long, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("modulusLength")));
}


void RsaKeyGenParams_set_modulusLength(RsaKeyGenParams* self, unsigned long value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("modulusLength"), em_Val_from(value));
}


jb_Any RsaKeyGenParams_publicExponent(const RsaKeyGenParams *self) {
    return em_Val_as(jb_Any, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("publicExponent")));
}


void RsaKeyGenParams_set_publicExponent(RsaKeyGenParams* self, jb_Any * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("publicExponent"), em_Val_from(value));
}


RsaKeyGenParams RsaKeyGenParams_new() {
    em_Val obj = em_Val_object();
    return RsaKeyGenParams_from_val(&obj);
}

