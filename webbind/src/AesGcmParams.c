#include <webbind/AesGcmParams.h>

DEFINE_EMLITE_TYPE(AesGcmParams, Algorithm);


jb_Any AesGcmParams_iv(const AesGcmParams *self) {
    return em_Val_as(jb_Any, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("iv")));
}


void AesGcmParams_set_iv(AesGcmParams* self, jb_Any * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("iv"), em_Val_from(value));
}


jb_Any AesGcmParams_additionalData(const AesGcmParams *self) {
    return em_Val_as(jb_Any, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("additionalData")));
}


void AesGcmParams_set_additionalData(AesGcmParams* self, jb_Any * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("additionalData"), em_Val_from(value));
}


unsigned char AesGcmParams_tagLength(const AesGcmParams *self) {
    return em_Val_as(unsigned char, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("tagLength")));
}


void AesGcmParams_set_tagLength(AesGcmParams* self, unsigned char value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("tagLength"), em_Val_from(value));
}


AesGcmParams AesGcmParams_new() {
    em_Val obj = em_Val_object();
    return AesGcmParams_from_val(&obj);
}

