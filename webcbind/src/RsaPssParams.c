#include <webcbind/RsaPssParams.h>

DEFINE_EMLITE_TYPE(RsaPssParams, Algorithm);


unsigned long RsaPssParams_saltLength(const RsaPssParams *self) {
    return em_Val_as(unsigned long, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("saltLength")));
}


void RsaPssParams_set_saltLength(RsaPssParams* self, unsigned long value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("saltLength"), em_Val_from(value));
}


RsaPssParams RsaPssParams_new() {
    em_Val obj = em_Val_object();
    return RsaPssParams_from_val(&obj);
}

