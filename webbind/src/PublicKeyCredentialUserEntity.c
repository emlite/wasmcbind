#include <webbind/PublicKeyCredentialUserEntity.h>

DEFINE_EMLITE_TYPE(PublicKeyCredentialUserEntity, PublicKeyCredentialEntity);


jb_Any PublicKeyCredentialUserEntity_id(const PublicKeyCredentialUserEntity *self) {
    return em_Val_as(jb_Any, em_Val_get(PublicKeyCredentialEntity_as_val(self->inner), em_Val_from("id")));
}


void PublicKeyCredentialUserEntity_set_id(PublicKeyCredentialUserEntity* self, jb_Any * value) {
    em_Val_set(PublicKeyCredentialEntity_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


jb_String PublicKeyCredentialUserEntity_displayName(const PublicKeyCredentialUserEntity *self) {
    return em_Val_as(jb_String, em_Val_get(PublicKeyCredentialEntity_as_val(self->inner), em_Val_from("displayName")));
}


void PublicKeyCredentialUserEntity_set_displayName(PublicKeyCredentialUserEntity* self, jb_String * value) {
    em_Val_set(PublicKeyCredentialEntity_as_val(self->inner), em_Val_from("displayName"), em_Val_from(value));
}


PublicKeyCredentialUserEntity PublicKeyCredentialUserEntity_new() {
    em_Val obj = em_Val_object();
    return PublicKeyCredentialUserEntity_from_val(&obj);
}

