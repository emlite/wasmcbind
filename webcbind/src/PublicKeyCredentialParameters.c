#include <webcbind/PublicKeyCredentialParameters.h>

DEFINE_EMLITE_TYPE(PublicKeyCredentialParameters, em_Val);


jb_String PublicKeyCredentialParameters_type(const PublicKeyCredentialParameters *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void PublicKeyCredentialParameters_set_type(PublicKeyCredentialParameters* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


jb_Any PublicKeyCredentialParameters_alg(const PublicKeyCredentialParameters *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alg")));
}


void PublicKeyCredentialParameters_set_alg(PublicKeyCredentialParameters* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alg"), em_Val_from(value));
}


PublicKeyCredentialParameters PublicKeyCredentialParameters_new() {
    em_Val obj = em_Val_object();
    return PublicKeyCredentialParameters_from_val(&obj);
}

