#include <webbind/AesKeyGenParams.h>

DEFINE_EMLITE_TYPE(AesKeyGenParams, Algorithm);


unsigned short AesKeyGenParams_length(const AesKeyGenParams *self) {
    return em_Val_as(unsigned short, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("length")));
}


void AesKeyGenParams_set_length(AesKeyGenParams* self, unsigned short value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("length"), em_Val_from(value));
}


AesKeyGenParams AesKeyGenParams_new() {
    em_Val obj = em_Val_object();
    return AesKeyGenParams_from_val(&obj);
}

