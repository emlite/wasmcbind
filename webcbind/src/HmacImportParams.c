#include <webcbind/HmacImportParams.h>

DEFINE_EMLITE_TYPE(HmacImportParams, Algorithm);


jb_Any HmacImportParams_hash(const HmacImportParams *self) {
    return em_Val_as(jb_Any, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("hash")));
}


void HmacImportParams_set_hash(HmacImportParams* self, jb_Any * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("hash"), em_Val_from(value));
}


unsigned long HmacImportParams_length(const HmacImportParams *self) {
    return em_Val_as(unsigned long, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("length")));
}


void HmacImportParams_set_length(HmacImportParams* self, unsigned long value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("length"), em_Val_from(value));
}


HmacImportParams HmacImportParams_new() {
    em_Val obj = em_Val_object();
    return HmacImportParams_from_val(&obj);
}

