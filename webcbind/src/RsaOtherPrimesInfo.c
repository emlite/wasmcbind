#include <webcbind/RsaOtherPrimesInfo.h>

DEFINE_EMLITE_TYPE(RsaOtherPrimesInfo, em_Val);


jb_String RsaOtherPrimesInfo_r(const RsaOtherPrimesInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("r")));
}


void RsaOtherPrimesInfo_set_r(RsaOtherPrimesInfo* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("r"), em_Val_from(value));
}


jb_String RsaOtherPrimesInfo_d(const RsaOtherPrimesInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("d")));
}


void RsaOtherPrimesInfo_set_d(RsaOtherPrimesInfo* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("d"), em_Val_from(value));
}


jb_String RsaOtherPrimesInfo_t(const RsaOtherPrimesInfo *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("t")));
}


void RsaOtherPrimesInfo_set_t(RsaOtherPrimesInfo* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("t"), em_Val_from(value));
}


RsaOtherPrimesInfo RsaOtherPrimesInfo_new() {
    em_Val obj = em_Val_object();
    return RsaOtherPrimesInfo_from_val(&obj);
}

