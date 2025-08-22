#include <webcbind/PublicKeyCredentialRpEntity.h>

DEFINE_EMLITE_TYPE(PublicKeyCredentialRpEntity, PublicKeyCredentialEntity);


jb_String PublicKeyCredentialRpEntity_id(const PublicKeyCredentialRpEntity *self) {
    return em_Val_as(jb_String, em_Val_get(PublicKeyCredentialEntity_as_val(self->inner), em_Val_from("id")));
}


void PublicKeyCredentialRpEntity_set_id(PublicKeyCredentialRpEntity* self, jb_String * value) {
    em_Val_set(PublicKeyCredentialEntity_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


PublicKeyCredentialRpEntity PublicKeyCredentialRpEntity_new() {
    em_Val obj = em_Val_object();
    return PublicKeyCredentialRpEntity_from_val(&obj);
}

