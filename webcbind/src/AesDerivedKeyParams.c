#include <webcbind/AesDerivedKeyParams.h>

DEFINE_EMLITE_TYPE(AesDerivedKeyParams, Algorithm);


unsigned short AesDerivedKeyParams_length(const AesDerivedKeyParams *self) {
    return em_Val_as(unsigned short, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("length")));
}


void AesDerivedKeyParams_set_length(AesDerivedKeyParams* self, unsigned short value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("length"), em_Val_from(value));
}


AesDerivedKeyParams AesDerivedKeyParams_new() {
    em_Val obj = em_Val_object();
    return AesDerivedKeyParams_from_val(&obj);
}

