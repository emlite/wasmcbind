#include <webbind/PublicKeyCredentialEntity.h>

DEFINE_EMLITE_TYPE(PublicKeyCredentialEntity, em_Val);


jb_String PublicKeyCredentialEntity_name(const PublicKeyCredentialEntity *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("name")));
}


void PublicKeyCredentialEntity_set_name(PublicKeyCredentialEntity* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


PublicKeyCredentialEntity PublicKeyCredentialEntity_new() {
    em_Val obj = em_Val_object();
    return PublicKeyCredentialEntity_from_val(&obj);
}

