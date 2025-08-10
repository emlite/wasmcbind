#include <webbind/RsaOaepParams.h>

DEFINE_EMLITE_TYPE(RsaOaepParams, Algorithm);


jb_Any RsaOaepParams_label(const RsaOaepParams *self) {
    return em_Val_as(jb_Any, em_Val_get(Algorithm_as_val(self->inner), em_Val_from("label")));
}


void RsaOaepParams_set_label(RsaOaepParams* self, jb_Any * value) {
    em_Val_set(Algorithm_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


RsaOaepParams RsaOaepParams_new() {
    em_Val obj = em_Val_object();
    return RsaOaepParams_from_val(&obj);
}

