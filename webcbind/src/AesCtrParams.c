#include <webcbind/AesCtrParams.h>

DEFINE_EMLITE_TYPE(AesCtrParams, Algorithm);


jb_Any AesCtrParams_counter(const AesCtrParams *self) {
    return em_Val_as(jb_Any, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("counter")));
}


void AesCtrParams_set_counter(AesCtrParams* self, jb_Any * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("counter"), em_Val_from(value));
}


unsigned char AesCtrParams_length(const AesCtrParams *self) {
    return em_Val_as(unsigned char, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("length")));
}


void AesCtrParams_set_length(AesCtrParams* self, unsigned char value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("length"), em_Val_from(value));
}


AesCtrParams AesCtrParams_new() {
    em_Val obj = em_Val_object();
    return AesCtrParams_from_val(&obj);
}

