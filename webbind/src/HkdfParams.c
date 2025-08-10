#include <webbind/HkdfParams.h>

DEFINE_EMLITE_TYPE(HkdfParams, Algorithm);


jb_Any HkdfParams_hash(const HkdfParams *self) {
    return em_Val_as(jb_Any, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("hash")));
}


void HkdfParams_set_hash(HkdfParams* self, jb_Any * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("hash"), em_Val_from(value));
}


jb_Any HkdfParams_salt(const HkdfParams *self) {
    return em_Val_as(jb_Any, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("salt")));
}


void HkdfParams_set_salt(HkdfParams* self, jb_Any * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("salt"), em_Val_from(value));
}


jb_Any HkdfParams_info(const HkdfParams *self) {
    return em_Val_as(jb_Any, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("info")));
}


void HkdfParams_set_info(HkdfParams* self, jb_Any * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("info"), em_Val_from(value));
}


HkdfParams HkdfParams_new() {
    em_Val obj = em_Val_object();
    return HkdfParams_from_val(&obj);
}

